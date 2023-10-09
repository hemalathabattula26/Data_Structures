/*
arr=8
l      m        h
res
1 2 3 5 6 10 11 24
0 1 2 3 4 5  6  7

arr[i]>arr[j]---->  res[k]=arr[j]  j++ k++
false---> res[k]=arr[i]  i++  k++


*/
#include<stdio.h>
int merge_sort(int*arr,int l,int h)
{
	int m,res[h-l+1],i,j,k=0;
	m=(h+l)/2;
	i=l;
	j=m+1;
	while(i<=m && j<=h)
	{
		if(arr[i]>arr[j])
		{
			res[k++]=arr[j++];
		}
		else
		{
			res[k++]=arr[i++];
		}
	}
	while(i<=m)
	{
		res[k++]=arr[i++];
	}
	while(j<=h)
	{
		res[k++]=arr[j++];
	}
	k=0;
	for(i=l,k=0;i<=h;i++,k++)
	{
		arr[i]=res[k];
	}
}
int main()
{
	int arr[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
