#include<stdio.h>
#include<math.h>
int oper(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case '^':
			return 1;
		default:
			return 0;
	}
}
int operation(int op1,int op2,char op)
{
	switch(op)
	{
		case '+':
			return op2+op1;
		case '-':
			return op2-op1;
		case '*':
			return op2*op1;
		case '/':
			return op2/op1;
		case '%':
			return op2%op1;
		case '^':
			return pow(op2,op1);
	}
}
int post_evaluation(char *post)
{
	int i,val=0,st[100],top=-1,op1,op2,res;
	for(i=0;post[i]!='\0';i++)
	{
		if(oper(post[i]))
		{
			op1=st[top--];
			op2=st[top--];
			res=operation(op1,op2,post[i]);
			st[++top]=res;
		}
		else
		{
			if(post[i]>=48 && post[i]<=57)
			{
				val=val*10+post[i]-'0';
			}
			else if(post[i]==' ' && val!=0)
			{
				st[++top]=val;
				val=0;
			}
		}
	}
	return st[0];
}
int main()
{
	char post[100];
	int res;
	scanf("%[^\n]s",post);
	res=post_evaluation(post);
	printf("%d",res);
}
