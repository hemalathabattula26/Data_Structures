#include<stdio.h>
 struct student
{
	char name[20];
	char roll[20];
		int age;
};
int main()
{
	int n,i;
	printf("How many students??");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++){
		printf("Enter the student%d details: \n",i+1);
		printf("Name:");
	scanf("%s",s[i].name);
	printf("Roll:");
	scanf("%s",&s[i].roll);
	printf("Age:");
	scanf("%d",&s[i].age);
}
for(i=0;i<n;i++)
{
	printf("%s\n%s\n%d\n",s[i].name,s[i].roll,s[i].age);
}
}

