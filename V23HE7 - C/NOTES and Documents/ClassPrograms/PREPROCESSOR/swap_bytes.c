#include <stdio.h>

//Macro to swap bytes
#define SWAP_BYTES(data) ((((data>>8) & 0x00FF) | ((data<<8) & 0xFF00))| (data&0xFFFF0000))

int main()
{
    unsigned int value = 0x56781234;

    //printing value before swapping
    printf("Before Swaping: %x\n", value);
    //printing value after swapping
    printf("After Swaping : %x\n", SWAP_BYTES(value));
    return 0;
}

