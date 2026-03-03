#include <stdio.h>
#include "ch32v00x.h"
#include "gpio.h"
#include "debug.h"

#define BOARD_NAME  "CH32V003xx"
#define FW_VERSION  "v1.0.0"

int main(void)
{
    SystemCoreClockUpdate();
    Delay_Init();
    USART_Printf_Init(115200);

    gpio_init();

    printf("=================================\r\n");
    printf("Board: %s\r\n", BOARD_NAME);
    printf("Firmware: %s\r\n", FW_VERSION);
    printf("GPIO Pin: PD6\r\n");
    printf("=================================\r\n");

    uint32_t counter = 0;

    while (counter < 20)
    {
        counter++;
        printf("Counter: %lu\r\n", counter);

        gpio_toggle();
        Delay_Ms(500);
    }

    gpio_clear();
    printf("GPIO stopped\r\n");

    while (1)
    {
        // Idle loop
    }
}