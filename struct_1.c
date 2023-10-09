#include<stdio.h>
typedef struct student
{
	char roll[100];
	char name[100];
	int age;
	float cgpa;
}hem;
int main()
{
	hem s;
	hem *s_ptr;
	s_ptr=&s;
	scanf("%s%s%d%f",s.roll,s.name,&s.age,&s.cgpa);
	printf("%s %s %d %.2f",s_ptr -> roll,s_ptr -> name,s_ptr -> age,s_ptr -> cgpa);
}
