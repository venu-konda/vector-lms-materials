#include <stdio.h>
int main()
{
printf("line no : %d\n",__LINE__); //represents current line number
printf("file name : %s\n",__FILE__); //represents current file name
printf("time : %s\n",__TIME__); //represents compile time in "HH:MM:SS" format
printf("date : %s\n",__DATE__); //represents compile date in "MMM DD YYYY" format
printf("%d\n",(int)NULL);
printf("%d\n",EOF);
}
