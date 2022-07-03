#include<stdio.h>
// to find the nth term of the series 1,3,6,10,15,21...

int main()
{
	int n, result = 0, add = 1;
	printf("Enter the term you want to find: ");
	scanf("%d",&n);
	
	if(n<1)
	{
		printf("\nError: The no. should be greater than zero!");
	}
	else
	{
		while(n)
		{
			result = result + add;
			n--;
			add++;
		}
		printf("\nthe term at nth position is %d\n",result);
	}
	
	return 0;
}
