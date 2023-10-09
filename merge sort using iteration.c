#include<stdio.h>
void merge(int *arr,int l,int h,int m)
{
	int res[h-l+1],i=l,j=m+1,k=0;
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
	for(i=l;i<=h;i++)
	{
		arr[i]=res[k++];
	}
}
void merge_sort(int *arr,int n)
{
	int i,m,p,h,l;
	for(p=2;p<=n;p=p*2)
	{
		for(i=0;i+p<=n;i=i+p)
		{
			l=i;
			h=p+i-1;
			m=(l+h)/2;
			merge(arr,l,h,m);
		}
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
