#include<stdio.h>
 struct student
{
	char name[20];
	int x;
	int y;
	int z;
    int age;
    char g;
    int t;
    int p;
};
int main()
{
	int n,i;
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++){
		scanf("%d",&s[i].x);
	    scanf("%d",&s[i].y);
	scanf("%d",&s[i].z);
	scanf("%s",s[i].name);
	scanf("%d",&s[i].age);
	s[i].t=(s[i].x+s[i].y+s[i].z);
	s[i].p=s[i].t/3;
	if(s[i].p>=90)
	{
		s[i].g='o';
	}
	else if(s[i].p>=80&&s[i].p<90)
	{
		s[i].g='a';
	}
	else if(s[i].p>=70&&s[i].p<80)
	{
		s[i].g='b';
	}
	else if(s[i].p>=60&&s[i].p<70)
	{
		s[i].g='c';
	}
	else
	{
		s[i].g='d';
	}
	
}
for(i=0;i<n;i++)
{
	printf("%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",s[i].name,s[i].x,s[i].y,s[i].z,s[i].age,s[i].t,s[i].p);
	if(s[i].g=='a')
	{
	printf("%s/n",s[i].name);
	}
}
}

