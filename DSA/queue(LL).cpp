#include<stdio.h>
#include<stdlib.h>
// Linked list implementation of queue
struct Node
{
	int data;
	struct Node* next;
};
struct Node* HEAD = NULL;
void Print()
{
	struct Node* temp;
	printf("Queue: ");
	temp = HEAD;
	while(temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
}
void Enqueue(int value)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = value;
	if(HEAD == NULL)
	{
		HEAD = temp;
		temp->next = NULL;
	}
	else
	{
		struct Node* temp1;
		temp1 = HEAD;
		while(temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
		temp->next = NULL;
	}
}
void Dequeue()
{
	if(HEAD == NULL)
	{
		printf("\nEmpty queue");
		return;
	}
	struct Node* temp;
	temp = HEAD;
	HEAD = HEAD->next;
	free(temp);
}
int main()
{
	int i, x;
	for(i=0; i<5; i++)
	{
		printf("\nEnter x: ");
		scanf("%d", &x);
		Enqueue(x);
		Print();
	}
	Dequeue();
	Dequeue();
	Dequeue();
	printf("\nAfter 3 deque: \n");
	Print();
}
