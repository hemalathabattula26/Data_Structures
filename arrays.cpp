#include<stdio.h>
void printarray(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
void printarray(int *arr,int n);
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printarray(arr,n);
}
