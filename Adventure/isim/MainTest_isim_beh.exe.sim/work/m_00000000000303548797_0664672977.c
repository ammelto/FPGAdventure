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
static const char *ng0 = "E:/Adventure/Adventure/map.v";
static int ng1[] = {0, 0};
static int ng2[] = {160, 0};
static unsigned int ng3[] = {7U, 0U};
static int ng4[] = {7, 0};
static int ng5[] = {5, 0};
static int ng6[] = {320, 0};
static int ng7[] = {4, 0};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {1, 0};



static void Always_36_0(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t63[8];
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
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1528U);
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

LAB21:    xsi_set_current_line(40, ng0);

LAB24:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB26;

LAB25:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB27;

LAB28:    t13 = (t6 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB36;

LAB35:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB37;

LAB38:    t13 = (t6 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = ((char*)((ng10)));
    t18 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t6, t20, t27, ((int*)(t12)), 2, t13, 32, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t46 = (!(t7));
    t26 = (t20 + 4);
    t8 = *((unsigned int *)t26);
    t50 = (!(t8));
    t64 = (t46 && t50);
    t31 = (t27 + 4);
    t9 = *((unsigned int *)t31);
    t65 = (!(t9));
    t66 = (t64 && t65);
    if (t66 == 1)
        goto LAB45;

LAB46:
LAB42:
LAB32:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1688U);
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

LAB20:    xsi_set_current_line(37, ng0);

LAB23:    xsi_set_current_line(38, ng0);
    t61 = ((char*)((ng1)));
    t62 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t62, t61, 0, 0, 8, 0LL);
    goto LAB22;

LAB26:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(45, ng0);
    t18 = ((char*)((ng3)));
    t19 = (t0 + 2568);
    t26 = (t0 + 2568);
    t31 = (t26 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng4)));
    t41 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t20, t27, t63, ((int*)(t32)), 2, t33, 32, 1, t41, 32, 1);
    t42 = (t20 + 4);
    t14 = *((unsigned int *)t42);
    t46 = (!(t14));
    t55 = (t27 + 4);
    t15 = *((unsigned int *)t55);
    t50 = (!(t15));
    t64 = (t46 && t50);
    t61 = (t63 + 4);
    t16 = *((unsigned int *)t61);
    t65 = (!(t16));
    t66 = (t64 && t65);
    if (t66 == 1)
        goto LAB33;

LAB34:    goto LAB32;

LAB33:    t17 = *((unsigned int *)t63);
    t67 = (t17 + 0);
    t21 = *((unsigned int *)t20);
    t22 = *((unsigned int *)t27);
    t68 = (t21 - t22);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t19, t18, t67, *((unsigned int *)t27), t69, 0LL);
    goto LAB34;

LAB36:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;
    goto LAB38;

LAB40:    xsi_set_current_line(47, ng0);
    t18 = ((char*)((ng3)));
    t19 = (t0 + 2568);
    t26 = (t0 + 2568);
    t31 = (t26 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng7)));
    t41 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t20, t27, t63, ((int*)(t32)), 2, t33, 32, 1, t41, 32, 1);
    t42 = (t20 + 4);
    t14 = *((unsigned int *)t42);
    t46 = (!(t14));
    t55 = (t27 + 4);
    t15 = *((unsigned int *)t55);
    t50 = (!(t15));
    t64 = (t46 && t50);
    t61 = (t63 + 4);
    t16 = *((unsigned int *)t61);
    t65 = (!(t16));
    t66 = (t64 && t65);
    if (t66 == 1)
        goto LAB43;

LAB44:    goto LAB42;

LAB43:    t17 = *((unsigned int *)t63);
    t67 = (t17 + 0);
    t21 = *((unsigned int *)t20);
    t22 = *((unsigned int *)t27);
    t68 = (t21 - t22);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t19, t18, t67, *((unsigned int *)t27), t69, 0LL);
    goto LAB44;

LAB45:    t10 = *((unsigned int *)t27);
    t67 = (t10 + 0);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t20);
    t68 = (t11 - t14);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t67, *((unsigned int *)t20), t69, 0LL);
    goto LAB46;

}

static void Cont_53_1(char *t0)
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

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4152);
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
    t18 = (t0 + 4072);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000303548797_0664672977_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Cont_53_1};
	xsi_register_didat("work_m_00000000000303548797_0664672977", "isim/MainTest_isim_beh.exe.sim/work/m_00000000000303548797_0664672977.didat");
	xsi_register_executes(pe);
}
