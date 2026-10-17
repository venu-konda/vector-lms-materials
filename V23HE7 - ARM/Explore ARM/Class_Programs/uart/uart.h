//uart.h
#include "types.h"
void InitUART(void);
void UART_Tx(u8 sByte);
u8 UART_Rx(void);
void UART_puts(s8 *);
void UART_U32(u32);
void UART_S32(s32);
void UART_F32(f32);
void UART_Bin(u32);
void UART_Hex(u32);
s8 * UART_gets(void);
