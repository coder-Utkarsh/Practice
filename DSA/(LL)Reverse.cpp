#include<stdio.h>
#include<stdlib.h>
// reverse a linked list..
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
int main()
{
	int i, x;
	for(i=0; i<5; i++)         // Error: This code doesn't works in the case of only 1 node.
	{
		printf("\nEnter x: ");
		scanf("%d", &x);
		Insert(&x);
		Print();
	}
	printf("\n");
	i=0;
	struct node* temp1 = HEAD;
	struct node* temp = HEAD;
	while(temp1 != NULL)               // code for reversing
	{
		if(i==0)
			temp = temp->next;
		else
			temp = temp1;
		temp1 = temp->next;
		temp->next = HEAD;
		if(i==0)
		{
			temp->next->next = NULL;
			i = 1;
		}
		HEAD = temp;
	}
//	while(temp1->next != NULL)          code for reversing(first attempt)
//	{
//		temp = temp->next;
//		temp1 = temp->next;
//		temp->next = HEAD;
//		HEAD = temp;
//		if(i == 0)
//		{
//			temp = temp->next;
//			temp->next= NULL;
//		}
//		i++;
//	}
	printf("\nAfter Reversing- ");
	Print();
}

