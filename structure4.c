#include<stdio.h>
#include<string.h>

main()
{
	struct student
	{
	char name[20];
	int rollno;
	float cgpa;
    }s1={"Rohit",45,9.5};
    struct student s2={"ASDFGH",100,10.0};
    
    
	printf("Name =%s \nRoll Number =%d \nCGPA = %f \n",s1.name,s1.rollno,s1.cgpa);
	printf("Name =%s \nRoll Number =%d \nCGPA = %f \n",s2.name,s2.rollno,s2.cgpa);
}
