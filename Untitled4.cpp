#include<stdio.h>
struct point {
	int x;
	int y;
};

void modify(struct point p)
{
	p.x=10;
	p.y=20;
}
int main()
{
	struct point p1;
	p1.x=4;
	p1.y=5;
	printf("Before modification:%d %d",p1.x,p1.y);
	modify(p1);
	printf("\nAfter modification:%d %d",p1.x,p1.y);
	
}
