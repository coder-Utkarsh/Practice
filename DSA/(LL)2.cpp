#include<stdio.h>
#include<stdlib.h>
// linked list: Inserting node at end.
struct Node
{
	int data;
	struct Node* next;
};
struct Node* HEAD = NULL;
void Print()
{
	struct Node* temp = HEAD;
	while(temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
}
void Insert(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	if(HEAD == NULL)
	{
		HEAD = temp;
		return;
	}
	struct Node* temp1 = HEAD;
	while(temp1->next != NULL)
	{
		temp1 = temp1->next;
	}
	temp1->next = temp;
}
int main()
{
	int x, n, i;
	printf("How many values? ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("\nEnter x: ");
		scanf("%d", &x);
		Insert(x);
		Print();
	}
}
