#include<stdio.h>
#include<stdlib.h>
// Addition of Polynomials using LL
struct node{
	int coeff;
	int exp;
	struct node* next;
};
//struct node* Head = NULL;
void Insert(int val1, int val2, struct node** t)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->coeff = val1;
	temp->exp = val2;
	temp->next = NULL;
	if(*t == NULL)
	{
		*t = temp;
		return;
	}
	struct node* temp1 = *t;
	while(temp1->next != NULL)
		temp1 = temp1->next;
	temp1->next = temp;
}
void Print(struct node** t)
{
	struct node* temp;
	temp = *t;
	while(temp != NULL)
	{
		printf("%dx^%d", temp->coeff, temp->exp);
		temp = temp->next;
		if(temp != NULL)
			printf(" + ");
	}
}
void Result(struct node **t1, struct node** t2)
{
//	struct node* sol = (struct node*)malloc(sizeof(struct node));
	int x, y;
	struct node* s = NULL;
	struct node* temp1 = *t1;
	struct node* temp2 = *t2;
	while(temp1!= NULL && temp2!=NULL)
	{
		if(temp1 == NULL)
		{
			printf("\n3LOL");
			temp1->exp = -1;
		}
		if(temp2 == NULL)
		{
			printf("\n4LOL");
			temp2->exp = -1;
		}
		if(temp1->exp == temp2->exp)
		{
			x/*sol->coeff*/ = temp1->coeff + temp2->coeff;
			y/*sol->exp*/ = temp1->exp;
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else if(temp1->exp > temp2->exp)
		{
			x = temp1->coeff;
			y = temp1->exp;
			temp1 = temp1->next;
			printf("\nLOL");
		}
		else
		{
			x = temp2->coeff;
			y = temp2->exp;
			temp2 = temp2->next;
			printf("\nLOL2");
		}
		Insert(x, y, &s);
	}
//	printf("\nLOL");
//	while(temp != NULL)
//	{
//		struct node* p = *t2;
//		while(temp->exp != p->exp)
//		{
////			sol->coeff = p->coeff;
////			sol->exp = p->exp;
//			p = p->next;
//			if(p == NULL)
//				break;
//		}
//		if(temp->exp == p->exp)
//		{
//			sol->coeff = (temp->coeff + p->coeff);
//			sol->exp = temp->exp;
//		}
//		else
//		{
//			sol->coeff = temp->coeff;
//			sol->exp = temp->exp;
//		}
//		temp = temp->next;
//		if(temp != NULL)
//		{
//			sol->next = (struct node*)malloc(sizeof(struct node));
//			sol = sol->next;
//			sol->next = NULL;
//		}
//	}
	Print(&s);
	while(0)//s != NULL)
	{
		printf("%dx^%d", s->coeff, s->exp);
		s = s->next;
		if(s->next != NULL)
			printf(" + ");
	}
}
int main()
{
	struct node* t1 = NULL;
	struct node* t2 = NULL;
	Insert(23, 4, &t1);
	Insert(2, 3, &t1);
	Insert(1, 2, &t1);
	Insert(16, 7, &t2);
	Insert(4, 6, &t2);
	Insert(4, 5, &t2);
	printf("\nFirst expression: ");
	Print(&t1);
	printf("\nSecond expression: ");
	Print(&t2);
	printf("\nAdded expression: ");
	Result(&t1, &t2);
}
