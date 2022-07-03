#include<stdio.h>
// Palindromic pattern
int main()
{
	int n, j, k;
	printf("Enter n: ");
	scanf("%d", &n);
	k = n-1;
	for(int i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			printf(" ");
		}
		for(j=(n-k); j>0; j--)
		{
			printf("%d", j);
		}
		for(j=2; j<=(n-k); j++)
		{
			printf("%d", j);
		}
		printf("\n");
		k--;
	}
}

