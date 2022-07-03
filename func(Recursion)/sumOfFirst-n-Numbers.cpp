#include<stdio.h>
// calculating sum of first n no. using recursion
int add(int n,int a, int sum);
int main()
{
	int n, a = 1, sum = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	sum = add(n, a, sum);
	printf("\nsum = %d", sum);
}
int add(int n, int a, int sum)
{	
	if(a > n)
		return sum;
		
	sum = sum + a;
	add(n, a+1, sum);
}
