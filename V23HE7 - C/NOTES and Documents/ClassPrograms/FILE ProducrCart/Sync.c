#include"myheader.h"
extern int cnt;
PRODUCT * SyncFromFile(PRODUCT *cart)
{
	FILE *fp;
	fp=fopen("prodfile","r");
	if(fp==NULL)
	{
		return NULL;
	}
	fseek(fp,0,2);
	long size=ftell(fp);
	rewind(fp);
	cnt=size/sizeof(PRODUCT);
	cart=calloc(cnt,sizeof(PRODUCT));
	fread(cart,sizeof(PRODUCT),cnt,fp);
	fclose(fp);
	return cart;
}
