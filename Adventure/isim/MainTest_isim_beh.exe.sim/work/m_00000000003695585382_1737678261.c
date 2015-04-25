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
static const char *ng0 = "C:/Users/Dilancuan/Documents/FPGAdventure/FPGAdventure/Adventure/HallwayTop.v";
static int ng1[] = {440, 0};
static unsigned int ng2[] = {224U, 0U};
static int ng3[] = {40, 0};
static int ng4[] = {260, 0};
static int ng5[] = {380, 0};
static unsigned int ng6[] = {28U, 0U};



static void Always_32_0(char *t0)
{
    char t4[8];
    char t7[8];
    char t36[8];
    char t37[8];
    char t39[8];
    char t66[8];
    char t81[8];
    char t85[8];
    char t97[8];
    char t100[8];
    char t121[8];
    char t129[8];
    char t161[8];
    char t169[8];
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
    char *t17;
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
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    int t153;
    int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t204;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB6:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t5))
        goto LAB8;

LAB9:    memset(t4, 0, 8);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t11) == 0)
        goto LAB11;

LAB13:    t17 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t17) = 1;

LAB14:    t18 = (t4 + 4);
    t19 = (t7 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    *((unsigned int *)t4) = t21;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB16;

LAB15:    t26 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t26 & 1U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 1U);
    t28 = (t4 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t4);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB22;

LAB21:    t6 = (t2 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB23;

LAB24:    t9 = (t4 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB31;

LAB30:    t6 = (t2 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB32;

LAB33:    memset(t7, 0, 8);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t9) != 0)
        goto LAB37;

LAB38:    t11 = (t7 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t11);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB39;

LAB40:    memcpy(t39, t7, 8);

LAB41:    memset(t66, 0, 8);
    t67 = (t39 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t39);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t67) != 0)
        goto LAB56;

LAB57:    t74 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = (!(t75));
    t77 = *((unsigned int *)t74);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB58;

LAB59:    memcpy(t169, t66, 8);

LAB60:    t197 = (t169 + 4);
    t198 = *((unsigned int *)t197);
    t199 = (~(t198));
    t200 = *((unsigned int *)t169);
    t201 = (t200 & t199);
    t202 = (t201 != 0);
    if (t202 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB100:
LAB28:
LAB19:    goto LAB2;

LAB7:    t10 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB16:    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t22 | t23);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t24 | t25);
    goto LAB15;

LAB17:    xsi_set_current_line(34, ng0);

LAB20:    xsi_set_current_line(35, ng0);
    t34 = ((char*)((ng2)));
    t35 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 8, 0LL);
    goto LAB19;

LAB22:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB24;

LAB23:    *((unsigned int *)t4) = 1;
    goto LAB24;

LAB26:    xsi_set_current_line(37, ng0);

LAB29:    xsi_set_current_line(38, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 8, 0LL);
    goto LAB28;

LAB31:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t4) = 1;
    goto LAB33;

LAB35:    *((unsigned int *)t7) = 1;
    goto LAB38;

LAB37:    t10 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB38;

LAB39:    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t19 = (t18 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB43;

LAB42:    t28 = (t17 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t18) < *((unsigned int *)t17))
        goto LAB44;

LAB45:    memset(t37, 0, 8);
    t35 = (t36 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (~(t23));
    t25 = *((unsigned int *)t36);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t35) != 0)
        goto LAB49;

LAB50:    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t37);
    t31 = (t29 & t30);
    *((unsigned int *)t39) = t31;
    t40 = (t7 + 4);
    t41 = (t37 + 4);
    t42 = (t39 + 4);
    t32 = *((unsigned int *)t40);
    t33 = *((unsigned int *)t41);
    t43 = (t32 | t33);
    *((unsigned int *)t42) = t43;
    t44 = *((unsigned int *)t42);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB41;

LAB43:    t34 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t36) = 1;
    goto LAB45;

LAB47:    *((unsigned int *)t37) = 1;
    goto LAB50;

LAB49:    t38 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB50;

LAB51:    t46 = *((unsigned int *)t39);
    t47 = *((unsigned int *)t42);
    *((unsigned int *)t39) = (t46 | t47);
    t48 = (t7 + 4);
    t49 = (t37 + 4);
    t50 = *((unsigned int *)t7);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t37);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t62 & t60);
    t63 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t63 & t61);
    t64 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t64 & t60);
    t65 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t65 & t61);
    goto LAB53;

LAB54:    *((unsigned int *)t66) = 1;
    goto LAB57;

LAB56:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB57;

LAB58:    t79 = (t0 + 1368U);
    t80 = *((char **)t79);
    t79 = ((char*)((ng3)));
    memset(t81, 0, 8);
    t82 = (t80 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB62;

LAB61:    t83 = (t79 + 4);
    if (*((unsigned int *)t83) != 0)
        goto LAB62;

LAB65:    if (*((unsigned int *)t80) < *((unsigned int *)t79))
        goto LAB63;

LAB64:    memset(t85, 0, 8);
    t86 = (t81 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t81);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t86) != 0)
        goto LAB68;

LAB69:    t93 = (t85 + 4);
    t94 = *((unsigned int *)t85);
    t95 = *((unsigned int *)t93);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB70;

LAB71:    memcpy(t129, t85, 8);

LAB72:    memset(t161, 0, 8);
    t162 = (t129 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t129);
    t166 = (t165 & t164);
    t167 = (t166 & 1U);
    if (t167 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t162) != 0)
        goto LAB93;

LAB94:    t170 = *((unsigned int *)t66);
    t171 = *((unsigned int *)t161);
    t172 = (t170 | t171);
    *((unsigned int *)t169) = t172;
    t173 = (t66 + 4);
    t174 = (t161 + 4);
    t175 = (t169 + 4);
    t176 = *((unsigned int *)t173);
    t177 = *((unsigned int *)t174);
    t178 = (t176 | t177);
    *((unsigned int *)t175) = t178;
    t179 = *((unsigned int *)t175);
    t180 = (t179 != 0);
    if (t180 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB60;

LAB62:    t84 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB64;

LAB63:    *((unsigned int *)t81) = 1;
    goto LAB64;

LAB66:    *((unsigned int *)t85) = 1;
    goto LAB69;

LAB68:    t92 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB69;

LAB70:    t98 = (t0 + 1208U);
    t99 = *((char **)t98);
    t98 = ((char*)((ng5)));
    memset(t100, 0, 8);
    t101 = (t99 + 4);
    if (*((unsigned int *)t101) != 0)
        goto LAB74;

LAB73:    t102 = (t98 + 4);
    if (*((unsigned int *)t102) != 0)
        goto LAB74;

LAB77:    if (*((unsigned int *)t99) < *((unsigned int *)t98))
        goto LAB75;

LAB76:    memset(t97, 0, 8);
    t104 = (t100 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t100);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB81;

LAB79:    if (*((unsigned int *)t104) == 0)
        goto LAB78;

LAB80:    t110 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t110) = 1;

LAB81:    t111 = (t97 + 4);
    t112 = (t100 + 4);
    t113 = *((unsigned int *)t100);
    t114 = (~(t113));
    *((unsigned int *)t97) = t114;
    *((unsigned int *)t111) = 0;
    if (*((unsigned int *)t112) != 0)
        goto LAB83;

LAB82:    t119 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t119 & 1U);
    t120 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t120 & 1U);
    memset(t121, 0, 8);
    t122 = (t97 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t97);
    t126 = (t125 & t124);
    t127 = (t126 & 1U);
    if (t127 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t122) != 0)
        goto LAB86;

LAB87:    t130 = *((unsigned int *)t85);
    t131 = *((unsigned int *)t121);
    t132 = (t130 & t131);
    *((unsigned int *)t129) = t132;
    t133 = (t85 + 4);
    t134 = (t121 + 4);
    t135 = (t129 + 4);
    t136 = *((unsigned int *)t133);
    t137 = *((unsigned int *)t134);
    t138 = (t136 | t137);
    *((unsigned int *)t135) = t138;
    t139 = *((unsigned int *)t135);
    t140 = (t139 != 0);
    if (t140 == 1)
        goto LAB88;

LAB89:
LAB90:    goto LAB72;

LAB74:    t103 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB76;

LAB75:    *((unsigned int *)t100) = 1;
    goto LAB76;

LAB78:    *((unsigned int *)t97) = 1;
    goto LAB81;

LAB83:    t115 = *((unsigned int *)t97);
    t116 = *((unsigned int *)t112);
    *((unsigned int *)t97) = (t115 | t116);
    t117 = *((unsigned int *)t111);
    t118 = *((unsigned int *)t112);
    *((unsigned int *)t111) = (t117 | t118);
    goto LAB82;

LAB84:    *((unsigned int *)t121) = 1;
    goto LAB87;

LAB86:    t128 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB87;

LAB88:    t141 = *((unsigned int *)t129);
    t142 = *((unsigned int *)t135);
    *((unsigned int *)t129) = (t141 | t142);
    t143 = (t85 + 4);
    t144 = (t121 + 4);
    t145 = *((unsigned int *)t85);
    t146 = (~(t145));
    t147 = *((unsigned int *)t143);
    t148 = (~(t147));
    t149 = *((unsigned int *)t121);
    t150 = (~(t149));
    t151 = *((unsigned int *)t144);
    t152 = (~(t151));
    t153 = (t146 & t148);
    t154 = (t150 & t152);
    t155 = (~(t153));
    t156 = (~(t154));
    t157 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t157 & t155);
    t158 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t158 & t156);
    t159 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t159 & t155);
    t160 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t160 & t156);
    goto LAB90;

LAB91:    *((unsigned int *)t161) = 1;
    goto LAB94;

LAB93:    t168 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t168) = 1;
    goto LAB94;

LAB95:    t181 = *((unsigned int *)t169);
    t182 = *((unsigned int *)t175);
    *((unsigned int *)t169) = (t181 | t182);
    t183 = (t66 + 4);
    t184 = (t161 + 4);
    t185 = *((unsigned int *)t183);
    t186 = (~(t185));
    t187 = *((unsigned int *)t66);
    t188 = (t187 & t186);
    t189 = *((unsigned int *)t184);
    t190 = (~(t189));
    t191 = *((unsigned int *)t161);
    t192 = (t191 & t190);
    t193 = (~(t188));
    t194 = (~(t192));
    t195 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t195 & t193);
    t196 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t196 & t194);
    goto LAB97;

LAB98:    xsi_set_current_line(40, ng0);

LAB101:    xsi_set_current_line(41, ng0);
    t203 = ((char*)((ng2)));
    t204 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t204, t203, 0, 0, 8, 0LL);
    goto LAB100;

}

static void Cont_48_1(char *t0)
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

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3672);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 3592);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003695585382_1737678261_init()
{
	static char *pe[] = {(void *)Always_32_0,(void *)Cont_48_1};
	xsi_register_didat("work_m_00000000003695585382_1737678261", "isim/MainTest_isim_beh.exe.sim/work/m_00000000003695585382_1737678261.didat");
	xsi_register_executes(pe);
}
