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
static const char *ng0 = "C:/Users/Charles/OneDrive/2018Fall_CSULB/CECS490B/Current_Project/Files/I2C_Project_10_24/i2c_slave.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {0U, 1U};
static int ng6[] = {1, 0};
static int ng7[] = {8, 0};
static int ng8[] = {7, 0};
static unsigned int ng9[] = {114U, 0U};
static int ng10[] = {9, 0};
static int ng11[] = {17, 0};



static void Always_27_0(char *t0)
{
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 8024);
    *((int *)t2) = 1;
    t3 = (t0 + 5256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);
    t5 = (t0 + 1344U);
    t6 = *((char **)t5);
    t5 = (t0 + 2544);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t10 = (t7 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    xsi_vlogtype_concat(t4, 3, 3, 2U, t7, 2, t6, 1);
    t18 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 3, 0LL);
    goto LAB2;

}

static void NetDecl_30_1(char *t0)
{
    char t3[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 5472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t3 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    t31 = (t0 + 8264);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t15 + 4);
    t39 = *((unsigned int *)t15);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0U);
    t44 = (t0 + 8040);
    *((int *)t44) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

}

static void NetDecl_31_2(char *t0)
{
    char t3[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 5720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t3 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    t31 = (t0 + 8328);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t15 + 4);
    t39 = *((unsigned int *)t15);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0U);
    t44 = (t0 + 8056);
    *((int *)t44) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

}

static void Always_35_3(char *t0)
{
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 8072);
    *((int *)t2) = 1;
    t3 = (t0 + 6000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);
    t5 = (t0 + 1504U);
    t6 = *((char **)t5);
    t5 = (t0 + 2704);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t10 = (t7 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    xsi_vlogtype_concat(t4, 3, 3, 2U, t7, 2, t6, 1);
    t18 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 3, 0LL);
    goto LAB2;

}

static void NetDecl_38_4(char *t0)
{
    char t5[8];
    char t17[8];
    char t26[8];
    char t61[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;

LAB0:    t1 = (t0 + 6216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 2704);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 1);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 1);
    t25 = (t24 & 1);
    *((unsigned int *)t18) = t25;
    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t17);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4);
    t31 = (t17 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB4;

LAB5:
LAB6:    t58 = (t0 + 2704);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t61, 0, 8);
    t62 = (t61 + 4);
    t63 = (t60 + 4);
    t64 = *((unsigned int *)t60);
    t65 = (t64 >> 2);
    t66 = (t65 & 1);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 2);
    t69 = (t68 & 1);
    *((unsigned int *)t62) = t69;
    t71 = *((unsigned int *)t26);
    t72 = *((unsigned int *)t61);
    t73 = (t71 & t72);
    *((unsigned int *)t70) = t73;
    t74 = (t26 + 4);
    t75 = (t61 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB7;

LAB8:
LAB9:    t102 = (t0 + 8392);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    memset(t106, 0, 8);
    t107 = 1U;
    t108 = t107;
    t109 = (t70 + 4);
    t110 = *((unsigned int *)t70);
    t107 = (t107 & t110);
    t111 = *((unsigned int *)t109);
    t108 = (t108 & t111);
    t112 = (t106 + 4);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t113 | t107);
    t114 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t114 | t108);
    xsi_driver_vfirst_trans(t102, 0, 0U);
    t115 = (t0 + 8088);
    *((int *)t115) = 1;

LAB1:    return;
LAB4:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4);
    t41 = (t17 + 4);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t17);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB6;

LAB7:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    t84 = (t26 + 4);
    t85 = (t61 + 4);
    t86 = *((unsigned int *)t26);
    t87 = (~(t86));
    t88 = *((unsigned int *)t84);
    t89 = (~(t88));
    t90 = *((unsigned int *)t61);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (~(t92));
    t94 = (t87 & t89);
    t95 = (t91 & t93);
    t96 = (~(t94));
    t97 = (~(t95));
    t98 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t98 & t96);
    t99 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t99 & t97);
    t100 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t100 & t96);
    t101 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t101 & t97);
    goto LAB9;

}

static void Always_42_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 6464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 8104);
    *((int *)t2) = 1;
    t3 = (t0 + 6496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    goto LAB2;

}

static void Always_46_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 6712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 8120);
    *((int *)t2) = 1;
    t3 = (t0 + 6744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    goto LAB2;

}

static void Always_51_7(char *t0)
{
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
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
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 6960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 8136);
    *((int *)t2) = 1;
    t3 = (t0 + 6992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 2864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB16;

LAB17:
LAB18:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(53, ng0);

LAB8:    xsi_set_current_line(54, ng0);
    t13 = (t0 + 3184);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng3)));
    memset(t17, 0, 8);
    t18 = (t15 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB12;

LAB9:    if (t29 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t17) = 1;

LAB12:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB13;

LAB14:
LAB15:    goto LAB7;

LAB11:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(55, ng0);
    t39 = ((char*)((ng1)));
    t40 = (t0 + 3184);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 1);
    goto LAB15;

LAB16:    xsi_set_current_line(58, ng0);

LAB19:    xsi_set_current_line(59, ng0);
    t6 = (t0 + 3184);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t15 = (t13 + 4);
    t16 = (t14 + 4);
    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t15);
    t24 = *((unsigned int *)t16);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t16);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB23;

LAB20:    if (t29 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t17) = 1;

LAB23:    t19 = (t17 + 4);
    t34 = *((unsigned int *)t19);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB18;

LAB22:    t18 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(60, ng0);
    t32 = ((char*)((ng3)));
    t33 = (t0 + 3184);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    goto LAB26;

}

static void Always_69_8(char *t0)
{
    char t4[8];
    char t33[8];
    char t39[8];
    char t71[8];
    char t79[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
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
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    unsigned int t81;
    int t82;

LAB0:    t1 = (t0 + 7208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 8152);
    *((int *)t2) = 1;
    t3 = (t0 + 7240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);
    t5 = (t0 + 3184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t8) == 0)
        goto LAB5;

LAB7:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB8:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB10;

LAB9:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(77, ng0);

LAB15:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 8, t6, 32);
    t7 = (t0 + 3344);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 8);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB17;

LAB16:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB18;

LAB19:    t15 = (t4 + 4);
    t9 = *((unsigned int *)t15);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB29;

LAB26:    if (t21 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t4) = 1;

LAB29:    t15 = (t4 + 4);
    t24 = *((unsigned int *)t15);
    t26 = (~(t24));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB52;

LAB51:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB53;

LAB54:    t15 = (t0 + 3824);
    t16 = (t15 + 56U);
    t25 = *((char **)t16);
    memset(t33, 0, 8);
    t31 = (t25 + 4);
    t9 = *((unsigned int *)t31);
    t10 = (~(t9));
    t11 = *((unsigned int *)t25);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB59;

LAB57:    if (*((unsigned int *)t31) == 0)
        goto LAB56;

LAB58:    t32 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t32) = 1;

LAB59:    t34 = (t33 + 4);
    t35 = (t25 + 4);
    t17 = *((unsigned int *)t25);
    t18 = (~(t17));
    *((unsigned int *)t33) = t18;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB61;

LAB60:    t23 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t23 & 1U);
    t24 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t24 & 1U);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t33);
    t28 = (t26 & t27);
    *((unsigned int *)t39) = t28;
    t36 = (t4 + 4);
    t37 = (t33 + 4);
    t38 = (t39 + 4);
    t29 = *((unsigned int *)t36);
    t30 = *((unsigned int *)t37);
    t42 = (t29 | t30);
    *((unsigned int *)t38) = t42;
    t43 = *((unsigned int *)t38);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB62;

LAB63:
LAB64:    t63 = (t39 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t39);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB13:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB10:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB9;

LAB11:    xsi_set_current_line(71, ng0);

LAB14:    xsi_set_current_line(73, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 3344);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 8);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB13;

LAB17:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(82, ng0);
    t16 = (t0 + 1984U);
    t25 = *((char **)t16);
    t16 = (t0 + 3504);
    t31 = (t0 + 3504);
    t32 = (t31 + 72U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng8)));
    t36 = (t0 + 3344);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 32, t35, 32, t38, 8);
    xsi_vlog_generic_convert_bit_index(t33, t34, 2, t39, 32, 2);
    t40 = (t33 + 4);
    t17 = *((unsigned int *)t40);
    t41 = (!(t17));
    if (t41 == 1)
        goto LAB24;

LAB25:    goto LAB23;

LAB24:    xsi_vlogvar_assign_value(t16, t25, 0, *((unsigned int *)t33), 1);
    goto LAB25;

LAB28:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(85, ng0);

LAB33:    xsi_set_current_line(86, ng0);
    t16 = (t0 + 1984U);
    t25 = *((char **)t16);
    t16 = (t0 + 3824);
    xsi_vlogvar_assign_value(t16, t25, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3504);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t39, 0, 8);
    t7 = (t2 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB37;

LAB34:    if (t21 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t39) = 1;

LAB37:    memset(t33, 0, 8);
    t15 = (t39 + 4);
    t24 = *((unsigned int *)t15);
    t26 = (~(t24));
    t27 = *((unsigned int *)t39);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t15) != 0)
        goto LAB40;

LAB41:    t25 = (t33 + 4);
    t30 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t25);
    t43 = (t30 || t42);
    if (t43 > 0)
        goto LAB42;

LAB43:    t44 = *((unsigned int *)t33);
    t45 = (~(t44));
    t46 = *((unsigned int *)t25);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t25) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t33) > 0)
        goto LAB48;

LAB49:    memcpy(t4, t32, 8);

LAB50:    t34 = (t0 + 3984);
    xsi_vlogvar_assign_value(t34, t4, 0, 0, 1);
    goto LAB32;

LAB36:    t14 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t33) = 1;
    goto LAB41;

LAB40:    t16 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB41;

LAB42:    t31 = ((char*)((ng1)));
    goto LAB43;

LAB44:    t32 = ((char*)((ng3)));
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t4, 1, t31, 1, t32, 1);
    goto LAB50;

LAB48:    memcpy(t4, t31, 8);
    goto LAB50;

LAB52:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB54;

LAB53:    *((unsigned int *)t4) = 1;
    goto LAB54;

LAB56:    *((unsigned int *)t33) = 1;
    goto LAB59;

LAB61:    t19 = *((unsigned int *)t33);
    t20 = *((unsigned int *)t35);
    *((unsigned int *)t33) = (t19 | t20);
    t21 = *((unsigned int *)t34);
    t22 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t21 | t22);
    goto LAB60;

LAB62:    t45 = *((unsigned int *)t39);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t45 | t46);
    t40 = (t4 + 4);
    t48 = (t33 + 4);
    t47 = *((unsigned int *)t4);
    t49 = (~(t47));
    t50 = *((unsigned int *)t40);
    t51 = (~(t50));
    t52 = *((unsigned int *)t33);
    t53 = (~(t52));
    t54 = *((unsigned int *)t48);
    t55 = (~(t54));
    t41 = (t49 & t51);
    t56 = (t53 & t55);
    t57 = (~(t41));
    t58 = (~(t56));
    t59 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t59 & t57);
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t57);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t58);
    goto LAB64;

LAB65:    xsi_set_current_line(92, ng0);
    t69 = (t0 + 1984U);
    t70 = *((char **)t69);
    t69 = (t0 + 3664);
    t72 = (t0 + 3664);
    t73 = (t72 + 72U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng11)));
    t76 = (t0 + 3344);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    memset(t79, 0, 8);
    xsi_vlog_unsigned_minus(t79, 32, t75, 32, t78, 8);
    xsi_vlog_generic_convert_bit_index(t71, t74, 2, t79, 32, 2);
    t80 = (t71 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (!(t81));
    if (t82 == 1)
        goto LAB68;

LAB69:    goto LAB67;

LAB68:    xsi_vlogvar_assign_value(t69, t70, 0, *((unsigned int *)t71), 1);
    goto LAB69;

}

static void Always_98_9(char *t0)
{
    char t8[8];
    char t28[8];
    char t44[8];
    char t65[8];
    char t97[8];
    char t128[8];
    char t170[8];
    char t171[8];
    char t173[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    char *t169;
    char *t172;
    char *t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;

LAB0:    t1 = (t0 + 7456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 8168);
    *((int *)t2) = 1;
    t3 = (t0 + 7488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 3344);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
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
        goto LAB8;

LAB5:    if (t20 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;

LAB8:    t24 = (t0 + 3344);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng11)));
    memset(t28, 0, 8);
    t29 = (t26 + 4);
    t30 = (t27 + 4);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB12;

LAB9:    if (t40 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t28) = 1;

LAB12:    t45 = (t0 + 3824);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t44, 0, 8);
    t48 = (t47 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t48) == 0)
        goto LAB13;

LAB15:    t54 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t54) = 1;

LAB16:    t55 = (t44 + 4);
    t56 = (t47 + 4);
    t57 = *((unsigned int *)t47);
    t58 = (~(t57));
    *((unsigned int *)t44) = t58;
    *((unsigned int *)t55) = 0;
    if (*((unsigned int *)t56) != 0)
        goto LAB18;

LAB17:    t63 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t63 & 1U);
    t64 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t64 & 1U);
    t66 = *((unsigned int *)t28);
    t67 = *((unsigned int *)t44);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t28 + 4);
    t70 = (t44 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB19;

LAB20:
LAB21:    t98 = *((unsigned int *)t8);
    t99 = *((unsigned int *)t65);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = (t8 + 4);
    t102 = (t65 + 4);
    t103 = (t97 + 4);
    t104 = *((unsigned int *)t101);
    t105 = *((unsigned int *)t102);
    t106 = (t104 | t105);
    *((unsigned int *)t103) = t106;
    t107 = *((unsigned int *)t103);
    t108 = (t107 != 0);
    if (t108 == 1)
        goto LAB22;

LAB23:
LAB24:    t125 = (t0 + 3984);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t129 = *((unsigned int *)t97);
    t130 = *((unsigned int *)t127);
    t131 = (t129 & t130);
    *((unsigned int *)t128) = t131;
    t132 = (t97 + 4);
    t133 = (t127 + 4);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = *((unsigned int *)t134);
    t139 = (t138 != 0);
    if (t139 == 1)
        goto LAB25;

LAB26:
LAB27:    t160 = (t128 + 4);
    t161 = *((unsigned int *)t160);
    t162 = (~(t161));
    t163 = *((unsigned int *)t128);
    t164 = (t163 & t162);
    t165 = (t164 != 0);
    if (t165 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB33;

LAB32:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB35;

LAB34:    *((unsigned int *)t8) = 1;

LAB35:    t10 = (t0 + 3824);
    t23 = (t10 + 56U);
    t24 = *((char **)t23);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t24);
    t13 = (t11 & t12);
    *((unsigned int *)t28) = t13;
    t25 = (t8 + 4);
    t26 = (t24 + 4);
    t27 = (t28 + 4);
    t14 = *((unsigned int *)t25);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    *((unsigned int *)t27) = t16;
    t17 = *((unsigned int *)t27);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB37;

LAB38:
LAB39:    t43 = (t0 + 3984);
    t45 = (t43 + 56U);
    t46 = *((char **)t45);
    t49 = *((unsigned int *)t28);
    t50 = *((unsigned int *)t46);
    t51 = (t49 & t50);
    *((unsigned int *)t44) = t51;
    t47 = (t28 + 4);
    t48 = (t46 + 4);
    t54 = (t44 + 4);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t48);
    t57 = (t52 | t53);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB40;

LAB41:
LAB42:    t69 = (t0 + 4304);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t79 = (t0 + 2384);
    t80 = (t79 + 56U);
    t101 = *((char **)t80);
    memset(t65, 0, 8);
    t102 = (t71 + 4);
    if (*((unsigned int *)t102) != 0)
        goto LAB44;

LAB43:    t103 = (t101 + 4);
    if (*((unsigned int *)t103) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t71) < *((unsigned int *)t101))
        goto LAB45;

LAB46:    t82 = *((unsigned int *)t44);
    t83 = *((unsigned int *)t65);
    t84 = (t82 & t83);
    *((unsigned int *)t97) = t84;
    t112 = (t44 + 4);
    t125 = (t65 + 4);
    t126 = (t97 + 4);
    t85 = *((unsigned int *)t112);
    t86 = *((unsigned int *)t125);
    t87 = (t85 | t86);
    *((unsigned int *)t126) = t87;
    t88 = *((unsigned int *)t126);
    t91 = (t88 != 0);
    if (t91 == 1)
        goto LAB48;

LAB49:
LAB50:    t133 = (t97 + 4);
    t114 = *((unsigned int *)t133);
    t115 = (~(t114));
    t117 = *((unsigned int *)t97);
    t118 = (t117 & t115);
    t119 = (t118 != 0);
    if (t119 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB53:
LAB30:    goto LAB2;

LAB7:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB8;

LAB11:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t44) = 1;
    goto LAB16;

LAB18:    t59 = *((unsigned int *)t44);
    t60 = *((unsigned int *)t56);
    *((unsigned int *)t44) = (t59 | t60);
    t61 = *((unsigned int *)t55);
    t62 = *((unsigned int *)t56);
    *((unsigned int *)t55) = (t61 | t62);
    goto LAB17;

LAB19:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t28 + 4);
    t80 = (t44 + 4);
    t81 = *((unsigned int *)t28);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t44);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB21;

LAB22:    t109 = *((unsigned int *)t97);
    t110 = *((unsigned int *)t103);
    *((unsigned int *)t97) = (t109 | t110);
    t111 = (t8 + 4);
    t112 = (t65 + 4);
    t113 = *((unsigned int *)t111);
    t114 = (~(t113));
    t115 = *((unsigned int *)t8);
    t116 = (t115 & t114);
    t117 = *((unsigned int *)t112);
    t118 = (~(t117));
    t119 = *((unsigned int *)t65);
    t120 = (t119 & t118);
    t121 = (~(t116));
    t122 = (~(t120));
    t123 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t123 & t121);
    t124 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t124 & t122);
    goto LAB24;

LAB25:    t140 = *((unsigned int *)t128);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t128) = (t140 | t141);
    t142 = (t97 + 4);
    t143 = (t127 + 4);
    t144 = *((unsigned int *)t97);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (~(t146));
    t148 = *((unsigned int *)t127);
    t149 = (~(t148));
    t150 = *((unsigned int *)t143);
    t151 = (~(t150));
    t152 = (t145 & t147);
    t153 = (t149 & t151);
    t154 = (~(t152));
    t155 = (~(t153));
    t156 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t156 & t154);
    t157 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t157 & t155);
    t158 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t158 & t154);
    t159 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t159 & t155);
    goto LAB27;

LAB28:    xsi_set_current_line(101, ng0);

LAB31:    xsi_set_current_line(102, ng0);
    t166 = ((char*)((ng3)));
    t167 = (t0 + 4144);
    xsi_vlogvar_assign_value(t167, t166, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB30;

LAB33:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB35;

LAB37:    t19 = *((unsigned int *)t28);
    t20 = *((unsigned int *)t27);
    *((unsigned int *)t28) = (t19 | t20);
    t29 = (t8 + 4);
    t30 = (t24 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (~(t21));
    t31 = *((unsigned int *)t29);
    t32 = (~(t31));
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (~(t35));
    t89 = (t22 & t32);
    t90 = (t34 & t36);
    t37 = (~(t89));
    t38 = (~(t90));
    t39 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t39 & t37);
    t40 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t40 & t38);
    t41 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t41 & t37);
    t42 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t42 & t38);
    goto LAB39;

LAB40:    t60 = *((unsigned int *)t44);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t44) = (t60 | t61);
    t55 = (t28 + 4);
    t56 = (t46 + 4);
    t62 = *((unsigned int *)t28);
    t63 = (~(t62));
    t64 = *((unsigned int *)t55);
    t66 = (~(t64));
    t67 = *((unsigned int *)t46);
    t68 = (~(t67));
    t72 = *((unsigned int *)t56);
    t73 = (~(t72));
    t116 = (t63 & t66);
    t120 = (t68 & t73);
    t74 = (~(t116));
    t75 = (~(t120));
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t75);
    t78 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t78 & t74);
    t81 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t81 & t75);
    goto LAB42;

LAB44:    t111 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t65) = 1;
    goto LAB46;

LAB48:    t92 = *((unsigned int *)t97);
    t93 = *((unsigned int *)t126);
    *((unsigned int *)t97) = (t92 | t93);
    t127 = (t44 + 4);
    t132 = (t65 + 4);
    t94 = *((unsigned int *)t44);
    t95 = (~(t94));
    t96 = *((unsigned int *)t127);
    t98 = (~(t96));
    t99 = *((unsigned int *)t65);
    t100 = (~(t99));
    t104 = *((unsigned int *)t132);
    t105 = (~(t104));
    t152 = (t95 & t98);
    t153 = (t100 & t105);
    t106 = (~(t152));
    t107 = (~(t153));
    t108 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t108 & t106);
    t109 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t109 & t107);
    t110 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t110 & t106);
    t113 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t113 & t107);
    goto LAB50;

LAB51:    xsi_set_current_line(107, ng0);

LAB54:    xsi_set_current_line(109, ng0);
    t134 = (t0 + 3344);
    t142 = (t134 + 56U);
    t143 = *((char **)t142);
    t160 = ((char*)((ng10)));
    memset(t128, 0, 8);
    xsi_vlog_unsigned_minus(t128, 32, t143, 8, t160, 32);
    t166 = (t0 + 4304);
    t167 = (t166 + 56U);
    t168 = *((char **)t167);
    t169 = ((char*)((ng10)));
    memset(t170, 0, 8);
    xsi_vlog_unsigned_multiply(t170, 32, t168, 3, t169, 32);
    memset(t171, 0, 8);
    xsi_vlog_unsigned_minus(t171, 32, t128, 32, t170, 32);
    t172 = ((char*)((ng7)));
    memset(t173, 0, 8);
    t174 = (t171 + 4);
    t175 = (t172 + 4);
    t121 = *((unsigned int *)t171);
    t122 = *((unsigned int *)t172);
    t123 = (t121 ^ t122);
    t124 = *((unsigned int *)t174);
    t129 = *((unsigned int *)t175);
    t130 = (t124 ^ t129);
    t131 = (t123 | t130);
    t135 = *((unsigned int *)t174);
    t136 = *((unsigned int *)t175);
    t137 = (t135 | t136);
    t138 = (~(t137));
    t139 = (t131 & t138);
    if (t139 != 0)
        goto LAB58;

LAB55:    if (t137 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t173) = 1;

LAB58:    t177 = (t173 + 4);
    t140 = *((unsigned int *)t177);
    t141 = (~(t140));
    t144 = *((unsigned int *)t173);
    t145 = (t144 & t141);
    t146 = (t145 != 0);
    if (t146 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3664);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng8)));
    t10 = (t0 + 3344);
    t23 = (t10 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng10)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_minus(t28, 32, t24, 8, t25, 32);
    t26 = (t0 + 4304);
    t27 = (t26 + 56U);
    t29 = *((char **)t27);
    t30 = ((char*)((ng10)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_multiply(t44, 32, t29, 3, t30, 32);
    memset(t65, 0, 8);
    xsi_vlog_unsigned_minus(t65, 32, t28, 32, t44, 32);
    memset(t97, 0, 8);
    xsi_vlog_unsigned_minus(t97, 32, t9, 32, t65, 32);
    xsi_vlog_generic_get_index_select_value(t8, 1, t4, t7, 2, t97, 32, 2);
    t43 = (t0 + 4144);
    xsi_vlogvar_assign_value(t43, t8, 0, 0, 1);

LAB61:    goto LAB53;

LAB57:    t176 = (t173 + 4);
    *((unsigned int *)t173) = 1;
    *((unsigned int *)t176) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(110, ng0);

LAB62:    xsi_set_current_line(112, ng0);
    t178 = ((char*)((ng5)));
    t179 = (t0 + 4144);
    xsi_vlogvar_assign_value(t179, t178, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 4304);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 3);
    goto LAB61;

}

static void Cont_120_10(char *t0)
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

LAB0:    t1 = (t0 + 7704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8456);
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
    t18 = (t0 + 8184);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002743469420_0467436597_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)NetDecl_30_1,(void *)NetDecl_31_2,(void *)Always_35_3,(void *)NetDecl_38_4,(void *)Always_42_5,(void *)Always_46_6,(void *)Always_51_7,(void *)Always_69_8,(void *)Always_98_9,(void *)Cont_120_10};
	xsi_register_didat("work_m_00000000002743469420_0467436597", "isim/I2C_Top_Level_tb_isim_beh.exe.sim/work/m_00000000002743469420_0467436597.didat");
	xsi_register_executes(pe);
}
