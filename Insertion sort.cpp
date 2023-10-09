/*INSERTION SORT 
n=8

10 100 50 1 15 20 35 60
0  1   2  3 4  5  6  7

1 10 15 20 35 50 60 100

i=1...7
j=i-1

temp=arr[i]-->
if arr[j]<temp-->   a[j+1]=temp break
false-->copy arr[j+1]=arr[j]  j--

j==-1--: arr[0]=temp
*/
#include<stdio.h>
void insertion_sort(int *arr,int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if (arr[j]<temp)
			{
				arr[j+1]=temp;
				break;
		    }
			else
			{
			    arr[j+1]=arr[j];
			}
	    }
		if(j==-1)
		{
		    arr[0]=temp;
		}		
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
