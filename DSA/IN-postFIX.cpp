#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
#include<ctype.h>
#define MAX 19
// infix -> Postfix
char stack[MAX];
int TOP = -1;
void Print()
{
	int t = TOP;
	while(t != -1)
		printf("\nstack: %c", stack[t--]);
}
void Push(char value)
{
	if(TOP == (MAX-1))
	{
		printf("\nOverflow");
		return;
	}
	else
		stack[++TOP] = value;
}
char Pop()
{
	if(TOP == -1)
	{
		printf("\nUnderflow");
		return(0);
	}
	else
		return stack[TOP--];
}
int precedence(char sign)
{
	if(sign == '^')
		return(3);
	else if(sign == '*' || sign == '/')
		return(2);
	else if(sign == '+' || sign == '-')
		return(1);
	else
		return(0);
}
void conversion(char infix[])
{
	int i = 0, j = 0, sign = 0, k;
	char p, postfix[MAX];
	
	while(infix[i] != '\0')
	{
		//printf("\ni = %d", i);
		char item = infix[i];
		//printf("\nss %c", item);
		
		if(isdigit(item) || isalpha(item))
		{
			//printf("\nlol2");
			postfix[j] = item;
			j++;
			//printf("\n%c", postfix[j]);
			i++;
			continue;
		}

		if(item == '(')
			Push(item);
		if(item == ')')
		{
			p = Pop();
			while(p != '(')
			{
				postfix[j] = p;
				j++;
				i++;
				//printf("\n3pop = %c", p);
				p = Pop();
			}
			continue;
			//Pop();
			printf("\na ");
			Print();
		}
		
		if(precedence(item)>0)
		{
			if(item == '/')
				printf("\nye");
			//Print();
			if(sign>0)
			{
				p = Pop();
				//printf("\npop = %c", p);
				
				while(precedence(p) >= precedence(item))
				{
					postfix[j] = p;
					j++;
					p = Pop();
					//printf("\npop2 = %c", p);
				}
				
				if(precedence(p) < precedence(item))
					Push(p);
					
				Push(item);
			}
			else
			{
				//printf("\nTask");
				Push(item);
				sign++;
			}
		}
		
		i++;
	}
	
	while(TOP != -1)
	{
		p = Pop();
		postfix[j] = p;
		j++;
	}
	postfix[j] = '\0';
	printf("\nThe postfix string is: ");
	puts(postfix);
}
int main()
{
	char infix[MAX];
	printf("Enter the infix expression: ");
	gets(infix);
	conversion(infix);
}
