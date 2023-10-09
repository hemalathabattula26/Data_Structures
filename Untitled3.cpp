#include<stdio.h>
typedef struct student
{
	char name[20];
	int age;
	float cgpa;
	char roll[100];
}ntk;
int main()
{
	ntk s1={"Hema",18,9.8,"22A91A05A6"};
	printf("%s %d %.2f %s",s1.name,s1.age,s1.cgpa,s1.roll); 
}
