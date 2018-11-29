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
static const char *ng0 = "C:/Users/Charles/OneDrive/2018Fall_CSULB/CECS490B/Current_Project/Files/I2C_Project_10_24/Debounce.v";
static unsigned int ng1[] = {999999U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {15U, 0U};
static unsigned int ng17[] = {14U, 0U};



static void Cont_60_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 4736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 6192);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 6048);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_62_1(char *t0)
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

LAB0:    t1 = (t0 + 4984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 6064);
    *((int *)t2) = 1;
    t3 = (t0 + 5016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 2296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 20, t4, 20, t5, 20);
    t11 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 20, 0LL);

LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(63, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 20, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 20, 0LL);
    goto LAB10;

}

static void Always_72_2(char *t0)
{
    char t14[8];
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
    char *t13;
    char *t15;

LAB0:    t1 = (t0 + 5232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 6080);
    *((int *)t2) = 1;
    t3 = (t0 + 5264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 2296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3656);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t14, 4, 4, 2U, t12, 3, t4, 1);
    t13 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t13, t14, 0, 0, 1, 0LL);
    t15 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t15, t14, 1, 0, 3, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(73, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    t13 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t13, t11, 1, 0, 3, 0LL);
    goto LAB7;

}

static void Always_77_3(char *t0)
{
    char t8[8];
    char t12[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t9;
    char *t10;
    char *t11;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 5480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 6096);
    *((int *)t2) = 1;
    t3 = (t0 + 5512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 3496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3656);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t0 + 3496);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t8, 4, 4, 2U, t5, 3, t3, 1);

LAB6:    t6 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t6, 4);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng12)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng14)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t9 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(81, ng0);
    t7 = ((char*)((ng2)));
    t10 = (t0 + 3336);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 1);
    t11 = (t0 + 3656);
    xsi_vlogvar_assign_value(t11, t7, 1, 0, 3);
    goto LAB39;

LAB9:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3336);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3656);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 3);
    goto LAB39;

LAB11:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3336);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3656);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 3);
    goto LAB39;

LAB13:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3336);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3656);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 3);
    goto LAB39;

LAB15:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3336);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3656);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 3);
    goto LAB39;

LAB17:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 2776U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t4 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t3) != 0)
        goto LAB42;

LAB43:    t6 = (t13 + 4);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t6);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB44;

LAB45:    t22 = *((unsigned int *)t13);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t6) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t13) > 0)
        goto LAB50;

LAB51:    memcpy(t12, t10, 8);

LAB52:    t11 = (t0 + 3336);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);
    t26 = (t0 + 3656);
    xsi_vlogvar_assign_value(t26, t12, 1, 0, 3);
    goto LAB39;

LAB19:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 2776U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t4 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t3) != 0)
        goto LAB55;

LAB56:    t6 = (t13 + 4);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t6);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB57;

LAB58:    t22 = *((unsigned int *)t13);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t6) > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t13) > 0)
        goto LAB63;

LAB64:    memcpy(t12, t10, 8);

LAB65:    t11 = (t0 + 3336);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);
    t26 = (t0 + 3656);
    xsi_vlogvar_assign_value(t26, t12, 1, 0, 3);
    goto LAB39;

LAB21:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 2776U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t4 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t3) != 0)
        goto LAB68;

LAB69:    t6 = (t13 + 4);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t6);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB70;

LAB71:    t22 = *((unsigned int *)t13);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t6) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t13) > 0)
        goto LAB76;

LAB77:    memcpy(t12, t10, 8);

LAB78:    t11 = (t0 + 3336);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);
    t26 = (t0 + 3656);
    xsi_vlogvar_assign_value(t26, t12, 1, 0, 3);
    goto LAB39;

LAB23:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 3336);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3656);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 3);
    goto LAB39;

LAB25:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 2776U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t4 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t3) != 0)
        goto LAB81;

LAB82:    t6 = (t13 + 4);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t6);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB83;

LAB84:    t22 = *((unsigned int *)t13);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t6) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t13) > 0)
        goto LAB89;

LAB90:    memcpy(t12, t10, 8);

LAB91:    t11 = (t0 + 3336);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);
    t26 = (t0 + 3656);
    xsi_vlogvar_assign_value(t26, t12, 1, 0, 3);
    goto LAB39;

LAB27:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 2776U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t4 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t3) != 0)
        goto LAB94;

LAB95:    t6 = (t13 + 4);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t6);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB96;

LAB97:    t22 = *((unsigned int *)t13);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t6) > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t13) > 0)
        goto LAB102;

LAB103:    memcpy(t12, t10, 8);

LAB104:    t11 = (t0 + 3336);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);
    t26 = (t0 + 3656);
    xsi_vlogvar_assign_value(t26, t12, 1, 0, 3);
    goto LAB39;

LAB29:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 2776U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t4 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t3) != 0)
        goto LAB107;

LAB108:    t6 = (t13 + 4);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t6);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB109;

LAB110:    t22 = *((unsigned int *)t13);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t6) > 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t13) > 0)
        goto LAB115;

LAB116:    memcpy(t12, t10, 8);

LAB117:    t11 = (t0 + 3336);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);
    t26 = (t0 + 3656);
    xsi_vlogvar_assign_value(t26, t12, 1, 0, 3);
    goto LAB39;

LAB31:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3336);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3656);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 3);
    goto LAB39;

LAB33:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3336);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3656);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 3);
    goto LAB39;

LAB35:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3336);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3656);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 3);
    goto LAB39;

LAB37:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3336);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3656);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 3);
    goto LAB39;

LAB40:    *((unsigned int *)t13) = 1;
    goto LAB43;

LAB42:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB43;

LAB44:    t7 = ((char*)((ng5)));
    goto LAB45;

LAB46:    t10 = ((char*)((ng4)));
    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t12, 4, t7, 4, t10, 4);
    goto LAB52;

LAB50:    memcpy(t12, t7, 8);
    goto LAB52;

LAB53:    *((unsigned int *)t13) = 1;
    goto LAB56;

LAB55:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB56;

LAB57:    t7 = ((char*)((ng6)));
    goto LAB58;

LAB59:    t10 = ((char*)((ng5)));
    goto LAB60;

LAB61:    xsi_vlog_unsigned_bit_combine(t12, 4, t7, 4, t10, 4);
    goto LAB65;

LAB63:    memcpy(t12, t7, 8);
    goto LAB65;

LAB66:    *((unsigned int *)t13) = 1;
    goto LAB69;

LAB68:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB69;

LAB70:    t7 = ((char*)((ng10)));
    goto LAB71;

LAB72:    t10 = ((char*)((ng6)));
    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t12, 4, t7, 4, t10, 4);
    goto LAB78;

LAB76:    memcpy(t12, t7, 8);
    goto LAB78;

LAB79:    *((unsigned int *)t13) = 1;
    goto LAB82;

LAB81:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB82;

LAB83:    t7 = ((char*)((ng14)));
    goto LAB84;

LAB85:    t10 = ((char*)((ng12)));
    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t12, 4, t7, 4, t10, 4);
    goto LAB91;

LAB89:    memcpy(t12, t7, 8);
    goto LAB91;

LAB92:    *((unsigned int *)t13) = 1;
    goto LAB95;

LAB94:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB95;

LAB96:    t7 = ((char*)((ng16)));
    goto LAB97;

LAB98:    t10 = ((char*)((ng14)));
    goto LAB99;

LAB100:    xsi_vlog_unsigned_bit_combine(t12, 4, t7, 4, t10, 4);
    goto LAB104;

LAB102:    memcpy(t12, t7, 8);
    goto LAB104;

LAB105:    *((unsigned int *)t13) = 1;
    goto LAB108;

LAB107:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB108;

LAB109:    t7 = ((char*)((ng2)));
    goto LAB110;

LAB111:    t10 = ((char*)((ng16)));
    goto LAB112;

LAB113:    xsi_vlog_unsigned_bit_combine(t12, 4, t7, 4, t10, 4);
    goto LAB117;

LAB115:    memcpy(t12, t7, 8);
    goto LAB117;

}

static void Cont_115_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 6112);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000906485890_2487410970_init()
{
	static char *pe[] = {(void *)Cont_60_0,(void *)Always_62_1,(void *)Always_72_2,(void *)Always_77_3,(void *)Cont_115_4};
	xsi_register_didat("work_m_00000000000906485890_2487410970", "isim/I2C_Top_Level_tb_isim_beh.exe.sim/work/m_00000000000906485890_2487410970.didat");
	xsi_register_executes(pe);
}
