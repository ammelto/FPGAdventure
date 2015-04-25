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
static const char *ng0 = "C:/Users/Dilancuan/Documents/FPGAdventure/FPGAdventure/Adventure/main.v";
static unsigned int ng1[] = {65535U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static int ng4[] = {624, 0};
static int ng5[] = {7, 0};
static int ng6[] = {470, 0};
static int ng7[] = {10, 0};
static int ng8[] = {16, 0};
static int ng9[] = {320, 0};
static int ng10[] = {240, 0};
static int ng11[] = {17, 0};
static int ng12[] = {11, 0};
static int ng13[] = {469, 0};
static int ng14[] = {623, 0};
static int ng15[] = {9, 0};
static unsigned int ng16[] = {224U, 0U};



static void Always_70_0(char *t0)
{
    char t8[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6224);
    *((int *)t2) = 1;
    t3 = (t0 + 5440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 4488);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB8;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(73, ng0);

LAB14:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t5) == 0)
        goto LAB15;

LAB17:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB18:    t7 = (t8 + 4);
    t9 = (t4 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    *((unsigned int *)t8) = t25;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB20;

LAB19:    t30 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t30 & 1U);
    t31 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t31 & 1U);
    t10 = (t0 + 3688);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB21;

LAB22:
LAB23:
LAB13:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(72, ng0);
    t18 = (t0 + 4488);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 16, t21, 32);
    t23 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 16, 0LL);
    goto LAB13;

LAB15:    *((unsigned int *)t8) = 1;
    goto LAB18;

LAB20:    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t26 | t27);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t28 | t29);
    goto LAB19;

LAB21:    xsi_set_current_line(77, ng0);
    t6 = (t0 + 4328);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t10 = (t8 + 4);
    t11 = (t9 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    *((unsigned int *)t8) = t25;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB25;

LAB24:    t30 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t30 & 255U);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & 255U);
    t12 = (t0 + 4328);
    xsi_vlogvar_assign_value(t12, t8, 0, 0, 8);
    goto LAB23;

LAB25:    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t11);
    *((unsigned int *)t8) = (t26 | t27);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t28 | t29);
    goto LAB24;

}

static void Always_81_1(char *t0)
{
    char t6[8];
    char t14[8];
    char t30[8];
    char t34[8];
    char t42[8];
    char t93[8];
    char t109[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t110;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6240);
    *((int *)t2) = 1;
    t3 = (t0 + 5688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    memset(t14, 0, 8);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t15) != 0)
        goto LAB8;

LAB9:    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB10;

LAB11:    memcpy(t42, t14, 8);

LAB12:    t74 = (t42 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t14, 0, 8);
    t5 = (t6 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t5) != 0)
        goto LAB36;

LAB37:    t15 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB38;

LAB39:    memcpy(t42, t14, 8);

LAB40:    t56 = (t42 + 4);
    t75 = *((unsigned int *)t56);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t14, 0, 8);
    t5 = (t6 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t5) != 0)
        goto LAB64;

LAB65:    t15 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB66;

LAB67:    memcpy(t93, t14, 8);

LAB68:    t81 = (t93 + 4);
    t98 = *((unsigned int *)t81);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t14, 0, 8);
    t5 = (t6 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t5) != 0)
        goto LAB98;

LAB99:    t15 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB100;

LAB101:    memcpy(t93, t14, 8);

LAB102:    t81 = (t93 + 4);
    t98 = *((unsigned int *)t81);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB121;

LAB122:
LAB123:
LAB89:
LAB55:
LAB27:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB130;

LAB131:
LAB132:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB135;

LAB134:    t15 = (t5 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB135;

LAB138:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB136;

LAB137:    memset(t6, 0, 8);
    t22 = (t14 + 4);
    t8 = *((unsigned int *)t22);
    t9 = (~(t8));
    t10 = *((unsigned int *)t14);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB142;

LAB140:    if (*((unsigned int *)t22) == 0)
        goto LAB139;

LAB141:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;

LAB142:    t27 = (t6 + 4);
    t28 = (t14 + 4);
    t13 = *((unsigned int *)t14);
    t16 = (~(t13));
    *((unsigned int *)t6) = t16;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB144;

LAB143:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t24 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t24 & 1U);
    t29 = (t6 + 4);
    t25 = *((unsigned int *)t29);
    t36 = (~(t25));
    t37 = *((unsigned int *)t6);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB150;

LAB149:    t15 = (t5 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB150;

LAB153:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB151;

LAB152:    memset(t6, 0, 8);
    t22 = (t14 + 4);
    t8 = *((unsigned int *)t22);
    t9 = (~(t8));
    t10 = *((unsigned int *)t14);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB157;

LAB155:    if (*((unsigned int *)t22) == 0)
        goto LAB154;

LAB156:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;

LAB157:    t27 = (t6 + 4);
    t28 = (t14 + 4);
    t13 = *((unsigned int *)t14);
    t16 = (~(t13));
    *((unsigned int *)t6) = t16;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB159;

LAB158:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t24 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t24 & 1U);
    t29 = (t6 + 4);
    t25 = *((unsigned int *)t29);
    t36 = (~(t25));
    t37 = *((unsigned int *)t6);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB160;

LAB161:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB165;

LAB164:    t15 = (t5 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB165;

LAB168:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB167;

LAB166:    *((unsigned int *)t6) = 1;

LAB167:    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB169;

LAB170:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB174;

LAB173:    t15 = (t5 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB174;

LAB177:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB176;

LAB175:    *((unsigned int *)t6) = 1;

LAB176:    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB178;

LAB179:
LAB180:
LAB171:
LAB162:
LAB147:    goto LAB2;

LAB6:    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB8:    t21 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    t26 = (t0 + 4008);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB14;

LAB13:    t32 = (t29 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t28) < *((unsigned int *)t29))
        goto LAB15;

LAB16:    memset(t34, 0, 8);
    t35 = (t30 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t30);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t35) != 0)
        goto LAB20;

LAB21:    t43 = *((unsigned int *)t14);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t14 + 4);
    t47 = (t34 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB12;

LAB14:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB16;

LAB15:    *((unsigned int *)t30) = 1;
    goto LAB16;

LAB18:    *((unsigned int *)t34) = 1;
    goto LAB21;

LAB20:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB21;

LAB22:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t14 + 4);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t14);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB24;

LAB25:    xsi_set_current_line(83, ng0);

LAB28:    xsi_set_current_line(84, ng0);
    t80 = (t0 + 3528);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t82 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(87, ng0);

LAB33:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 10, t5, 32);
    t7 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 10, 0LL);

LAB31:    goto LAB27;

LAB29:    xsi_set_current_line(84, ng0);

LAB32:    xsi_set_current_line(85, ng0);
    t89 = (t0 + 4008);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = ((char*)((ng5)));
    memset(t93, 0, 8);
    xsi_vlog_unsigned_minus(t93, 32, t91, 10, t92, 32);
    t94 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 10, 0LL);
    goto LAB31;

LAB34:    *((unsigned int *)t14) = 1;
    goto LAB37;

LAB36:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB37;

LAB38:    t21 = (t0 + 4168);
    t22 = (t21 + 56U);
    t26 = *((char **)t22);
    t27 = ((char*)((ng6)));
    memset(t30, 0, 8);
    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB42;

LAB41:    t29 = (t27 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t26) < *((unsigned int *)t27))
        goto LAB43;

LAB44:    memset(t34, 0, 8);
    t32 = (t30 + 4);
    t36 = *((unsigned int *)t32);
    t37 = (~(t36));
    t38 = *((unsigned int *)t30);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t32) != 0)
        goto LAB48;

LAB49:    t43 = *((unsigned int *)t14);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t35 = (t14 + 4);
    t41 = (t34 + 4);
    t46 = (t42 + 4);
    t49 = *((unsigned int *)t35);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t46);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB40;

LAB42:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB44;

LAB43:    *((unsigned int *)t30) = 1;
    goto LAB44;

LAB46:    *((unsigned int *)t34) = 1;
    goto LAB49;

LAB48:    t33 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB49;

LAB50:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t42) = (t54 | t55);
    t47 = (t14 + 4);
    t48 = (t34 + 4);
    t58 = *((unsigned int *)t14);
    t59 = (~(t58));
    t60 = *((unsigned int *)t47);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t48);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t70 & t68);
    t71 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB52;

LAB53:    xsi_set_current_line(91, ng0);

LAB56:    xsi_set_current_line(92, ng0);
    t57 = (t0 + 3528);
    t74 = (t57 + 56U);
    t80 = *((char **)t74);
    t81 = (t80 + 4);
    t84 = *((unsigned int *)t81);
    t85 = (~(t84));
    t86 = *((unsigned int *)t80);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(95, ng0);

LAB61:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 9, t5, 32);
    t7 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 9, 0LL);

LAB59:    goto LAB55;

LAB57:    xsi_set_current_line(92, ng0);

LAB60:    xsi_set_current_line(93, ng0);
    t82 = (t0 + 4168);
    t83 = (t82 + 56U);
    t89 = *((char **)t83);
    t90 = ((char*)((ng5)));
    memset(t93, 0, 8);
    xsi_vlog_unsigned_minus(t93, 32, t89, 9, t90, 32);
    t91 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t91, t93, 0, 0, 9, 0LL);
    goto LAB59;

LAB62:    *((unsigned int *)t14) = 1;
    goto LAB65;

LAB64:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB65;

LAB66:    t21 = (t0 + 4168);
    t22 = (t21 + 56U);
    t26 = *((char **)t22);
    t27 = ((char*)((ng7)));
    memset(t34, 0, 8);
    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB70;

LAB69:    t29 = (t27 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB70;

LAB73:    if (*((unsigned int *)t26) > *((unsigned int *)t27))
        goto LAB72;

LAB71:    *((unsigned int *)t34) = 1;

LAB72:    memset(t30, 0, 8);
    t32 = (t34 + 4);
    t36 = *((unsigned int *)t32);
    t37 = (~(t36));
    t38 = *((unsigned int *)t34);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB77;

LAB75:    if (*((unsigned int *)t32) == 0)
        goto LAB74;

LAB76:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;

LAB77:    t35 = (t30 + 4);
    t41 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = (~(t43));
    *((unsigned int *)t30) = t44;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB79;

LAB78:    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & 1U);
    t53 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t53 & 1U);
    memset(t42, 0, 8);
    t46 = (t30 + 4);
    t54 = *((unsigned int *)t46);
    t55 = (~(t54));
    t58 = *((unsigned int *)t30);
    t59 = (t58 & t55);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t46) != 0)
        goto LAB82;

LAB83:    t61 = *((unsigned int *)t14);
    t62 = *((unsigned int *)t42);
    t63 = (t61 & t62);
    *((unsigned int *)t93) = t63;
    t48 = (t14 + 4);
    t56 = (t42 + 4);
    t57 = (t93 + 4);
    t64 = *((unsigned int *)t48);
    t65 = *((unsigned int *)t56);
    t68 = (t64 | t65);
    *((unsigned int *)t57) = t68;
    t69 = *((unsigned int *)t57);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB84;

LAB85:
LAB86:    goto LAB68;

LAB70:    t31 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB72;

LAB74:    *((unsigned int *)t30) = 1;
    goto LAB77;

LAB79:    t45 = *((unsigned int *)t30);
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t30) = (t45 | t49);
    t50 = *((unsigned int *)t35);
    t51 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t50 | t51);
    goto LAB78;

LAB80:    *((unsigned int *)t42) = 1;
    goto LAB83;

LAB82:    t47 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB83;

LAB84:    t71 = *((unsigned int *)t93);
    t72 = *((unsigned int *)t57);
    *((unsigned int *)t93) = (t71 | t72);
    t74 = (t14 + 4);
    t80 = (t42 + 4);
    t73 = *((unsigned int *)t14);
    t75 = (~(t73));
    t76 = *((unsigned int *)t74);
    t77 = (~(t76));
    t78 = *((unsigned int *)t42);
    t79 = (~(t78));
    t84 = *((unsigned int *)t80);
    t85 = (~(t84));
    t66 = (t75 & t77);
    t67 = (t79 & t85);
    t86 = (~(t66));
    t87 = (~(t67));
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t88 & t86);
    t95 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t95 & t87);
    t96 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t96 & t86);
    t97 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t97 & t87);
    goto LAB86;

LAB87:    xsi_set_current_line(99, ng0);

LAB90:    xsi_set_current_line(100, ng0);
    t82 = (t0 + 3528);
    t83 = (t82 + 56U);
    t89 = *((char **)t83);
    t90 = (t89 + 4);
    t103 = *((unsigned int *)t90);
    t104 = (~(t103));
    t105 = *((unsigned int *)t89);
    t106 = (t105 & t104);
    t107 = (t106 != 0);
    if (t107 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(103, ng0);

LAB95:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 9, t5, 32);
    t7 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 9, 0LL);

LAB93:    goto LAB89;

LAB91:    xsi_set_current_line(100, ng0);

LAB94:    xsi_set_current_line(101, ng0);
    t91 = (t0 + 4168);
    t92 = (t91 + 56U);
    t94 = *((char **)t92);
    t108 = ((char*)((ng5)));
    memset(t109, 0, 8);
    xsi_vlog_unsigned_add(t109, 32, t94, 9, t108, 32);
    t110 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t110, t109, 0, 0, 9, 0LL);
    goto LAB93;

LAB96:    *((unsigned int *)t14) = 1;
    goto LAB99;

LAB98:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB99;

LAB100:    t21 = (t0 + 4008);
    t22 = (t21 + 56U);
    t26 = *((char **)t22);
    t27 = ((char*)((ng8)));
    memset(t34, 0, 8);
    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB104;

LAB103:    t29 = (t27 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB104;

LAB107:    if (*((unsigned int *)t26) > *((unsigned int *)t27))
        goto LAB106;

LAB105:    *((unsigned int *)t34) = 1;

LAB106:    memset(t30, 0, 8);
    t32 = (t34 + 4);
    t36 = *((unsigned int *)t32);
    t37 = (~(t36));
    t38 = *((unsigned int *)t34);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB111;

LAB109:    if (*((unsigned int *)t32) == 0)
        goto LAB108;

LAB110:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;

LAB111:    t35 = (t30 + 4);
    t41 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = (~(t43));
    *((unsigned int *)t30) = t44;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB113;

LAB112:    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & 1U);
    t53 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t53 & 1U);
    memset(t42, 0, 8);
    t46 = (t30 + 4);
    t54 = *((unsigned int *)t46);
    t55 = (~(t54));
    t58 = *((unsigned int *)t30);
    t59 = (t58 & t55);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t46) != 0)
        goto LAB116;

LAB117:    t61 = *((unsigned int *)t14);
    t62 = *((unsigned int *)t42);
    t63 = (t61 & t62);
    *((unsigned int *)t93) = t63;
    t48 = (t14 + 4);
    t56 = (t42 + 4);
    t57 = (t93 + 4);
    t64 = *((unsigned int *)t48);
    t65 = *((unsigned int *)t56);
    t68 = (t64 | t65);
    *((unsigned int *)t57) = t68;
    t69 = *((unsigned int *)t57);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB118;

LAB119:
LAB120:    goto LAB102;

LAB104:    t31 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB106;

LAB108:    *((unsigned int *)t30) = 1;
    goto LAB111;

LAB113:    t45 = *((unsigned int *)t30);
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t30) = (t45 | t49);
    t50 = *((unsigned int *)t35);
    t51 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t50 | t51);
    goto LAB112;

LAB114:    *((unsigned int *)t42) = 1;
    goto LAB117;

LAB116:    t47 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB117;

LAB118:    t71 = *((unsigned int *)t93);
    t72 = *((unsigned int *)t57);
    *((unsigned int *)t93) = (t71 | t72);
    t74 = (t14 + 4);
    t80 = (t42 + 4);
    t73 = *((unsigned int *)t14);
    t75 = (~(t73));
    t76 = *((unsigned int *)t74);
    t77 = (~(t76));
    t78 = *((unsigned int *)t42);
    t79 = (~(t78));
    t84 = *((unsigned int *)t80);
    t85 = (~(t84));
    t66 = (t75 & t77);
    t67 = (t79 & t85);
    t86 = (~(t66));
    t87 = (~(t67));
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t88 & t86);
    t95 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t95 & t87);
    t96 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t96 & t86);
    t97 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t97 & t87);
    goto LAB120;

LAB121:    xsi_set_current_line(107, ng0);

LAB124:    xsi_set_current_line(108, ng0);
    t82 = (t0 + 3528);
    t83 = (t82 + 56U);
    t89 = *((char **)t83);
    t90 = (t89 + 4);
    t103 = *((unsigned int *)t90);
    t104 = (~(t103));
    t105 = *((unsigned int *)t89);
    t106 = (t105 & t104);
    t107 = (t106 != 0);
    if (t107 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(111, ng0);

LAB129:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 10, t5, 32);
    t7 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 10, 0LL);

LAB127:    goto LAB123;

LAB125:    xsi_set_current_line(108, ng0);

LAB128:    xsi_set_current_line(109, ng0);
    t91 = (t0 + 4008);
    t92 = (t91 + 56U);
    t94 = *((char **)t92);
    t108 = ((char*)((ng5)));
    memset(t109, 0, 8);
    xsi_vlog_unsigned_add(t109, 32, t94, 10, t108, 32);
    t110 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t110, t109, 0, 0, 10, 0LL);
    goto LAB127;

LAB130:    xsi_set_current_line(117, ng0);

LAB133:    xsi_set_current_line(118, ng0);
    t7 = ((char*)((ng9)));
    t15 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 10, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    goto LAB132;

LAB135:    t21 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB137;

LAB136:    *((unsigned int *)t14) = 1;
    goto LAB137;

LAB139:    *((unsigned int *)t6) = 1;
    goto LAB142;

LAB144:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t28);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = *((unsigned int *)t27);
    t20 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t19 | t20);
    goto LAB143;

LAB145:    xsi_set_current_line(123, ng0);

LAB148:    xsi_set_current_line(124, ng0);
    t31 = ((char*)((ng11)));
    t32 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 10, 0LL);
    goto LAB147;

LAB150:    t21 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB152;

LAB151:    *((unsigned int *)t14) = 1;
    goto LAB152;

LAB154:    *((unsigned int *)t6) = 1;
    goto LAB157;

LAB159:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t28);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = *((unsigned int *)t27);
    t20 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t19 | t20);
    goto LAB158;

LAB160:    xsi_set_current_line(126, ng0);

LAB163:    xsi_set_current_line(127, ng0);
    t31 = ((char*)((ng12)));
    t32 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 9, 0LL);
    goto LAB162;

LAB165:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB167;

LAB169:    xsi_set_current_line(129, ng0);

LAB172:    xsi_set_current_line(130, ng0);
    t26 = ((char*)((ng13)));
    t27 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 9, 0LL);
    goto LAB171;

LAB174:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB176;

LAB178:    xsi_set_current_line(132, ng0);

LAB181:    xsi_set_current_line(133, ng0);
    t26 = ((char*)((ng14)));
    t27 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 10, 0LL);
    goto LAB180;

}

static void Always_137_2(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t63[8];
    char t64[8];
    char t67[8];
    char t70[8];
    char t76[8];
    char t86[8];
    char t92[8];
    char t93[8];
    char t114[8];
    char t122[8];
    char t154[8];
    char t166[8];
    char t172[8];
    char t173[8];
    char t194[8];
    char t202[8];
    char t240[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    int t146;
    int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    char *t174;
    char *t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    int t226;
    int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    char *t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t241;
    char *t242;
    char *t243;
    char *t244;
    char *t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    char *t252;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 6256);
    *((int *)t2) = 1;
    t3 = (t0 + 5936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);

LAB5:    xsi_set_current_line(138, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t6, 8);

LAB12:    t55 = (t27 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t27);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(140, ng0);

LAB24:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t12 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 9, t12, 32);
    memset(t20, 0, 8);
    t13 = (t3 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB26;

LAB25:    t18 = (t6 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t3) < *((unsigned int *)t6))
        goto LAB27;

LAB28:    memset(t27, 0, 8);
    t26 = (t20 + 4);
    t7 = *((unsigned int *)t26);
    t8 = (~(t7));
    t9 = *((unsigned int *)t20);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t26) != 0)
        goto LAB32;

LAB33:    t32 = (t27 + 4);
    t14 = *((unsigned int *)t27);
    t15 = *((unsigned int *)t32);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB34;

LAB35:    memcpy(t70, t27, 8);

LAB36:    memset(t76, 0, 8);
    t77 = (t70 + 4);
    t59 = *((unsigned int *)t77);
    t60 = (~(t59));
    t78 = *((unsigned int *)t70);
    t79 = (t78 & t60);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t77) != 0)
        goto LAB51;

LAB52:    t82 = (t76 + 4);
    t83 = *((unsigned int *)t76);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB53;

LAB54:    memcpy(t122, t76, 8);

LAB55:    memset(t154, 0, 8);
    t155 = (t122 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t122);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t155) != 0)
        goto LAB76;

LAB77:    t162 = (t154 + 4);
    t163 = *((unsigned int *)t154);
    t164 = *((unsigned int *)t162);
    t165 = (t163 || t164);
    if (t165 > 0)
        goto LAB78;

LAB79:    memcpy(t202, t154, 8);

LAB80:    t234 = (t202 + 4);
    t235 = *((unsigned int *)t234);
    t236 = (~(t235));
    t237 = *((unsigned int *)t202);
    t238 = (t237 & t236);
    t239 = (t238 != 0);
    if (t239 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB101:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 2488U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t18) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB19;

LAB20:    xsi_set_current_line(138, ng0);

LAB23:    xsi_set_current_line(139, ng0);
    t61 = ((char*)((ng3)));
    t62 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t62, t61, 0, 0, 8, 0LL);
    goto LAB22;

LAB26:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t20) = 1;
    goto LAB28;

LAB30:    *((unsigned int *)t27) = 1;
    goto LAB33;

LAB32:    t31 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB33;

LAB34:    t33 = (t0 + 2648U);
    t41 = *((char **)t33);
    t33 = (t0 + 4008);
    t42 = (t33 + 56U);
    t55 = *((char **)t42);
    t61 = ((char*)((ng15)));
    memset(t63, 0, 8);
    xsi_vlog_unsigned_add(t63, 32, t55, 10, t61, 32);
    memset(t64, 0, 8);
    t62 = (t41 + 4);
    if (*((unsigned int *)t62) != 0)
        goto LAB38;

LAB37:    t65 = (t63 + 4);
    if (*((unsigned int *)t65) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t41) < *((unsigned int *)t63))
        goto LAB39;

LAB40:    memset(t67, 0, 8);
    t68 = (t64 + 4);
    t17 = *((unsigned int *)t68);
    t21 = (~(t17));
    t22 = *((unsigned int *)t64);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t68) != 0)
        goto LAB44;

LAB45:    t25 = *((unsigned int *)t27);
    t28 = *((unsigned int *)t67);
    t29 = (t25 & t28);
    *((unsigned int *)t70) = t29;
    t71 = (t27 + 4);
    t72 = (t67 + 4);
    t73 = (t70 + 4);
    t30 = *((unsigned int *)t71);
    t34 = *((unsigned int *)t72);
    t35 = (t30 | t34);
    *((unsigned int *)t73) = t35;
    t36 = *((unsigned int *)t73);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB36;

LAB38:    t66 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB40;

LAB39:    *((unsigned int *)t64) = 1;
    goto LAB40;

LAB42:    *((unsigned int *)t67) = 1;
    goto LAB45;

LAB44:    t69 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB45;

LAB46:    t38 = *((unsigned int *)t70);
    t39 = *((unsigned int *)t73);
    *((unsigned int *)t70) = (t38 | t39);
    t74 = (t27 + 4);
    t75 = (t67 + 4);
    t40 = *((unsigned int *)t27);
    t43 = (~(t40));
    t44 = *((unsigned int *)t74);
    t45 = (~(t44));
    t47 = *((unsigned int *)t67);
    t48 = (~(t47));
    t49 = *((unsigned int *)t75);
    t51 = (~(t49));
    t46 = (t43 & t45);
    t50 = (t48 & t51);
    t52 = (~(t46));
    t53 = (~(t50));
    t54 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t54 & t52);
    t56 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t56 & t53);
    t57 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t57 & t52);
    t58 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t58 & t53);
    goto LAB48;

LAB49:    *((unsigned int *)t76) = 1;
    goto LAB52;

LAB51:    t81 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB52;

LAB53:    t87 = (t0 + 2808U);
    t88 = *((char **)t87);
    t87 = (t0 + 4168);
    t89 = (t87 + 56U);
    t90 = *((char **)t89);
    t91 = ((char*)((ng15)));
    memset(t92, 0, 8);
    xsi_vlog_unsigned_minus(t92, 32, t90, 9, t91, 32);
    memset(t93, 0, 8);
    t94 = (t88 + 4);
    if (*((unsigned int *)t94) != 0)
        goto LAB57;

LAB56:    t95 = (t92 + 4);
    if (*((unsigned int *)t95) != 0)
        goto LAB57;

LAB60:    if (*((unsigned int *)t88) < *((unsigned int *)t92))
        goto LAB58;

LAB59:    memset(t86, 0, 8);
    t97 = (t93 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB64;

LAB62:    if (*((unsigned int *)t97) == 0)
        goto LAB61;

LAB63:    t103 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t103) = 1;

LAB64:    t104 = (t86 + 4);
    t105 = (t93 + 4);
    t106 = *((unsigned int *)t93);
    t107 = (~(t106));
    *((unsigned int *)t86) = t107;
    *((unsigned int *)t104) = 0;
    if (*((unsigned int *)t105) != 0)
        goto LAB66;

LAB65:    t112 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t112 & 1U);
    t113 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t113 & 1U);
    memset(t114, 0, 8);
    t115 = (t86 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (~(t116));
    t118 = *((unsigned int *)t86);
    t119 = (t118 & t117);
    t120 = (t119 & 1U);
    if (t120 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t115) != 0)
        goto LAB69;

LAB70:    t123 = *((unsigned int *)t76);
    t124 = *((unsigned int *)t114);
    t125 = (t123 & t124);
    *((unsigned int *)t122) = t125;
    t126 = (t76 + 4);
    t127 = (t114 + 4);
    t128 = (t122 + 4);
    t129 = *((unsigned int *)t126);
    t130 = *((unsigned int *)t127);
    t131 = (t129 | t130);
    *((unsigned int *)t128) = t131;
    t132 = *((unsigned int *)t128);
    t133 = (t132 != 0);
    if (t133 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB55;

LAB57:    t96 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB59;

LAB58:    *((unsigned int *)t93) = 1;
    goto LAB59;

LAB61:    *((unsigned int *)t86) = 1;
    goto LAB64;

LAB66:    t108 = *((unsigned int *)t86);
    t109 = *((unsigned int *)t105);
    *((unsigned int *)t86) = (t108 | t109);
    t110 = *((unsigned int *)t104);
    t111 = *((unsigned int *)t105);
    *((unsigned int *)t104) = (t110 | t111);
    goto LAB65;

LAB67:    *((unsigned int *)t114) = 1;
    goto LAB70;

LAB69:    t121 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB70;

LAB71:    t134 = *((unsigned int *)t122);
    t135 = *((unsigned int *)t128);
    *((unsigned int *)t122) = (t134 | t135);
    t136 = (t76 + 4);
    t137 = (t114 + 4);
    t138 = *((unsigned int *)t76);
    t139 = (~(t138));
    t140 = *((unsigned int *)t136);
    t141 = (~(t140));
    t142 = *((unsigned int *)t114);
    t143 = (~(t142));
    t144 = *((unsigned int *)t137);
    t145 = (~(t144));
    t146 = (t139 & t141);
    t147 = (t143 & t145);
    t148 = (~(t146));
    t149 = (~(t147));
    t150 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t150 & t148);
    t151 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t151 & t149);
    t152 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t152 & t148);
    t153 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t153 & t149);
    goto LAB73;

LAB74:    *((unsigned int *)t154) = 1;
    goto LAB77;

LAB76:    t161 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB77;

LAB78:    t167 = (t0 + 2648U);
    t168 = *((char **)t167);
    t167 = (t0 + 4008);
    t169 = (t167 + 56U);
    t170 = *((char **)t169);
    t171 = ((char*)((ng15)));
    memset(t172, 0, 8);
    xsi_vlog_unsigned_minus(t172, 32, t170, 10, t171, 32);
    memset(t173, 0, 8);
    t174 = (t168 + 4);
    if (*((unsigned int *)t174) != 0)
        goto LAB82;

LAB81:    t175 = (t172 + 4);
    if (*((unsigned int *)t175) != 0)
        goto LAB82;

LAB85:    if (*((unsigned int *)t168) < *((unsigned int *)t172))
        goto LAB83;

LAB84:    memset(t166, 0, 8);
    t177 = (t173 + 4);
    t178 = *((unsigned int *)t177);
    t179 = (~(t178));
    t180 = *((unsigned int *)t173);
    t181 = (t180 & t179);
    t182 = (t181 & 1U);
    if (t182 != 0)
        goto LAB89;

LAB87:    if (*((unsigned int *)t177) == 0)
        goto LAB86;

LAB88:    t183 = (t166 + 4);
    *((unsigned int *)t166) = 1;
    *((unsigned int *)t183) = 1;

LAB89:    t184 = (t166 + 4);
    t185 = (t173 + 4);
    t186 = *((unsigned int *)t173);
    t187 = (~(t186));
    *((unsigned int *)t166) = t187;
    *((unsigned int *)t184) = 0;
    if (*((unsigned int *)t185) != 0)
        goto LAB91;

LAB90:    t192 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t192 & 1U);
    t193 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t193 & 1U);
    memset(t194, 0, 8);
    t195 = (t166 + 4);
    t196 = *((unsigned int *)t195);
    t197 = (~(t196));
    t198 = *((unsigned int *)t166);
    t199 = (t198 & t197);
    t200 = (t199 & 1U);
    if (t200 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t195) != 0)
        goto LAB94;

LAB95:    t203 = *((unsigned int *)t154);
    t204 = *((unsigned int *)t194);
    t205 = (t203 & t204);
    *((unsigned int *)t202) = t205;
    t206 = (t154 + 4);
    t207 = (t194 + 4);
    t208 = (t202 + 4);
    t209 = *((unsigned int *)t206);
    t210 = *((unsigned int *)t207);
    t211 = (t209 | t210);
    *((unsigned int *)t208) = t211;
    t212 = *((unsigned int *)t208);
    t213 = (t212 != 0);
    if (t213 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB80;

LAB82:    t176 = (t173 + 4);
    *((unsigned int *)t173) = 1;
    *((unsigned int *)t176) = 1;
    goto LAB84;

LAB83:    *((unsigned int *)t173) = 1;
    goto LAB84;

LAB86:    *((unsigned int *)t166) = 1;
    goto LAB89;

LAB91:    t188 = *((unsigned int *)t166);
    t189 = *((unsigned int *)t185);
    *((unsigned int *)t166) = (t188 | t189);
    t190 = *((unsigned int *)t184);
    t191 = *((unsigned int *)t185);
    *((unsigned int *)t184) = (t190 | t191);
    goto LAB90;

LAB92:    *((unsigned int *)t194) = 1;
    goto LAB95;

LAB94:    t201 = (t194 + 4);
    *((unsigned int *)t194) = 1;
    *((unsigned int *)t201) = 1;
    goto LAB95;

LAB96:    t214 = *((unsigned int *)t202);
    t215 = *((unsigned int *)t208);
    *((unsigned int *)t202) = (t214 | t215);
    t216 = (t154 + 4);
    t217 = (t194 + 4);
    t218 = *((unsigned int *)t154);
    t219 = (~(t218));
    t220 = *((unsigned int *)t216);
    t221 = (~(t220));
    t222 = *((unsigned int *)t194);
    t223 = (~(t222));
    t224 = *((unsigned int *)t217);
    t225 = (~(t224));
    t226 = (t219 & t221);
    t227 = (t223 & t225);
    t228 = (~(t226));
    t229 = (~(t227));
    t230 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t230 & t228);
    t231 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t231 & t229);
    t232 = *((unsigned int *)t202);
    *((unsigned int *)t202) = (t232 & t228);
    t233 = *((unsigned int *)t202);
    *((unsigned int *)t202) = (t233 & t229);
    goto LAB98;

LAB99:    xsi_set_current_line(141, ng0);

LAB102:    xsi_set_current_line(142, ng0);
    t241 = (t0 + 4328);
    t242 = (t241 + 56U);
    t243 = *((char **)t242);
    memset(t240, 0, 8);
    t244 = (t240 + 4);
    t245 = (t243 + 4);
    t246 = *((unsigned int *)t243);
    t247 = (t246 >> 0);
    *((unsigned int *)t240) = t247;
    t248 = *((unsigned int *)t245);
    t249 = (t248 >> 0);
    *((unsigned int *)t244) = t249;
    t250 = *((unsigned int *)t240);
    *((unsigned int *)t240) = (t250 & 255U);
    t251 = *((unsigned int *)t244);
    *((unsigned int *)t244) = (t251 & 255U);
    t252 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t252, t240, 0, 0, 8, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = ((char*)((ng16)));
    memset(t20, 0, 8);
    t12 = (t6 + 4);
    t13 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t12);
    t28 = *((unsigned int *)t13);
    t29 = (t25 | t28);
    t30 = (~(t29));
    t34 = (t24 & t30);
    if (t34 != 0)
        goto LAB106;

LAB103:    if (t29 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t20) = 1;

LAB106:    t19 = (t20 + 4);
    t35 = *((unsigned int *)t19);
    t36 = (~(t35));
    t37 = *((unsigned int *)t20);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB109:    goto LAB101;

LAB105:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB106;

LAB107:    xsi_set_current_line(144, ng0);
    t26 = ((char*)((ng2)));
    t31 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t31, t26, 0, 0, 1, 0LL);
    goto LAB109;

}


extern void work_m_00000000002918385361_0286164271_init()
{
	static char *pe[] = {(void *)Always_70_0,(void *)Always_81_1,(void *)Always_137_2};
	xsi_register_didat("work_m_00000000002918385361_0286164271", "isim/MainTest_isim_beh.exe.sim/work/m_00000000002918385361_0286164271.didat");
	xsi_register_executes(pe);
}
