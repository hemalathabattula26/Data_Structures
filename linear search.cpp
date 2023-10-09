/*#include<stdio.h>
int search(int *arr,int size,int se)
{
int i;
for(i=0;i<size;i++)
{
	if(arr[i]==se)
	{
		return i+1;
	}
}
return -1;
}
int main()
{
	int n,i,se,res;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	res=search(a,n,se);
	printf("%d",res);
}*/
#include<stdio.h>
int linearsearch_rec(int *arr,int n,int i,int se)
{
	if(i==n)
	{
		return -1;
	}
	if(arr[i]==se)
	{
		return i+1;
	}
	linearsearch_rec(arr,n,i+1,se);
}
int main()
{
	int n,arr[100],i,se,res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	res=linearsearch_rec(arr,n,0,se);
	printf("%d",res);
}
