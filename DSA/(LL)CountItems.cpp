#include<stdio.h>
#include<stdlib.h>
// Count of no. of times an item is found in the list
struct node{
	int data;
	struct node* next;
};
struct node* Head = NULL;
void Insert(int value)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = value;
	temp->next = NULL;
	if(Head == NULL)
	{
		Head = temp;
		return;
	}
	struct node* temp1 = Head;
	while(temp1->next != NULL)
		temp1 = temp1->next;
	temp1->next = temp;
}
void Count(int x)
{
	int count;
	struct node* temp = Head;
	while(temp != NULL)
	{
		if(temp->data == x)
			count++;
		temp = temp->next;
	}
	if(count == 0)
		printf("%d was not ther in the list", x);
	else
		printf("%d occured %d times in the list", x, count);
}
void Print()
{
	struct node* temp = Head;
	printf("List:");
	while(temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
}
int main()
{
	int i, x, n;
	printf("Enter the no. of items to be inserted: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("\nEnter the no. to be inserted: ");
		scanf("%d", &x);
		Insert(x);
		Print();
	}
	printf("\nEnter the no. you want to find in the list: ");
	scanf("%d", &x);
	Count(x);
}
