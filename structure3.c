#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float cgpa;
}s2,s3,s4;
main()
{
	struct student s1;
	gets(s1.name);
	scanf("%d",&s1.rollno);
	scanf("%f",&s1.cgpa);
	puts(s1.name);
	
	s4=s1;
	
	printf("Name =%s \nRoll Number =%d \nCGPA = %f \n",s4.name,s4.rollno,s4.cgpa);
	
	
}
