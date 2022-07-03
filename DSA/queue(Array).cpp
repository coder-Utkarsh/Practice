#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front = 0, rear = 0;
// Queue implementation
void Enqueue(int *x, int queue[]);
void Dequeue(int queue[]);
void Print(int queue[]);
int main()
{
	int i, x, queue[MAX], num=1;
	while(num != 0)
	{
	printf("enter 1 for enqueue, 2 for dequeue, 3 for print and 0 for exit: ");
	scanf("%d", &num);
	switch(num)
	{
		case(1):
			{
				printf("Enter x: ");
				scanf("%d", &x);
				Enqueue(&x, queue);
				break;
			}
			
		case 2:
			{
				Dequeue(queue);
				break;
			}
			
		case 3:
			{
				Print(queue);
				break;
			}

		default:
			num = 0;
	}
	}
}
void Enqueue(int *x, int queue[])
{
	if(rear == MAX)
	{
		printf("Queue is full");
		return;
	}
	queue[rear] = *x;
	rear++;
}
void Dequeue(int queue[])
{
	int i;
	if(rear == 0)
	{
		printf("Empty Queue");
		return;
	}
	for(i=0; i<(rear-1); i++)
	{
		queue[i] = queue[i+1];
	}
	rear--;
}
void Print(int queue[])
{
	int i;
	for(i=0; i<rear; i++)
	{
		printf("queue = %d\n", queue[i]);
	}
}
