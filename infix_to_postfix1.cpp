#include<stdio.h>
#include<string.h>
int pred(char ch)
{
	switch(ch)
	{
		case'^':
			return 3;
		case'*':
		case'/':
			return 2;
		case'+':
		case'-':
			return 1;
		case'(':
			return -1;
		case')':
			return -2;
		default:
			return 0;
	}
}
char * infix_postfix(char *infix)
{
	int i,n,top=-1,j=0,op;
	n=strlen(infix);
	char st[n];
	static char postfix[100];
	for(i=0;i<n;i++)
	{
		if(pred(infix[i]))
		{
			//operator
			if(top==-1)
			{
				st[++top]=infix[i];
			}
			else if(pred(infix[i])>pred(st[top])&&pred(infix[i])!=-2&&pred(infix[i])!=-1)
			{
				st[++top]=infix[i];
			}
			else if(pred(infix[i])==-1)
			{
				st[++top]=infix[i];
			}
			else if(pred(infix[i])==-2)
			{
				while(pred(st[top])!=-1)
				{
					op=st[top--];
					postfix[j++]=op;
				}
				st[top--];
			}
			else
				{
					while(top!=-1&&pred(infix[i])<=pred(st[top]))
					{
						op=st[top--];
						postfix[j++]=op;				
					}
					st[++top]=infix[i];
				}
		}
		else
		{
			//operand
			postfix[j++]=infix[i];
		}
	}
	for(i=top;i>=0;i--)
	{
		postfix[j++]=st[i];
	}
	printf("%s",postfix);
}
int main()
{
	char infix[100],*postfix;
	scanf("%[^\n]s",&infix);
	postfix=infix_postfix(infix);
	printf("%s",postfix);
	return 0;
}
