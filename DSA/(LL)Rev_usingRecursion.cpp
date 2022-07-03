#include<stdio.h>
#include<stdlib.h>
// reverse a linked list using recursion..
struct node
{
	int data;
	struct node* next;
};
struct node* HEAD = NULL;
void Insert(int *x)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = *x;
	temp->next = NULL;
	if(HEAD == NULL)
	{
		HEAD = temp;
		return;
	}

	struct node* temp1 = HEAD;
	while(temp1->next != NULL)
		temp1 = temp1->next;
	temp1->next = temp;
}
void Delete()
{
	struct node* temp = HEAD;
	struct node* temp1 = HEAD;
	while(temp->next != NULL)
		temp = temp->next;
	while(temp1->next != temp)
		temp1 = temp1->next;
	temp1->next = NULL;
	free(temp);
}
void Print()
{
	struct node* temp = HEAD;
	printf("List: ");
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
void Reverse(struct node* temp, struct node* temp1)
{
	if(temp1->next == NULL)
	{
		temp1->next = temp;
		return;
	}
	if(HEAD == temp)
		temp->next = NULL;
	HEAD = temp1->next;
	temp1->next = temp;
	Reverse(temp1, HEAD);
}
int main()
{
	int i, x;
	for(i=0; i<5; i++)
	{
		printf("\nEnter x: ");
		scanf("%d", &x);
		Insert(&x);
		Print();
	}
	struct node* temp = HEAD;
	struct node* temp1 = HEAD->next;
	Reverse(temp, temp1);
	printf("\nReverse ");
	Print();
}
