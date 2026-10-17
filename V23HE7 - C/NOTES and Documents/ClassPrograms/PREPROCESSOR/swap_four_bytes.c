#include <stdio.h>

//Macro to swap bytes
#define SWAP_FOUR_BYTES(data) \
( (((data) >> 24) & 0x000000FF) | (((data) >>  8) & 0x0000FF00) | \
  (((data) <<  8) & 0x00FF0000) | (((data) << 24) & 0xFF000000) ) 
int main()
{
    unsigned int value = 0x12345678;

    //printing value before swapping
    printf("Before Swaping: %x\n", value);
    //printing value after swapping
    printf("After Swaping : %x\n", SWAP_FOUR_BYTES(value));
    return 0;
}

