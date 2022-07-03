#include<stdio.h>
#include<stdlib.h>
// Linked List: Insering nodes at the beginning.
struct Node
{
	int data;
	struct Node* next;
};
struct Node* HEAD = NULL;
void Insert(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = HEAD;
	HEAD = temp;
}
void Print()
{
	struct Node* temp = HEAD;
	while(temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
}
void Delete(int n)
{
	int i;
	struct Node* prev = HEAD;
	struct Node* temp = HEAD;
	for(i=0; i<n; i++)
		temp = temp->next;
	for(i=0; i<(n-2); i++)
		prev = prev->next;
	if(n==1)
	{
		free(prev);   // or free(HEAD);
		HEAD = temp;
		return;
	}
	free(prev->next);
	prev->next = temp;
}
int main()
{
	int x, i, n;
	printf("How many no. you want to input? ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("\nEnter x: ");
		scanf("%d", &x);
		Insert(x);
		Print();
	}
	printf("\nHow many no. you want to delete? ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("\nEnter position of element you want to delete: ");
		scanf("%d", &x);
		Delete(x);
		Print();
	}
}
