#include<stdio.h>
#include<math.h>
int main()
{
	int n,x=1,d,h,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(pow(2,i)<n)
		{
			x=pow(2,i);
		}
	}
	d=n-x;
	h=(2*d)+1;
	printf("%d",h);
}
