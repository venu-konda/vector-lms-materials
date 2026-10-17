#include<stdio.h>
int main()
{
        unsigned char ch=0Xab;
        char l_nbl,h_nbl;
        l_nbl=ch>>4;
        h_nbl=ch<<4;
        ch=l_nbl | h_nbl;
        printf("%x",ch);
}//check output...

#include<stdio.h>
int main()
{
        signed char ch=0Xab;
        char l_nbl,h_nbl;
        l_nbl=ch>>4;
        h_nbl=ch<<4;
        ch=l_nbl | h_nbl;
        printf("%x",ch);
}//check output...

//finish in single line
#include<stdio.h>
int main()
{
        signed char ch=0x23;
        ch=ch>>4 | ch<<4;
        printf("%x",ch);
}