#include<stdio.h>
int st[100],size,top=-1;
void push(int val)
{
	if(top==size-1)
	{
		printf("Stack is flow/overflow\n");
	}
	else
	{
		top++;
		st[top]=val;
	}
}
void pop()
{
	int val;
	if(top==-1)
	{
		return top;
	}
	else
	{
		val=st[top];
		st[top--]=0;
		return val;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d \n",st[i]);
		}
	}
}
int main()
{
	int val,ch;
	scanf("%d",&size);
	while(1)
	{
		printf("1.push 2.pop 3.display 4.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&val);
			push(val);
		}
		else if(ch==2)
		{
			if(top==-1)
			
			{
				printf("Stack is Empty/underflow\n");
			}
		}
		else if(ch==3)
		{
			display();
		}
		else
		{
			
		}
	}
}
