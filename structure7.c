#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	int age;	
};

void show(struct student);
main()
{
	struct student s1={1,21};
	//call the function
	show(s1);
		 
}

void show(struct student s)
{
	printf("ID is %d\n",s.id);
	printf("Age is %d",s.age);
}
