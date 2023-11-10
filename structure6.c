#include<stdio.h>
union data 
{
	char str[20];
	int i;
	float f;
	
};

struct meta
{
	char str[20];
	int i;
	float f;
	
};

int main()
{
	union data d;
	struct meta m;
	printf("%d\n",sizeof(d));
	printf("%d",sizeof(m));
	
	return 0;
}
