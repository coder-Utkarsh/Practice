#include<stdio.h>
// sum of digits using recursion
int digitsum(int n, int sum);

int main()
{
	int n, s = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	s = digitsum(n, s);
	printf("sum = %d", s);
}
int digitsum(int n, int sum)
{
	int a;
	if(n == 0)
		return sum;
	a = n%10;
	sum = sum + a;
	digitsum(n/10, sum);
}
