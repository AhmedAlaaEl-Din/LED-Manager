
#include "LED.h"
#include "led_confg.h"


const LED_ConfigType LED_ConfigParam[LED_NUMBER] =
{
	{0x00, ACTIVE_LOW, 16000}
	,
	{0x01, ACTIVE_HIGH, 8000}
	,
	{0x02, ACTIVE_HIGH, 1000000}

};
