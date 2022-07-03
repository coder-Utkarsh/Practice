#include<stdio.h>
#include<stdlib.h>
// Linked List: Inserting a node at 'n'th position.
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
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
void Insert(int x, int n)
{
	int i;
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	if(HEAD == NULL)
	{
		HEAD = temp;
		return;
	}
	if(n == 1)
	{
		temp->next = HEAD;
		HEAD = temp;
		return;
	}
	struct Node* temp1 = HEAD;
	for(i=0; i<(n-2); i++)
	{
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;
}
int main()
{
	int x, n;
	while(1)
	{
		printf("\nEnter the position of element(press 0 to exit): ");
		scanf("%d", &n);
		if(n == 0)
			break;
		printf("Enter the value of element: ");
		scanf("%d", &x);
		Insert(x, n);
		Print();
	}
}
