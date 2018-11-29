/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Charles/OneDrive/2018Fall_CSULB/CECS490B/Current_Project/Files/I2C_Project_10_24/I2C_Core.v";
static unsigned int ng1[] = {0U, 1U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {7U, 0U};
static int ng7[] = {3, 0};



static void Cont_76_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 9920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 7400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 11904);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 11728);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 7240);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t20, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_77_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 10168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 7720);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 11968);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 11744);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 7560);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t20, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_78_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 10416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 7720);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t8) == 0)
        goto LAB4;

LAB6:    t14 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t14) = 1;

LAB7:    t15 = (t5 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t5) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB9;

LAB8:    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    memset(t4, 0, 8);
    t25 = (t5 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t5);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t25) != 0)
        goto LAB12;

LAB13:    t32 = (t4 + 4);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB14;

LAB15:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t32);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t32) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t36, 8);

LAB22:    t42 = (t0 + 12032);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 1U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans(t42, 0, 0);
    t55 = (t0 + 11760);
    *((int *)t55) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t5) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB8;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t31 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t36 = (t0 + 6360U);
    t37 = *((char **)t36);
    goto LAB15;

LAB16:    t36 = ((char*)((ng1)));
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 1, t37, 1, t36, 1);
    goto LAB22;

LAB20:    memcpy(t3, t37, 8);
    goto LAB22;

}

static void Cont_91_3(char *t0)
{
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 10664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 7880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    t24 = (t0 + 12096);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t8 + 4);
    t32 = *((unsigned int *)t8);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 0);
    t37 = (t0 + 11776);
    *((int *)t37) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

}

static void Always_93_4(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 10912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 11792);
    *((int *)t2) = 1;
    t3 = (t0 + 10944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);

LAB5:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 5560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6680U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(101, ng0);

LAB20:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 7880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 8, t4, 8, t5, 8);
    t11 = (t0 + 7880);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 8040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(94, ng0);

LAB9:    xsi_set_current_line(95, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 7880);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(98, ng0);

LAB13:    xsi_set_current_line(99, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 7880);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 8040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t5) == 0)
        goto LAB14;

LAB16:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB17:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB19;

LAB18:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    t23 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t23, t13, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t13) = 1;
    goto LAB17;

LAB19:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB18;

}

static void Always_173_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 11160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 11808);
    *((int *)t2) = 1;
    t3 = (t0 + 11192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(173, ng0);

LAB5:    xsi_set_current_line(174, ng0);
    t4 = (t0 + 5560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 9000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8840);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(174, ng0);
    t11 = (t0 + 608);
    t12 = *((char **)t11);
    t11 = (t0 + 8840);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 5, 0LL);
    goto LAB8;

}

static void Always_179_6(char *t0)
{
    char t16[8];
    char t20[8];
    char t21[8];
    char t46[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t47;

LAB0:    t1 = (t0 + 11408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 11824);
    *((int *)t2) = 1;
    t3 = (t0 + 11440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(179, ng0);

LAB5:    xsi_set_current_line(180, ng0);
    t4 = (t0 + 5560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(192, ng0);

LAB10:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 8840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = (t0 + 608);
    t11 = *((char **)t5);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t11, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB36;

LAB37:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB38;

LAB39:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB42;

LAB43:    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB44;

LAB45:    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB46;

LAB47:    t2 = (t0 + 3056);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB48;

LAB49:    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB50;

LAB51:    t2 = (t0 + 3328);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB52;

LAB53:
LAB54:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(180, ng0);

LAB9:    xsi_set_current_line(181, ng0);
    t11 = (t0 + 3464);
    t12 = *((char **)t11);
    t11 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(196, ng0);

LAB55:    xsi_set_current_line(197, ng0);
    t5 = (t0 + 6040U);
    t12 = *((char **)t5);
    t5 = (t12 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(209, ng0);

LAB60:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 3464);
    t3 = *((char **)t2);
    t2 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB58:    goto LAB54;

LAB14:    xsi_set_current_line(226, ng0);

LAB61:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 3600);
    t5 = *((char **)t2);
    t2 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB16:    xsi_set_current_line(237, ng0);

LAB62:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 3736);
    t5 = *((char **)t2);
    t2 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5720U);
    t5 = *((char **)t3);
    xsi_vlogtype_concat(t16, 8, 8, 2U, t5, 7, t2, 1);
    t3 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t3, t16, 0, 0, 8, 0LL);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(246, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB18:    xsi_set_current_line(254, ng0);

LAB63:    xsi_set_current_line(255, ng0);
    t2 = (t0 + 8680);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(256, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 8360);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_index_select_value(t16, 1, t5, t14, 2, t18, 3, 2);
    t19 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t19, t16, 0, 0, 1, 0LL);
    xsi_set_current_line(260, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(262, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB20:    xsi_set_current_line(265, ng0);

LAB64:    xsi_set_current_line(266, ng0);
    t2 = (t0 + 8680);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(269, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(270, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(273, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(274, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB22:    xsi_set_current_line(276, ng0);

LAB65:    xsi_set_current_line(277, ng0);
    t2 = (t0 + 8360);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t21, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t15);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t15);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB69;

LAB66:    if (t26 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t21) = 1;

LAB69:    memset(t20, 0, 8);
    t18 = (t21 + 4);
    t29 = *((unsigned int *)t18);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t18) != 0)
        goto LAB72;

LAB73:    t34 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB74;

LAB75:    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t34);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t34) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t20) > 0)
        goto LAB80;

LAB81:    memcpy(t16, t46, 8);

LAB82:    t47 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t47, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(278, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(279, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(280, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(281, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(282, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(283, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(284, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(285, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB24:    xsi_set_current_line(287, ng0);

LAB83:    xsi_set_current_line(288, ng0);
    t2 = (t0 + 8680);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(292, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(293, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(294, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t5, 3, t11, 32);
    t12 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(295, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(296, ng0);
    t2 = (t0 + 8680);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3872);
    t12 = *((char **)t11);
    memset(t21, 0, 8);
    t11 = (t5 + 4);
    t14 = (t12 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t14);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t14);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB87;

LAB84:    if (t26 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t21) = 1;

LAB87:    memset(t20, 0, 8);
    t17 = (t21 + 4);
    t29 = *((unsigned int *)t17);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t17) != 0)
        goto LAB90;

LAB91:    t19 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t19);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB92;

LAB93:    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t19);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t19) > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t20) > 0)
        goto LAB98;

LAB99:    memcpy(t16, t39, 8);

LAB100:    t34 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t34, t16, 0, 0, 5, 0LL);
    goto LAB54;

LAB26:    xsi_set_current_line(306, ng0);

LAB101:    xsi_set_current_line(307, ng0);
    t2 = (t0 + 8680);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(311, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(312, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(313, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(314, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng7)));
    memset(t21, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t14);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB105;

LAB102:    if (t26 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t21) = 1;

LAB105:    memset(t20, 0, 8);
    t17 = (t21 + 4);
    t29 = *((unsigned int *)t17);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t17) != 0)
        goto LAB108;

LAB109:    t19 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t19);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB110;

LAB111:    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t19);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t19) > 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t20) > 0)
        goto LAB116;

LAB117:    memcpy(t16, t39, 8);

LAB118:    t34 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t34, t16, 0, 0, 5, 0LL);
    goto LAB54;

LAB28:    xsi_set_current_line(317, ng0);

LAB119:    xsi_set_current_line(318, ng0);
    t2 = (t0 + 6520U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t21, 0, 8);
    t11 = (t5 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB123;

LAB120:    if (t26 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t21) = 1;

LAB123:    memset(t20, 0, 8);
    t15 = (t21 + 4);
    t29 = *((unsigned int *)t15);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t15) != 0)
        goto LAB126;

LAB127:    t18 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t18);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB128;

LAB129:    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t18);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t18) > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t20) > 0)
        goto LAB134;

LAB135:    memcpy(t16, t46, 8);

LAB136:    t44 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t44, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(319, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(320, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(321, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(322, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(323, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(324, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(325, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(326, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB30:    xsi_set_current_line(328, ng0);

LAB137:    xsi_set_current_line(329, ng0);
    t2 = (t0 + 6520U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t21, 0, 8);
    t11 = (t5 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB141;

LAB138:    if (t26 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t21) = 1;

LAB141:    memset(t20, 0, 8);
    t15 = (t21 + 4);
    t29 = *((unsigned int *)t15);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t15) != 0)
        goto LAB144;

LAB145:    t18 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t18);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB146;

LAB147:    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t18);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t18) > 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t20) > 0)
        goto LAB152;

LAB153:    memcpy(t16, t44, 8);

LAB154:    t39 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t39, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(330, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(331, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(332, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(333, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(334, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(335, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(336, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(337, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB32:    xsi_set_current_line(339, ng0);

LAB155:    xsi_set_current_line(340, ng0);
    t2 = (t0 + 8680);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(341, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(342, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(343, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(344, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(346, ng0);
    t2 = (t0 + 8680);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4008);
    t12 = *((char **)t11);
    memset(t16, 0, 8);
    t11 = (t5 + 4);
    t14 = (t12 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t14);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t14);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB159;

LAB156:    if (t26 != 0)
        goto LAB158;

LAB157:    *((unsigned int *)t16) = 1;

LAB159:    t17 = (t16 + 4);
    t29 = *((unsigned int *)t17);
    t30 = (~(t29));
    t31 = *((unsigned int *)t16);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB160;

LAB161:    xsi_set_current_line(352, ng0);

LAB164:    xsi_set_current_line(353, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(354, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(355, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 3, t11, 32);
    t12 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(356, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);

LAB162:    goto LAB54;

LAB34:    xsi_set_current_line(363, ng0);

LAB165:    xsi_set_current_line(364, ng0);
    t2 = (t0 + 8680);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(365, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(366, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(367, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(368, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 8360);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_index_select_value(t16, 1, t5, t14, 2, t18, 3, 2);
    t19 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t19, t16, 0, 0, 1, 0LL);
    xsi_set_current_line(369, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(370, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(371, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(372, ng0);
    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB36:    xsi_set_current_line(374, ng0);

LAB166:    xsi_set_current_line(375, ng0);
    t2 = (t0 + 8680);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(376, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(377, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(378, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(379, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(380, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(381, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(382, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(383, ng0);
    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB38:    xsi_set_current_line(385, ng0);

LAB167:    xsi_set_current_line(386, ng0);
    t2 = (t0 + 8360);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t21, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t15);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t15);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB171;

LAB168:    if (t26 != 0)
        goto LAB170;

LAB169:    *((unsigned int *)t21) = 1;

LAB171:    memset(t20, 0, 8);
    t18 = (t21 + 4);
    t29 = *((unsigned int *)t18);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t18) != 0)
        goto LAB174;

LAB175:    t34 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB176;

LAB177:    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t34);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t34) > 0)
        goto LAB180;

LAB181:    if (*((unsigned int *)t20) > 0)
        goto LAB182;

LAB183:    memcpy(t16, t46, 8);

LAB184:    t47 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t47, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(387, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(388, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(389, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(390, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(391, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(392, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(393, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(394, ng0);
    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB40:    xsi_set_current_line(396, ng0);

LAB185:    xsi_set_current_line(397, ng0);
    t2 = (t0 + 8680);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(398, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(399, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(400, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(401, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(402, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(403, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t5, 3, t11, 32);
    t12 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(404, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(405, ng0);
    t2 = (t0 + 8680);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3872);
    t12 = *((char **)t11);
    memset(t21, 0, 8);
    t11 = (t5 + 4);
    t14 = (t12 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t14);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t14);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB189;

LAB186:    if (t26 != 0)
        goto LAB188;

LAB187:    *((unsigned int *)t21) = 1;

LAB189:    memset(t20, 0, 8);
    t17 = (t21 + 4);
    t29 = *((unsigned int *)t17);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB190;

LAB191:    if (*((unsigned int *)t17) != 0)
        goto LAB192;

LAB193:    t19 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t19);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB194;

LAB195:    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t19);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t19) > 0)
        goto LAB198;

LAB199:    if (*((unsigned int *)t20) > 0)
        goto LAB200;

LAB201:    memcpy(t16, t39, 8);

LAB202:    t34 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t34, t16, 0, 0, 5, 0LL);
    goto LAB54;

LAB42:    xsi_set_current_line(410, ng0);

LAB203:    xsi_set_current_line(411, ng0);
    t2 = (t0 + 8680);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(412, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(413, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(414, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(415, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(416, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(417, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(418, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(419, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng7)));
    memset(t21, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t14);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB207;

LAB204:    if (t26 != 0)
        goto LAB206;

LAB205:    *((unsigned int *)t21) = 1;

LAB207:    memset(t20, 0, 8);
    t17 = (t21 + 4);
    t29 = *((unsigned int *)t17);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB208;

LAB209:    if (*((unsigned int *)t17) != 0)
        goto LAB210;

LAB211:    t19 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t19);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB212;

LAB213:    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t19);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB214;

LAB215:    if (*((unsigned int *)t19) > 0)
        goto LAB216;

LAB217:    if (*((unsigned int *)t20) > 0)
        goto LAB218;

LAB219:    memcpy(t16, t39, 8);

LAB220:    t34 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t34, t16, 0, 0, 5, 0LL);
    goto LAB54;

LAB44:    xsi_set_current_line(421, ng0);

LAB221:    xsi_set_current_line(422, ng0);
    t2 = (t0 + 6520U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t21, 0, 8);
    t11 = (t5 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB225;

LAB222:    if (t26 != 0)
        goto LAB224;

LAB223:    *((unsigned int *)t21) = 1;

LAB225:    memset(t20, 0, 8);
    t15 = (t21 + 4);
    t29 = *((unsigned int *)t15);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB226;

LAB227:    if (*((unsigned int *)t15) != 0)
        goto LAB228;

LAB229:    t18 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t18);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB230;

LAB231:    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t18);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB232;

LAB233:    if (*((unsigned int *)t18) > 0)
        goto LAB234;

LAB235:    if (*((unsigned int *)t20) > 0)
        goto LAB236;

LAB237:    memcpy(t16, t38, 8);

LAB238:    t19 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t19, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(423, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(424, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(425, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(426, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(427, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(428, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(429, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(430, ng0);
    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB46:    xsi_set_current_line(432, ng0);

LAB239:    xsi_set_current_line(433, ng0);
    t2 = (t0 + 6520U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t21, 0, 8);
    t11 = (t5 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB243;

LAB240:    if (t26 != 0)
        goto LAB242;

LAB241:    *((unsigned int *)t21) = 1;

LAB243:    memset(t20, 0, 8);
    t15 = (t21 + 4);
    t29 = *((unsigned int *)t15);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB244;

LAB245:    if (*((unsigned int *)t15) != 0)
        goto LAB246;

LAB247:    t18 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t18);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB248;

LAB249:    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t18);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB250;

LAB251:    if (*((unsigned int *)t18) > 0)
        goto LAB252;

LAB253:    if (*((unsigned int *)t20) > 0)
        goto LAB254;

LAB255:    memcpy(t16, t44, 8);

LAB256:    t39 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t39, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(434, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(435, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(436, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(437, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(438, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(439, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(440, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(441, ng0);
    t2 = (t0 + 3056);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB48:    xsi_set_current_line(443, ng0);

LAB257:    xsi_set_current_line(444, ng0);
    t2 = (t0 + 8680);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(445, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(446, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(447, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(448, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(449, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(450, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(451, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 3, t11, 32);
    t12 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(452, ng0);
    t2 = (t0 + 8680);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4144);
    t12 = *((char **)t11);
    memset(t21, 0, 8);
    t11 = (t5 + 4);
    t14 = (t12 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t14);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t14);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB261;

LAB258:    if (t26 != 0)
        goto LAB260;

LAB259:    *((unsigned int *)t21) = 1;

LAB261:    memset(t20, 0, 8);
    t17 = (t21 + 4);
    t29 = *((unsigned int *)t17);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB262;

LAB263:    if (*((unsigned int *)t17) != 0)
        goto LAB264;

LAB265:    t19 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t19);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB266;

LAB267:    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t19);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB268;

LAB269:    if (*((unsigned int *)t19) > 0)
        goto LAB270;

LAB271:    if (*((unsigned int *)t20) > 0)
        goto LAB272;

LAB273:    memcpy(t16, t39, 8);

LAB274:    t34 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t34, t16, 0, 0, 5, 0LL);
    goto LAB54;

LAB50:    xsi_set_current_line(459, ng0);

LAB275:    xsi_set_current_line(460, ng0);
    t2 = (t0 + 4144);
    t5 = *((char **)t2);
    t2 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(461, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(462, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(463, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(464, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(465, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(466, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(467, ng0);
    t2 = (t0 + 3328);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB52:    xsi_set_current_line(469, ng0);

LAB276:    xsi_set_current_line(470, ng0);
    t2 = (t0 + 3464);
    t5 = *((char **)t2);
    t2 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(471, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(472, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(473, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(474, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(475, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(476, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(477, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB54;

LAB56:    xsi_set_current_line(197, ng0);

LAB59:    xsi_set_current_line(198, ng0);
    t14 = (t0 + 3600);
    t15 = *((char **)t14);
    t14 = (t0 + 8680);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 3, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB58;

LAB68:    t17 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t20) = 1;
    goto LAB73;

LAB72:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB73;

LAB74:    t38 = (t0 + 3872);
    t39 = *((char **)t38);
    goto LAB75;

LAB76:    t38 = (t0 + 8680);
    t44 = (t38 + 56U);
    t45 = *((char **)t44);
    memcpy(t46, t45, 8);
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t16, 32, t39, 32, t46, 32);
    goto LAB82;

LAB80:    memcpy(t16, t39, 8);
    goto LAB82;

LAB86:    t15 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t20) = 1;
    goto LAB91;

LAB90:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB91;

LAB92:    t34 = (t0 + 1560);
    t38 = *((char **)t34);
    goto LAB93;

LAB94:    t34 = (t0 + 1016);
    t39 = *((char **)t34);
    goto LAB95;

LAB96:    xsi_vlog_unsigned_bit_combine(t16, 32, t38, 32, t39, 32);
    goto LAB100;

LAB98:    memcpy(t16, t38, 8);
    goto LAB100;

LAB104:    t15 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB105;

LAB106:    *((unsigned int *)t20) = 1;
    goto LAB109;

LAB108:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB109;

LAB110:    t34 = (t0 + 608);
    t38 = *((char **)t34);
    goto LAB111;

LAB112:    t34 = (t0 + 1696);
    t39 = *((char **)t34);
    goto LAB113;

LAB114:    xsi_vlog_unsigned_bit_combine(t16, 32, t38, 32, t39, 32);
    goto LAB118;

LAB116:    memcpy(t16, t38, 8);
    goto LAB118;

LAB122:    t14 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB123;

LAB124:    *((unsigned int *)t20) = 1;
    goto LAB127;

LAB126:    t17 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB127;

LAB128:    t19 = (t0 + 4008);
    t34 = *((char **)t19);
    goto LAB129;

LAB130:    t19 = (t0 + 8680);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    memcpy(t46, t39, 8);
    goto LAB131;

LAB132:    xsi_vlog_unsigned_bit_combine(t16, 32, t34, 32, t46, 32);
    goto LAB136;

LAB134:    memcpy(t16, t34, 8);
    goto LAB136;

LAB140:    t14 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB141;

LAB142:    *((unsigned int *)t20) = 1;
    goto LAB145;

LAB144:    t17 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB145;

LAB146:    t19 = (t0 + 8680);
    t34 = (t19 + 56U);
    t38 = *((char **)t34);
    memcpy(t46, t38, 8);
    goto LAB147;

LAB148:    t39 = (t0 + 3872);
    t44 = *((char **)t39);
    goto LAB149;

LAB150:    xsi_vlog_unsigned_bit_combine(t16, 32, t46, 32, t44, 32);
    goto LAB154;

LAB152:    memcpy(t16, t46, 8);
    goto LAB154;

LAB158:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB159;

LAB160:    xsi_set_current_line(346, ng0);

LAB163:    xsi_set_current_line(347, ng0);
    t18 = (t0 + 5880U);
    t19 = *((char **)t18);
    t18 = (t0 + 8200);
    xsi_vlogvar_wait_assign_value(t18, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 8360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(349, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(350, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 9000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB162;

LAB170:    t17 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB171;

LAB172:    *((unsigned int *)t20) = 1;
    goto LAB175;

LAB174:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB175;

LAB176:    t38 = (t0 + 3872);
    t39 = *((char **)t38);
    goto LAB177;

LAB178:    t38 = (t0 + 8680);
    t44 = (t38 + 56U);
    t45 = *((char **)t44);
    memcpy(t46, t45, 8);
    goto LAB179;

LAB180:    xsi_vlog_unsigned_bit_combine(t16, 32, t39, 32, t46, 32);
    goto LAB184;

LAB182:    memcpy(t16, t39, 8);
    goto LAB184;

LAB188:    t15 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB189;

LAB190:    *((unsigned int *)t20) = 1;
    goto LAB193;

LAB192:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB193;

LAB194:    t34 = (t0 + 2648);
    t38 = *((char **)t34);
    goto LAB195;

LAB196:    t34 = (t0 + 2104);
    t39 = *((char **)t34);
    goto LAB197;

LAB198:    xsi_vlog_unsigned_bit_combine(t16, 32, t38, 32, t39, 32);
    goto LAB202;

LAB200:    memcpy(t16, t38, 8);
    goto LAB202;

LAB206:    t15 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB207;

LAB208:    *((unsigned int *)t20) = 1;
    goto LAB211;

LAB210:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB211;

LAB212:    t34 = (t0 + 608);
    t38 = *((char **)t34);
    goto LAB213;

LAB214:    t34 = (t0 + 2784);
    t39 = *((char **)t34);
    goto LAB215;

LAB216:    xsi_vlog_unsigned_bit_combine(t16, 32, t38, 32, t39, 32);
    goto LAB220;

LAB218:    memcpy(t16, t38, 8);
    goto LAB220;

LAB224:    t14 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB225;

LAB226:    *((unsigned int *)t20) = 1;
    goto LAB229;

LAB228:    t17 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB229;

LAB230:    t19 = (t0 + 4144);
    t34 = *((char **)t19);
    goto LAB231;

LAB232:    t19 = (t0 + 3872);
    t38 = *((char **)t19);
    goto LAB233;

LAB234:    xsi_vlog_unsigned_bit_combine(t16, 32, t34, 32, t38, 32);
    goto LAB238;

LAB236:    memcpy(t16, t34, 8);
    goto LAB238;

LAB242:    t14 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB243;

LAB244:    *((unsigned int *)t20) = 1;
    goto LAB247;

LAB246:    t17 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB247;

LAB248:    t19 = (t0 + 8680);
    t34 = (t19 + 56U);
    t38 = *((char **)t34);
    memcpy(t46, t38, 8);
    goto LAB249;

LAB250:    t39 = (t0 + 3872);
    t44 = *((char **)t39);
    goto LAB251;

LAB252:    xsi_vlog_unsigned_bit_combine(t16, 32, t46, 32, t44, 32);
    goto LAB256;

LAB254:    memcpy(t16, t46, 8);
    goto LAB256;

LAB260:    t15 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB261;

LAB262:    *((unsigned int *)t20) = 1;
    goto LAB265;

LAB264:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB265;

LAB266:    t34 = (t0 + 3192);
    t38 = *((char **)t34);
    goto LAB267;

LAB268:    t34 = (t0 + 2648);
    t39 = *((char **)t34);
    goto LAB269;

LAB270:    xsi_vlog_unsigned_bit_combine(t16, 32, t38, 32, t39, 32);
    goto LAB274;

LAB272:    memcpy(t16, t38, 8);
    goto LAB274;

}


extern void work_m_00000000002502798880_0062890941_init()
{
	static char *pe[] = {(void *)Cont_76_0,(void *)Cont_77_1,(void *)Cont_78_2,(void *)Cont_91_3,(void *)Always_93_4,(void *)Always_173_5,(void *)Always_179_6};
	xsi_register_didat("work_m_00000000002502798880_0062890941", "isim/I2C_Top_Level_tb_isim_beh.exe.sim/work/m_00000000002502798880_0062890941.didat");
	xsi_register_executes(pe);
}
