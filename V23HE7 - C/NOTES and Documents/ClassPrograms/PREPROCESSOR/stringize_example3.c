#define PRINT(val,forsp) printf("The value of "#val"="#forsp"\n",val)
                                //"The value of a=%d\n",a

int main()
{
	int a=10;
	char b='A';
	float c=20.34;

	PRINT(a,%d);
	PRINT(b,%c);
	PRINT(c,%.2f);
}
