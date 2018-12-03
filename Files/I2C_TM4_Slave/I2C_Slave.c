#include <stdint.h>
#include <stdio.h>
#include "lib/ST7735.h"
#include "lib/tm4c123gh6pm.h"
#include "lib/PLL.h"

// I2C Definitions
#define MAXRETRIES 5

// LCD Definition
#define ENTER      0x0D
#define SPACE      0x20
#define BACKSPACE  0x08
#define A          0x41
#define B          0x42
#define C          0x43
#define D          0x44
#define E          0x45
#define F          0x46
#define G          0x47
#define H          0x48
#define I          0x49
#define J          0x4A
#define K          0x4B
#define L          0x4C
#define M          0x4D
#define N          0x4E
#define O          0x4F
#define P          0x50
#define Q          0x51
#define R          0x52
#define S          0x53
#define T          0x54
#define U          0x55
#define V          0x56
#define W          0x57
#define X          0x58
#define Y          0x59
#define Z          0x5A
#define a          0x61
#define b          0x62
#define c          0x63
#define d          0x64
#define e          0x65
#define f          0x66
#define g          0x67
#define h          0x68
#define i          0x69
#define j          0x6A
#define k          0x6B
#define l          0x6C
#define m          0x6D
#define n          0x6E
#define o          0x6F
#define p          0x70
#define q          0x71
#define r          0x72
#define s          0x73
#define t          0x74
#define u          0x75
#define v          0x76
#define w          0x77
#define x          0x78
#define y          0x79
#define z          0x7A

#define RELAY   (*((volatile unsigned long *)0x40005004)) // PB0
    
// Initialization Prototype Functions
void DisableInterrupts(void); // Disable Interrupts
void EnableInterrupts(void);  // Enable Interrupts
void I2C_Init(void);          // I2C on Port B
void PLL_Init(void);          // Initialized to 50 MHz
void PortB_Init(void);        // Initialized Relay port
void PortF_Init(void);        // LED on Port F
void WaitForInterrupt(void);  // Wait for Interrupts

// I2C Functionality Prototype Functions
void I2C0_SlaveRec(void);
void I2C2_SlaveRec(void);

// LCD Functionality Prototype Functions
void Update_LCD(int data);

// Main Loop
int main()
{
        // Initialize Functions
        I2C_Init();                      // Initialize I2C Communication Registers
        PLL_Init();                      // Initialize clock to 50 MHz
        PortB_Init();                    // Initialize Port B for Relay
        PortF_Init();                    // Initialize Port F to display status
        ST7735_InitR(INITR_REDTAB);      // Initialize SSI on Port A for ST7735
        ST7735_FillScreen(ST7735_BLACK); // Black Background on LCD
        EnableInterrupts();
    
        while(1)
        {
            if((I2C0_SRIS_R & 0x01) == 0x01){
                I2C0_SlaveRec();
            }
            else if((I2C2_SRIS_R & 0x01) == 0x01){
                I2C2_SlaveRec();
            }
        }

}

// Initialize I2C, 
// with the appropriate settings 
//      Module 0 on PB2(SCL) and PB3(SDA) for LCD display
//      Module 2 on PE4(SCL) and PE5(SDA) for Relay switch
//      Module 3 on .... for a Fan
//      I2C0_SOAR is 0x0F
//      I2C2_SOAR is 0x1F
//      I2C3_SOAR is ...
void I2C_Init(void)
{
    // I2C_0 as the first slave to display characters on LCD
    // Address: 0x0F
    // I2C pins: PB2(SCL)
    //           PB3(SDA)
    SYSCTL_RCGCI2C_R |= 0x01; // Using I2C Module 0
    SYSCTL_RCGC2_R |= SYSCTL_RCGC2_GPIOB;

    while((SYSCTL_RCGCGPIO_R & SYSCTL_RCGC2_GPIOB) == 0) {}; // Wait until ready

    GPIO_PORTB_AFSEL_R |= 0x0C; // Enable alternate functions on PB2 and PB3
    GPIO_PORTB_ODR_R |= 0x08;   // Enable Open Drain on PB3
    GPIO_PORTB_DEN_R |= 0x0C;   // Enable Digital I/O on PB2 and PB3
                                                        // Set Port B, pins 2 and 3 as I2C
    GPIO_PORTB_PCTL_R = (GPIO_PORTB_PCTL_R & 0xFFFF00FF) + 0x00003300;
    GPIO_PORTB_AMSEL_R &= ~0x0C; // Disable Analog Functionality on PB2 and PB3
    I2C0_MCR_R |= 0x00000020;    // Set I2C as a slave
    I2C0_SACKCTL_R |= 0x01;      // Enable ACK or NACK to be sent
    I2C0_SOAR_R |= 0x0F;         // Set slave address to 0001 0110
    I2C0_SCSR_R |= 0x01;         // Enable Slave Operations
    I2C0_SIMR_R |= 0x01;         // Enable Slave Interrupts
        
    // I2C_2 as the second slave to control a relay and display characters on LCD
    // Address: 0x1F
    // I2C pins: PE4(SCL)
    //           PE5(SDA)    
    SYSCTL_RCGCI2C_R |= 0x04;    // Using I2C Module 2
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGC2_GPIOE; // Activate Port E
    while((SYSCTL_RCGCGPIO_R & SYSCTL_RCGC2_GPIOE) == 0) {}; // Wait until ready

    GPIO_PORTE_AFSEL_R |= 0x30;  // Enable alternate functions on PE4 and PE5
    GPIO_PORTE_ODR_R |= 0x20;    // Enable Open Drain on PE5
    GPIO_PORTE_DEN_R |= 0x30;    // Enable Digital I/O on PE4 and PE5
                                                        // Set Port E, pins 4 and 5 as I2C
    GPIO_PORTE_PCTL_R = (GPIO_PORTE_PCTL_R & 0xFF00FFFF) + 0x00330000;
    GPIO_PORTE_AMSEL_R &= ~0x30; // Disable Analog Functionality on PE4 and PE5
    I2C2_MCR_R |= 0x00000020;    // Set I2C as a slave
    I2C2_SACKCTL_R |= 0x01;      // Enable ACK or NACK to be sent
    I2C2_SOAR_R |= 0x1F;         // Set slave address to 0001 1111
    I2C2_SCSR_R |= 0x01;         // Enable Slave Operations
    I2C2_SIMR_R |= 0x01;         // Enable Slave Interrupts
}

void PortB_Init(void){
    
    SYSCTL_RCGC2_R |= SYSCTL_RCGC2_GPIOB;
    while((SYSCTL_RCGCGPIO_R & SYSCTL_RCGC2_GPIOB) == 0) {}; // Wait until ready    
    GPIO_PORTB_AFSEL_R &= ~0x01;        // Disable Altenate function on PB0
    GPIO_PORTB_AMSEL_R &= ~0x01;        // Disable Analog Mode on PB0
    GPIO_PORTB_PCTL_R  &= ~0x0000000F;  // Reset PB0 to GPIO
    GPIO_PORTB_DIR_R   |=  0x01;        // Set PB0 as output port
    GPIO_PORTB_DEN_R   |=  0x01;        // Enable Digital I/O on PB0
    GPIO_PORTB_DATA_R  |=  0x01;        // Set Relay to Low by default
}

// Initializes Port F for LED Functionality
void PortF_Init(void)
{
    SYSCTL_RCGC2_R |= 0x00000020;   // Initialize clock for Port F
    GPIO_PORTF_LOCK_R = 0x4C4F434B; // Unlocks Port F
    GPIO_PORTF_CR_R |= 0x0E;        // Allow changes to PF1, PF2, and PF3
    GPIO_PORTF_AMSEL_R = 0x00;      // Disable Analog Functionality on PF1, PF2, and PF3
    GPIO_PORTF_PCTL_R &= 0x00;      // Disable Port Control for PF1, PF2, and PF3
    GPIO_PORTF_DIR_R |= 0x0E;       // Set PF1, PF2, and PF3 to outputs
    GPIO_PORTF_AFSEL_R = 0x00;      // Disable Alternate Functions
    GPIO_PORTF_DEN_R |= 0x0E;       // Enable Digital Pins on PF1, PF2, and PF3
}

// Handle the receive request
void I2C0_SlaveRec(void)
{
    // Clear I2C_0_Interupt
    I2C0_SICR_R |= 0x07;
    
    // Check Receive Request (0 no received data, 1 got data in I2CSDR)
    if((I2C0_SCSR_R & 0x01) == 0x01)
    {
        GPIO_PORTF_DATA_R = 0x08;   // Turn on LED to confirm it got data
        Update_LCD(I2C0_SDR_R);     // Update the LCD with received data
    }
}

void I2C2_SlaveRec(void)
{
    unsigned long I2C_Slave_Status = I2C2_SCSR_R;
    // Check Receive Request (0 no received data, 1 got data in I2CSDR)
    // I2C_SCSR_R flags Receive Request(RREQ) at bit[0]
    //  and flags First Bit Receive(FBR) at bit[2]
    //  0x05 as both are flagged when received a byte of data
    if(I2C_Slave_Status == 0x05)    
    {
        if(I2C2_SDR_R == 0x01){
            RELAY &= ~0x01;
            GPIO_PORTF_DATA_R = 0x06;   // Turn on LED
            ST7735_OutString("Light bulb is on.\n");
        }
        else if(I2C2_SDR_R == 0x00){
            RELAY |= 0x01;
            GPIO_PORTF_DATA_R = 0x00;   // Turn off LED
            ST7735_OutString("Light bulb is off.\n");
        }
        else {
            // SDR_R needs to be read in order to clear DATARIS in 
            // Slave Raw Interrupt Status(SRIS) register
            unsigned long dump_data = I2C2_SDR_R;   
            
            RELAY = RELAY;
            ST7735_OutString("Invalid Input\n");
            ST7735_OutString("Please send either\n0x01 or 0x00\nto turn on or off\n");
        }
    }
    
    // Slave Interrupt Clear(SICR)
    //  Slave Raw Interrupt Status(SRIS) bits are high when
    //  the slave receive a byte of data.
    //  to clear the bit, set high in SICR bits.
    //  [2] - Stop Condition Interrupt Clear(STOPIC)
    //  [1] - Start Condition Interrupt Clear(STARTIC)
    //  [0] - Data Interrupt Clear(DATAIC)
    I2C2_SICR_R |= 0x07;     

}

// Update the LCD with the received values
void Update_LCD(int data)
{
        switch(data)
        {
            case ENTER: 	ST7735_OutChar('\r'); break; 
            case BACKSPACE: ST7735_OutChar('\b'); break;
            case SPACE: 	ST7735_OutChar(' '); break;
            case A: 		ST7735_OutChar('A'); break;
            case B:			ST7735_OutChar('B'); break;
            case C:			ST7735_OutChar('C'); break;
            case D:			ST7735_OutChar('D'); break;           
			case E:			ST7735_OutChar('E'); break;            
			case F:			ST7735_OutChar('F'); break;
            case G:			ST7735_OutChar('G'); break;
            case H:			ST7735_OutChar('H'); break;
            case I:			ST7735_OutChar('I'); break;
            case J:			ST7735_OutChar('J'); break;
            case K:			ST7735_OutChar('K'); break;
            case L:			ST7735_OutChar('L'); break;
            case M:			ST7735_OutChar('M'); break;
            case N:			ST7735_OutChar('N'); break;
            case O:			ST7735_OutChar('O'); break;
            case P:			ST7735_OutChar('P'); break;
            case Q:			ST7735_OutChar('Q'); break;
            case R:			ST7735_OutChar('R'); break;
            case S:			ST7735_OutChar('S'); break;
            case T:			ST7735_OutChar('T'); break;
            case U:			ST7735_OutChar('U'); break;
            case V:			ST7735_OutChar('V'); break;
            case W:			ST7735_OutChar('W'); break;
            case X:			ST7735_OutChar('X'); break;
            case Y:			ST7735_OutChar('Y'); break;
            case Z:			ST7735_OutChar('Z'); break;
            case a:			ST7735_OutChar('a'); break;
            case b:			ST7735_OutChar('b'); break;
            case c:			ST7735_OutChar('c'); break;
            case d:			ST7735_OutChar('d'); break;
            case e:			ST7735_OutChar('e'); break;
            case f:			ST7735_OutChar('f'); break;
            case g:			ST7735_OutChar('g'); break;
            case h:			ST7735_OutChar('h'); break;            
			case i:			ST7735_OutChar('i'); break;            
			case j:			ST7735_OutChar('j'); break;
            case k:			ST7735_OutChar('k'); break;
            case l:			ST7735_OutChar('l'); break;
            case m:			ST7735_OutChar('m'); break;
            case n:			ST7735_OutChar('n'); break;
            case o:			ST7735_OutChar('o'); break;
            case p:			ST7735_OutChar('p'); break;
            case q:			ST7735_OutChar('q'); break;
            case r:			ST7735_OutChar('r'); break;
            case s:			ST7735_OutChar('s'); break;
            case t:			ST7735_OutChar('t'); break;
            case u:			ST7735_OutChar('u'); break;
            case v:			ST7735_OutChar('v'); break;
            case w:			ST7735_OutChar('w'); break;
            case x:			ST7735_OutChar('x'); break;
            case y:			ST7735_OutChar('y'); break;
            case z:			ST7735_OutChar('z'); break;
            default:			 Output_Clear(); break;
        }

}

