#include<stdio.h>
// return even and odd no. between a range.
void odd(int fn, int ln);
void even(int fn, int ln);

int main()
{
	int fstnum, lstnum;
	printf("enter first and last nums: ");
	scanf("%d%d", &fstnum, &lstnum);
	printf("Odd nums: ");
	odd(fstnum, lstnum);
	printf("\nEven nums: ");
	even(fstnum, lstnum);
}
void odd(int fn, int ln)
{
	if(fn > ln)
		return;
	if(fn % 2 == 0)
	{
		printf("%d ", (fn + 1) );
		odd( (fn + 2), ln);
	}
	else
	{
		printf("%d ", fn);
		odd( (fn + 2), ln);
	}
}
void even(int fn, int ln)
{
	if(fn > ln)
		return;
	if(fn % 2 == 0)
	{
		printf("%d ", fn);
		even( (fn + 2), ln);
	}
	else
	{
		printf("%d ", (fn + 1));
		even( (fn + 2), ln);
	}
}
