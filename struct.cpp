#include<stdio.h>
void fun(int n)
{
	if(n==0)
	{
		return;
	}
	fun(n-1);
	printf("%d",n);
}
int main()
{
	int n=5;
	fun(n);
}

