#include<stdio.h>
#include<stdlib.h>
// linked list traversal using recursion
struct Node
{
	int data;
	struct Node* next;
};
struct Node* HEAD = NULL;
void Print(struct Node *temp)
{
	if(temp == NULL)
		return;
	printf("%d ", temp->data);
	Print(temp->next);
}
int main()
{
//	int i;                               why is it not working??
//	struct Node* box[5];
//	for(i=0; i<5; i++)
//	{
//		struct Node* box[i] = (struct Node*)malloc(sizeof(struct Node));
//	}
	struct Node* box1 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* box2 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* box3 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* box4 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* box5 = (struct Node*)malloc(sizeof(struct Node));


	HEAD = box1;
	box1->data = 1;
	box1->next = box2;

	box2->data = 2;
	box2->next = box3;

	box3->data = 3;
	box3->next = box4;

	box4->data = 4;
	box4->next = box5;

	box5->data = 5;
	box5->next = NULL;
	struct Node *temp = HEAD;
	Print(temp);
}
