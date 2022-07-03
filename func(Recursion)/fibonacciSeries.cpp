#include<stdio.h>
// fibbonaci series using recursion: 0 1 1 2 3 5 8 13 21 34 55 89
void recursion(int num, int a, int b);

int main()
{
	int a = 0, b = 1, n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("0 1 ");
	recursion(n, a, b);
}
void recursion(int num, int a, int b)
{
	if(num == 2)
		return;

	printf("%d ", a+b);
	recursion(num-1, b, a+b);
}
