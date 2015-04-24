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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001426659780_4217414517_init();
    work_m_00000000003335253085_3945927883_init();
    work_m_00000000000880711034_3171904890_init();
    work_m_00000000000303548797_0664672977_init();
    work_m_00000000001763701005_0286164271_init();
    work_m_00000000002389032463_0474747464_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002389032463_0474747464");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
