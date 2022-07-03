#include<stdio.h>
// factorial using recusion
int factorial(int n, int fact);

int main()
{
	int n, fact = 1;
	printf("Enter n: ");
	scanf("%d", &n);
	fact = factorial(n, fact);
	printf("factorial of %d is %d", n, fact);
}
int factorial(int n, int fact)
{
	if(n == 0)
		return(1);
	if(n == 1)
		return fact;
	fact = fact * n;
	factorial(n-1, fact);
}
