#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,d,h,t;
	scanf("%d",&n);
	x=31-(__builtin_clz(n));
	d=pow(2,x);
	h=n-d;
	t=(2*h)+1;
	printf("%d",t);
	return 0;
	}
