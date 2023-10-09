/*
#include<stdio.h>
int binarysearch(int *arr,int size,int se);
int main()
{
	int n,i,se,res;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	res=binarysearch(a,n,se);
	printf("%d",res);
}
int binarysearch(int *arr,int size,int se)
{
	int i,l=0,h=size-1,mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(arr[mid]==se)
		{
			return mid;
		}
		else if(arr[mid]>se)
		{
			h=mid-1;
		}
		else if(arr[mid]<se){
			l=mid+1;
		}
	}
	return -1;	
}
*/
#include<stdio.h>
int binary_search_rec(int *arr,int l,int h,int se)
{
	if(l>h)
	{
		return -1;
	}
	int m;
	while(l<=h){
	m=(l+h)/2;
	
	if(arr[m]==se)
	{
		return m;
	}
	else if(arr[m]>se)
	{
		h=m-1;
	}
	else if(arr[m]<se)
	{
		l=m+1;
	}
}
}
int main()
{
	int n,i,se,l,m,h,res;
	scanf("%d",&n);
	l=0;
	h=n-1;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[n]);
	}
	scanf("%d",&se);
	res=binary_search_rec(a,l,h,se);
	printf("%d",res);
} 
