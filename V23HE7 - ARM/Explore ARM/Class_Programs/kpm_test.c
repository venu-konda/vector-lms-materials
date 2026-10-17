#include "kpm.h"

u8 keyV;
int main()
{
	
	InitKPM();
	while(1)
	{
		keyV=KeyScan();
	}
}
