#include <stdio.h>

#define MY_DEVICE_BASE_ADDR  0x40004000

#define MY_DEVICE_REG_CTRL_OFS  0x20

#define MY_DEVICE_REG_STATUS_OFS 0x30

#define MY_DEVICE_REG_INTR_OFS  0x40

#define REG(name) ((unsigned int)(MY_DEVICE_BASE_ADDR) + MY_DEVICE_REG_##name##_OFS)

int main()
{
 printf("Example to use ## Pre-Processor!\n");
 printf("*** My-Device Register ***\n");
 printf("Control-Register Addr = 0x%x\n", REG(CTRL));
 printf("Status-Register Addr = 0x%x\n", REG(STATUS));
 printf("Interrupt-Register Addr = 0x%x\n", REG(INTR));
 return 0;
}
