#include "GPIO.h"
#include "GPIO_Cfg.h"
const GPIO_CfgType GPIO_ConfigParam [GPIO_GROUPS_NUMBER] =
{
	{
		0x05,0x02,              //port num ex: port A -->0x00 , pin num ex:pin0->0x01,1->02,2->04,3->08,4->10,5->20,6->40
		0,0,0,                                      //dont needed
		0xFF,                   //input or output : in>>0x00 , out>>0xFF
		0xFF,0x00,0x00,                             //dont needed
		0x00,0x00,0x00,                             //dont needed
		0xFF,                   //digital fn >> dont change
		0                                           //dont needed
	},
    {
        0x05,0x04,
        0,0,0,
        0xFF,
        0x00,0xFF,0x00,
        0x00,0x00,0x00,
        0xFF,
        0
    },
    {
        0x05,0x08,
        0,0,0,
        0xFF,
        0x00,0xFF,0x00,
        0x00,0x00,0x00,
        0xFF,
        0
    }
};

