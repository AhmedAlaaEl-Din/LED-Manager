/*
 * main.c
 *  Author: Abanob
 */
#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "M4MemMap.h"
#include <stdint.h>
#include "LED.h"
int main(void)
{

    GPIO_Init();
    //LED_On(0);
    //LED_Off(1);
    LED_Blink(2, 10);
    while (1)
    {

    }
    return 0;
}


