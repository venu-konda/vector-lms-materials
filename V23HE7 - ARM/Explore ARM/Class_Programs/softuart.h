//softuart.h
#include "types.h"
void InitSoftUART(void);
void SoftUART_Tx(u8 sByte);
u8   SoftUART_Rx(void);
