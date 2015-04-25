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
static const char *ng0 = "C:/Users/Dilancuan/Documents/FPGAdventure/FPGAdventure/Adventure/map.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_58_0(char *t0)
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

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 5104);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(59, ng0);

LAB9:    xsi_set_current_line(60, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_65_1(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t63[8];
    char t66[8];
    char t100[8];
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
    char *t64;
    char *t65;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5120);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1688U);
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

LAB21:    xsi_set_current_line(69, ng0);

LAB24:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t21 = (t16 | t17);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB28;

LAB25:    if (t21 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t6) = 1;

LAB28:    memset(t20, 0, 8);
    t19 = (t6 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t25);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t19) != 0)
        goto LAB31;

LAB32:    t31 = (t20 + 4);
    t34 = *((unsigned int *)t20);
    t35 = *((unsigned int *)t31);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB33;

LAB34:    memcpy(t66, t20, 8);

LAB35:    t94 = (t66 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t66);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t21 = (t16 | t17);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB54;

LAB51:    if (t21 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t6) = 1;

LAB54:    memset(t20, 0, 8);
    t19 = (t6 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t25);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t19) != 0)
        goto LAB57;

LAB58:    t31 = (t20 + 4);
    t34 = *((unsigned int *)t20);
    t35 = *((unsigned int *)t31);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB59;

LAB60:    memcpy(t66, t20, 8);

LAB61:    t94 = (t66 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t66);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(91, ng0);

LAB77:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB75:
LAB49:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1848U);
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

LAB20:    xsi_set_current_line(66, ng0);

LAB23:    xsi_set_current_line(67, ng0);
    t61 = ((char*)((ng1)));
    t62 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t62, t61, 0, 0, 8, 0LL);
    goto LAB22;

LAB27:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t20) = 1;
    goto LAB32;

LAB31:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB32;

LAB33:    t32 = (t0 + 3368);
    t33 = (t32 + 56U);
    t41 = *((char **)t33);
    t42 = ((char*)((ng1)));
    memset(t27, 0, 8);
    t55 = (t41 + 4);
    t61 = (t42 + 4);
    t37 = *((unsigned int *)t41);
    t38 = *((unsigned int *)t42);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t55);
    t43 = *((unsigned int *)t61);
    t44 = (t40 ^ t43);
    t45 = (t39 | t44);
    t47 = *((unsigned int *)t55);
    t48 = *((unsigned int *)t61);
    t49 = (t47 | t48);
    t51 = (~(t49));
    t52 = (t45 & t51);
    if (t52 != 0)
        goto LAB39;

LAB36:    if (t49 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t27) = 1;

LAB39:    memset(t63, 0, 8);
    t64 = (t27 + 4);
    t53 = *((unsigned int *)t64);
    t54 = (~(t53));
    t56 = *((unsigned int *)t27);
    t57 = (t56 & t54);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t64) != 0)
        goto LAB42;

LAB43:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t63);
    t67 = (t59 & t60);
    *((unsigned int *)t66) = t67;
    t68 = (t20 + 4);
    t69 = (t63 + 4);
    t70 = (t66 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB35;

LAB38:    t62 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t63) = 1;
    goto LAB43;

LAB42:    t65 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB43;

LAB44:    t76 = *((unsigned int *)t66);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t66) = (t76 | t77);
    t78 = (t20 + 4);
    t79 = (t63 + 4);
    t80 = *((unsigned int *)t20);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t63);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t46 = (t81 & t83);
    t50 = (t85 & t87);
    t88 = (~(t46));
    t89 = (~(t50));
    t90 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t90 & t88);
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    t92 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t92 & t88);
    t93 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t93 & t89);
    goto LAB46;

LAB47:    xsi_set_current_line(85, ng0);

LAB50:    xsi_set_current_line(86, ng0);
    t101 = (t0 + 2488U);
    t102 = *((char **)t101);
    memset(t100, 0, 8);
    t101 = (t100 + 4);
    t103 = (t102 + 4);
    t104 = *((unsigned int *)t102);
    t105 = (t104 >> 0);
    *((unsigned int *)t100) = t105;
    t106 = *((unsigned int *)t103);
    t107 = (t106 >> 0);
    *((unsigned int *)t101) = t107;
    t108 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t108 & 255U);
    t109 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t109 & 255U);
    t110 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t110, t100, 0, 0, 8, 0LL);
    goto LAB49;

LAB53:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t20) = 1;
    goto LAB58;

LAB57:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB58;

LAB59:    t32 = (t0 + 3368);
    t33 = (t32 + 56U);
    t41 = *((char **)t33);
    t42 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t55 = (t41 + 4);
    t61 = (t42 + 4);
    t37 = *((unsigned int *)t41);
    t38 = *((unsigned int *)t42);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t55);
    t43 = *((unsigned int *)t61);
    t44 = (t40 ^ t43);
    t45 = (t39 | t44);
    t47 = *((unsigned int *)t55);
    t48 = *((unsigned int *)t61);
    t49 = (t47 | t48);
    t51 = (~(t49));
    t52 = (t45 & t51);
    if (t52 != 0)
        goto LAB65;

LAB62:    if (t49 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t27) = 1;

LAB65:    memset(t63, 0, 8);
    t64 = (t27 + 4);
    t53 = *((unsigned int *)t64);
    t54 = (~(t53));
    t56 = *((unsigned int *)t27);
    t57 = (t56 & t54);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t64) != 0)
        goto LAB68;

LAB69:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t63);
    t67 = (t59 & t60);
    *((unsigned int *)t66) = t67;
    t68 = (t20 + 4);
    t69 = (t63 + 4);
    t70 = (t66 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB70;

LAB71:
LAB72:    goto LAB61;

LAB64:    t62 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t63) = 1;
    goto LAB69;

LAB68:    t65 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB69;

LAB70:    t76 = *((unsigned int *)t66);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t66) = (t76 | t77);
    t78 = (t20 + 4);
    t79 = (t63 + 4);
    t80 = *((unsigned int *)t20);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t63);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t46 = (t81 & t83);
    t50 = (t85 & t87);
    t88 = (~(t46));
    t89 = (~(t50));
    t90 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t90 & t88);
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    t92 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t92 & t88);
    t93 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t93 & t89);
    goto LAB72;

LAB73:    xsi_set_current_line(88, ng0);

LAB76:    xsi_set_current_line(89, ng0);
    t101 = (t0 + 2648U);
    t102 = *((char **)t101);
    memset(t100, 0, 8);
    t101 = (t100 + 4);
    t103 = (t102 + 4);
    t104 = *((unsigned int *)t102);
    t105 = (t104 >> 0);
    *((unsigned int *)t100) = t105;
    t106 = *((unsigned int *)t103);
    t107 = (t106 >> 0);
    *((unsigned int *)t101) = t107;
    t108 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t108 & 255U);
    t109 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t109 & 255U);
    t110 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t110, t100, 0, 0, 8, 0LL);
    goto LAB75;

}

static void Cont_98_2(char *t0)
{
    char t3[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 5216);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 255U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 7);
    t27 = (t0 + 5136);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000002321340770_0664672977_init()
{
	static char *pe[] = {(void *)Always_58_0,(void *)Always_65_1,(void *)Cont_98_2};
	xsi_register_didat("work_m_00000000002321340770_0664672977", "isim/MainTest_isim_beh.exe.sim/work/m_00000000002321340770_0664672977.didat");
	xsi_register_executes(pe);
}
