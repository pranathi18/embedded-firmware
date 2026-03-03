**Task2**
# VSDSquadron Mini Blinky & UART Assignment **Task2**

## Summary

UART Output:  After reset, the board prints a startup message showing Board name, Firmware version, and a periodic counter. 
              Verified at least 10 lines on the serial terminal.

GPIO Control: Configured PD6 as output using a small GPIO API layer. 
              Toggled the LED and confirmed it matches the datasheet mapping.

Firmware Structure:  No direct register access in main.c. Used SPL functions like GPIO_SetBits(), GPIO_ResetBits(), and GPIO_Init() for safe peripheral control.

Learning:  Studied header and source files (ch32v00x.h / ch32v00x.c) to understand clock control, GPIO registers, and how the SPL functions work.

Reference: CH32V003 Vanilla GCC Repository
