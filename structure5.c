#include<stdio.h>
struct student
{
	int regdno;
	int marks[5];
}s1;

int main()
{
	int i;
	//s1={7131,{94,95,96,97,98,99}};
	s1.regdno=7131;
	for(i=0;i<5;i++)
	{
		scanf("%d",&s1.marks[i]);
	}
	printf("%d\n",s1.regdno);
	for(i=0;i<5;i++)
	{
		printf("%d",s1.marks[i]);
	}
	
	return 0;
}
