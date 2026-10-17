#include"myheader.h"
extern int cnt;
void Save(PRODUCT *cart)
{

	FILE *fp;
	fp=fopen("prodfile","w");

	fwrite(cart,sizeof(PRODUCT),cnt,fp);
	fclose(fp);

}
