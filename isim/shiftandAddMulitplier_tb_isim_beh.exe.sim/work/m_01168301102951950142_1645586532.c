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

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/tanmay/tanmay/verilog/shiftandAddMulitplier/shiftandAddMultiplier.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};
static int ng4[] = {3, 0};



static void Always_28_0(char *t0)
{
    char t13[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t4 = (t0 + 4656);
    *((int *)t4) = t9;

LAB6:    t5 = (t0 + 4656);
    if (*((int *)t5) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    xsi_vlogtype_concat(t13, 9, 9, 2U, t11, 5, t4, 4);
    t12 = (t0 + 1608);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 8);
    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);

LAB9:    xsi_set_current_line(35, ng0);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 4, t4, 4, t5, 32);
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t13, 0, 0, 4);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t10 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t16 = *((unsigned int *)t10);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t5) = t18;
    t11 = (t0 + 1768);
    t12 = (t0 + 1768);
    t14 = (t12 + 72U);
    t15 = *((char **)t14);
    t22 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t33, t15, 2, t22, 32, 1);
    t28 = (t33 + 4);
    t19 = *((unsigned int *)t28);
    t9 = (!(t19));
    if (t9 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 5, t4, 5, t5, 32);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t13, 0, 0, 5);
    t2 = (t0 + 4656);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB6;

LAB10:    xsi_set_current_line(36, ng0);

LAB13:    xsi_set_current_line(37, ng0);
    t28 = (t0 + 1928);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 5, t30, 5, t32, 4);
    t31 = (t0 + 1928);
    xsi_vlogvar_assign_value(t31, t33, 0, 0, 5);
    goto LAB12;

LAB14:    xsi_vlogvar_assign_value(t11, t13, 0, *((unsigned int *)t33), 1);
    goto LAB15;

}


extern void work_m_01168301102951950142_1645586532_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_01168301102951950142_1645586532", "isim/shiftandAddMulitplier_tb_isim_beh.exe.sim/work/m_01168301102951950142_1645586532.didat");
	xsi_register_executes(pe);
}
