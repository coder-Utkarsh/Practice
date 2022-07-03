#include<stdio.h>
int STACK[10], top = -1;     // Global variables

void push(int value)            // PUSH function
{
	if(top == 9)
	{
		printf("Overflow\n");
	}
	else
	{
		top++;
		STACK[top]  = value;
	}
}

int pop()                       // POP function
{
	if(top == -1)
	{
		printf("Underflow");
	}
	else
	{
		return STACK[top--];
	}
}
int main()
{
	int i, j, value;
	char ch;
	printf("How many values you want to insert(max=10): ");
	scanf("%d", &j);
	for(i=0; i<j; i++)
	{	
		printf("Enter the value(s) for insertion: ");
		scanf("%d", &value);
		push(value);
	}
	
	printf("\nDo you want to delete an element(y/n): ");
	getchar();
	scanf("%c", &ch);
	if(ch == 'y')
	{	
		pop();
	}

	for(i=0; i<(top+1); i++)
	{
		printf("STACK[%d] = %d\n", i, STACK[i]);
	}
	return 0;
}
