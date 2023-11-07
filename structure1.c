#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float cgpa;
};
main()
{
	struct student s1={ "Rohit",45,9.5};
	
	printf("Name =%s \nRoll Number =%d \nCGPA = %f \n",s1.name,s1.rollno,s1.cgpa);
	
	
}
