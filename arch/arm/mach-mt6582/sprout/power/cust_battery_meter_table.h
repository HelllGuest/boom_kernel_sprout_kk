/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#define RBAT_PULL_DOWN_R		   30000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R		  100000	
#endif
#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
#define TABLE_NUM 23
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
    	 {-30,124607},
    	 {-25,94918},
        {-20,73035},
        {-15,56734},
        {-10,44468},
        { -5,35150},
        {  0,28008},
        {  5,22486},
        { 10,18182},
        { 15,14803},
        { 20,12129},
        { 25,10000},
        { 30,8292},
        { 35,6914},
        { 40,5795},
        { 45,4872},
        { 50,4101},
        { 55,3467},
        { 60,2936},
        { 65,2494},
        { 70,2130},
        { 75,1817},
        { 80,1562}
    };
#endif

#if (BAT_NTC_47 == 1)
#define TABLE_NUM 17
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
    {0   ,  4339  },
    {2   ,  4308  },
    {3   ,  4285  },
    {5   ,  4263  },
    {7   ,  4241  },
    {9   ,  4222  },
    {10  ,  4203  },
    {12  ,  4184  },
    {14  ,  4163  },
    {16  ,  4145  },
    {17  ,  4125  },
    {19  ,  4106  },
    {21  ,  4091  },
    {23  ,  4076  },
    {24  ,  4057  },
    {26  ,  4031  },
    {28  ,  3997  },
    {30  ,  3971  },
    {31  ,  3954  },
    {33  ,  3938  },
    {35  ,  3927  },
    {37  ,  3917  },
    {38  ,  3906  },
    {40  ,  3896  },
    {42  ,  3885  },
    {43  ,  3874  },
    {45  ,  3864  },
    {47  ,  3854  },
    {49  ,  3844  },
    {50  ,  3834  },
    {52  ,  3825  },
    {54  ,  3818  },
    {56  ,  3810  },
    {57  ,  3803  },
    {59  ,  3795  },
    {61  ,  3791  },
    {63  ,  3786  },
    {64  ,  3782  },
    {66  ,  3777  },
    {68  ,  3773  },
    {70  ,  3769  },
    {71  ,  3765  },
    {73  ,  3760  },
    {75  ,  3755  },
    {77  ,  3751  },
    {78  ,  3744  },
    {80  ,  3737  },
    {82  ,  3731  },
    {83  ,  3726  },
    {85  ,  3720  },
    {87  ,  3713  },
    {89  ,  3706  },
    {90  ,  3695  },
    {92  ,  3678  },
    {94  ,  3654  },
    {96  ,  3618  },
    {97  ,  3565  },
    {99  ,  3483  },
    {100 ,  3319  } 	       
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
    {0   ,  4335  },
    {2   ,  4309  },
    {3   ,  4286  },
    {5   ,  4264  },
    {7   ,  4246  },
    {9   ,  4226  },
    {10  ,  4207  },
    {12  ,  4189  },
    {14  ,  4170  },
    {16  ,  4153  },
    {17  ,  4133  },
    {19  ,  4113  },
    {21  ,  4096  },
    {22  ,  4082  },
    {24  ,  4070  },
    {26  ,  4046  },
    {28  ,  4014  },
    {29  ,  3986  },
    {31  ,  3964  },
    {33  ,  3950  },
    {35  ,  3936  },
    {36  ,  3925  },
    {38  ,  3916  },
    {40  ,  3904  },
    {41  ,  3892  },
    {43  ,  3881  },
    {45  ,  3869  },
    {47  ,  3859  },
    {48  ,  3850  },
    {50  ,  3841  },
    {52  ,  3831  },
    {54  ,  3825  },
    {55  ,  3817  },
    {57  ,  3811  },
    {59  ,  3804  },
    {60  ,  3796  },
    {62  ,  3791  },
    {64  ,  3786  },
    {66  ,  3782  },
    {67  ,  3778  },
    {69  ,  3775  },
    {71  ,  3769  },
    {73  ,  3766  },
    {74  ,  3762  },
    {76  ,  3756  },
    {78  ,  3752  },
    {79  ,  3746  },
    {81  ,  3739  },
    {83  ,  3732  },
    {85  ,  3724  },
    {86  ,  3715  },
    {88  ,  3708  },
    {90  ,  3701  },
    {92  ,  3696  },
    {93  ,  3687  },
    {95  ,  3662  },
    {97  ,  3609  },
    {98  ,  3528  },
    {100 ,  3384  } 	       
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
    {0   ,   4331 },
    {2   ,   4307 },
    {3   ,   4287 },
    {5   ,   4265 },
    {7   ,   4245 },
    {9   ,   4226 },
    {10  ,   4206 },
    {12  ,   4188 },
    {14  ,   4168 },
    {16  ,   4150 },
    {17  ,   4131 },
    {19  ,   4112 },
    {21  ,   4095 },
    {23  ,   4080 },
    {24  ,   4071 },
    {26  ,   4047 },
    {28  ,   4020 },
    {30  ,   3998 },
    {31  ,   3982 },
    {33  ,   3973 },
    {35  ,   3960 },
    {37  ,   3945 },
    {38  ,   3927 },
    {40  ,   3910 },
    {42  ,   3896 },
    {44  ,   3883 },
    {45  ,   3871 },
    {47  ,   3861 },
    {49  ,   3852 },
    {51  ,   3843 },
    {52  ,   3834 },
    {54  ,   3826 },
    {56  ,   3819 },
    {58  ,   3813 },
    {59  ,   3808 },
    {61  ,   3802 },
    {63  ,   3797 },
    {65  ,   3792 },
    {66  ,   3788 },
    {68  ,   3783 },
    {70  ,   3775 },
    {72  ,   3768 },
    {73  ,   3763 },
    {75  ,   3756 },
    {77  ,   3750 },
    {78  ,   3746 },
    {80  ,   3741 },
    {82  ,   3734 },
    {84  ,   3725 },
    {85  ,   3718 },
    {87  ,   3708 },
    {89  ,   3698 },
    {91  ,   3694 },
    {92  ,   3693 },
    {94  ,   3688 },
    {96  ,   3650 },
    {98  ,   3577 },
    {99  ,   3469 },
    {100 ,   3258 } 	     
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
    {0  ,  4319 },
    {2  ,  4298 },
    {3  ,  4278 },
    {5  ,  4259 },
    {7  ,  4237 },
    {9  ,  4219 },
    {10 ,  4199 },
    {12 ,  4180 },
    {14 ,  4161 },
    {16 ,  4142 },
    {17 ,  4124 },
    {19 ,  4105 },
    {21 ,  4089 },
    {23 ,  4070 },
    {24 ,  4055 },
    {26 ,  4039 },
    {28 ,  4019 },
    {30 ,  4004 },
    {31 ,  3991 },
    {33 ,  3976 },
    {35 ,  3962 },
    {37 ,  3944 },
    {38 ,  3925 },
    {40 ,  3907 },
    {42 ,  3891 },
    {44 ,  3879 },
    {45 ,  3868 },
    {47 ,  3858 },
    {49 ,  3849 },
    {51 ,  3840 },
    {52 ,  3831 },
    {54 ,  3823 },
    {56 ,  3816 },
    {58 ,  3809 },
    {59 ,  3803 },
    {61 ,  3798 },
    {63 ,  3793 },
    {64 ,  3787 },
    {66 ,  3782 },
    {68 ,  3776 },
    {70 ,  3765 },
    {71 ,  3755 },
    {73 ,  3747 },
    {75 ,  3739 },
    {77 ,  3732 },
    {78 ,  3728 },
    {80 ,  3722 },
    {82 ,  3716 },
    {84 ,  3709 },
    {85 ,  3700 },
    {87 ,  3691 },
    {89 ,  3681 },
    {91 ,  3679 },
    {92 ,  3675 },
    {94 ,  3669 },
    {96 ,  3635 },
    {98 ,  3565 },
    {99 ,  3466 },
    {100,  3287 }    
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
    {799  ,   4339},
    {799  ,   4308},
    {799  ,   4285},
    {785  ,   4263},
    {781  ,   4241},
    {758  ,   4222},
    {756  ,   4203},
    {770  ,   4184},
    {761  ,   4163},
    {750  ,   4145},
    {748  ,   4125},
    {740  ,   4106},
    {740  ,   4091},
    {742  ,   4076},
    {752  ,   4057},
    {766  ,   4031},
    {742  ,   3997},
    {709  ,   3971},
    {696  ,   3954},
    {690  ,   3938},
    {677  ,   3927},
    {665  ,   3917},
    {650  ,   3906},
    {667  ,   3896},
    {676  ,   3885},
    {676  ,   3874},
    {681  ,   3864},
    {667  ,   3854},
    {674  ,   3844},
    {666  ,   3834},
    {636  ,   3825},
    {630  ,   3818},
    {684  ,   3810},
    {698  ,   3803},
    {683  ,   3795},
    {703  ,   3791},
    {676  ,   3786},
    {691  ,   3782},
    {657  ,   3777},
    {662  ,   3773},
    {717  ,   3769},
    {726  ,   3765},
    {757  ,   3760},
    {769  ,   3755},
    {777  ,   3751},
    {797  ,   3744},
    {783  ,   3737},
    {816  ,   3731},
    {905  ,   3726},
    {937  ,   3720},
    {1027 ,   3713},
    {1100 ,   3706},
    {1219 ,   3695},
    {1398 ,   3678},
    {1608 ,   3654},
    {2071 ,   3618},
    {2440 ,   3565},
    {2493 ,   3483},
    {3120 ,   3319} 	       
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
    {680  ,   4335},
    {680  ,   4309},
    {678  ,   4286},
    {688  ,   4264},
    {701  ,   4246},
    {693  ,   4226},
    {695  ,   4207},
    {675  ,   4189},
    {673  ,   4170},
    {692  ,   4153},
    {685  ,   4133},
    {664  ,   4113},
    {675  ,   4096},
    {678  ,   4082},
    {688  ,   4070},
    {666  ,   4046},
    {644  ,   4014},
    {654  ,   3986},
    {660  ,   3964},
    {655  ,   3950},
    {651  ,   3936},
    {658  ,   3925},
    {650  ,   3916},
    {633  ,   3904},
    {615  ,   3892},
    {629  ,   3881},
    {636  ,   3869},
    {639  ,   3859},
    {645  ,   3850},
    {634  ,   3841},
    {636  ,   3831},
    {640  ,   3825},
    {614  ,   3817},
    {612  ,   3811},
    {668  ,   3804},
    {674  ,   3796},
    {671  ,   3791},
    {689  ,   3786},
    {665  ,   3782},
    {681  ,   3778},
    {653  ,   3775},
    {651  ,   3769},
    {709  ,   3766},
    {718  ,   3762},
    {746  ,   3756},
    {761  ,   3752},
    {764  ,   3746},
    {784  ,   3739},
    {772  ,   3732},
    {794  ,   3724},
    {865  ,   3715},
    {902  ,   3708},
    {996  ,   3701},
    {1075 ,   3696},
    {1198 ,   3687},
    {1357 ,   3662},
    {1497 ,   3609},
    {1838 ,   3528},
    {1987 ,   3384} 	       
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
    {129 ,    4331},
    {129 ,    4307},
    {137 ,    4287},
    {137 ,    4265},
    {139 ,    4245},
    {142 ,    4226},
    {141 ,    4206},
    {145 ,    4188},
    {144 ,    4168},
    {149 ,    4150},
    {150 ,    4131},
    {150 ,    4112},
    {153 ,    4095},
    {161 ,    4080},
    {177 ,    4071},
    {165 ,    4047},
    {162 ,    4020},
    {163 ,    3998},
    {168 ,    3982},
    {173 ,    3973},
    {169 ,    3960},
    {164 ,    3945},
    {156 ,    3927},
    {145 ,    3910},
    {142 ,    3896},
    {140 ,    3883},
    {138 ,    3871},
    {138 ,    3861},
    {135 ,    3852},
    {136 ,    3843},
    {132 ,    3834},
    {133 ,    3826},
    {132 ,    3819},
    {137 ,    3813},
    {137 ,    3808},
    {138 ,    3802},
    {140 ,    3797},
    {148 ,    3792},
    {151 ,    3788},
    {150 ,    3783},
    {145 ,    3775},
    {142 ,    3768},
    {143 ,    3763},
    {144 ,    3756},
    {142 ,    3750},
    {148 ,    3746},
    {150 ,    3741},
    {153 ,    3734},
    {151 ,    3725},
    {151 ,    3718},
    {154 ,    3708},
    {153 ,    3698},
    {155 ,    3694},
    {169 ,    3693},
    {185 ,    3688},
    {177 ,    3650},
    {188 ,    3577},
    {220 ,    3469},
    {344 ,    3258} 	       
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
    {85  ,   4319 },
    {85  ,   4298 },
    {89  ,   4278 },
    {90  ,   4259 },
    {87  ,   4237 },
    {91  ,   4219 },
    {89  ,   4199 },
    {92  ,   4180 },
    {91  ,   4161 },
    {94  ,   4142 },
    {95  ,   4124 },
    {93  ,   4105 },
    {98  ,   4089 },
    {95  ,   4070 },
    {103 ,   4055 },
    {108 ,   4039 },
    {99  ,   4019 },
    {106 ,   4004 },
    {111 ,   3991 },
    {112 ,   3976 },
    {114 ,   3962 },
    {109 ,   3944 },
    {102 ,   3925 },
    {95  ,   3907 },
    {89  ,   3891 },
    {89  ,   3879 },
    {88  ,   3868 },
    {87  ,   3858 },
    {89  ,   3849 },
    {89  ,   3840 },
    {89  ,   3831 },
    {90  ,   3823 },
    {91  ,   3816 },
    {95  ,   3809 },
    {92  ,   3803 },
    {96  ,   3798 },
    {95  ,   3793 },
    {97  ,   3787 },
    {98  ,   3782 },
    {99  ,   3776 },
    {91  ,   3765 },
    {88  ,   3755 },
    {89  ,   3747 },
    {84  ,   3739 },
    {85  ,   3732 },
    {88  ,   3728 },
    {87  ,   3722 },
    {91  ,   3716 },
    {95  ,   3709 },
    {91  ,   3700 },
    {91  ,   3691 },
    {89  ,   3681 },
    {94  ,   3679 },
    {98  ,   3675 },
    {102 ,   3669 },
    {98  ,   3635 },
    {107 ,   3565 },
    {123 ,   3466 },
    {195 ,   3287 } 	       
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{       
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },  
    {0  , 0 }, 
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },  
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 },
    {0  , 0 }
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

