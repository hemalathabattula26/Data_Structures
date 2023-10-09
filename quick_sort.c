/*
0 1 2 3 4 5 6 7
2 1 7 8 6 3 5 4 p
i
j

if arr[i]<arr[p]--->  swap(arr[i],arr[j])  i++ j++
false--> i++
*/
#include<stdio.h>
int swap(int *arr,int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int partition(int *arr,int l,int h)
{
	int p=h,i,j,temp;
	for(i=l,j=l;i<p;i++)
	{
		if(arr[i]<arr[p])
		{
			swap(arr,i,j);
			j++;
		}
	}
	swap(arr,j,p);
	return j;
}
void quick_sort(int *arr,int l,int h)
{
	int par;
	if(l<h)
	{
		par=partition(arr,l,h);
		quick_sort(arr,l,par-1);
		quick_sort(arr,par+1,h);
	}
	
}
int main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quick_sort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
