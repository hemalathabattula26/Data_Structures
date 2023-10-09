/*
#include<stdio.h>
void selection_sort(int *arr,int n)
{
	int i,p,max,maxind,temp;
	for(p=0;p<n-1;p++)
	{
		max=arr[0];
		maxind=0;
		for(i=0;i<n-p;i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
				maxind=i;
			}
		}
		temp=arr[maxind];
		arr[maxind]=arr[n-p-1];
		arr[n-p-1]=temp;
	}	
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
*/
#include<stdio.h>
void selection_sort_rec(int *arr,int p,int n)
{
	if(p==n)
	{
		return;
	}
	int max=arr[0],i,temp;
	int maxind=0;
	for(i=0;i<n-p;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			maxind=i;
		}
	}
	temp=arr[maxind];
	arr[maxind]=arr[n-p-1];
	arr[n-p-1]=temp;
	selection_sort_rec(arr,p+1,n);
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection_sort_rec(a,0,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
