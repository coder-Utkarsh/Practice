#include<stdio.h>
#include<stdlib.h>
// stack using linked lists
struct Node
{
	int data;
	struct Node *next;
};
struct Node* HEAD = NULL;
void Print()
{
	struct Node* temp;
	temp = HEAD;
	printf("\nStack:");
	while(temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
}
void Push(int value)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	//struct Node* temp1;
	//if(HEAD == NULL)

		temp->data = value;
		temp->next = HEAD;
		HEAD = temp;

//	else
//	{
//		temp->data = value;
//		temp->next = NULL;
//		temp1 = HEAD;
//		while(temp1->next != NULL)
//		{
//			temp1 = temp1->next;
//		}
//		temp1->next = temp;
//	}
}
void Pop()
{
	if(HEAD == NULL)
		return;
	struct Node* temp;
	temp = HEAD;
//	while(temp->next != NULL)
//	{
//		temp = temp->next;
//	}
	HEAD = HEAD->next;
	printf("\npop = %d", temp->data);
	free(temp);
}
int main()
{
	int i, x;
	for(i=0; i<5; i++)
	{
		printf("\nEnter x: ");
		scanf("%d", &x);
		Push(x);
		Print();
	}
	Pop();
	Print();
	Pop();
	Print();
}

