#include<stdio.h>
// Print a hollow butterfly pattern.
int main()
{
	int n, j, k;
	printf("Enter n: ");
	scanf("%d", &n);
	k = 2*n-2;
	for(int i=1; i<=n; i++)
	{
		for(j=0; j<i; j++)
		{
			if(j == 0 || j == i-1)
				printf("*");
			else
				printf(" ");
		}
		for(j=0; j<k; j++)
		{
			printf(" ");
		}
		for(j=0; j<i; j++)
		{
			if(j == 0 || j == i-1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		k -= 2;
	}
	k = 0;
	for(int i=n; i>0; i--)
	{
		for(j=0; j<i; j++)
		{
			if(j == 0 || j == i-1)
				printf("*");
			else
				printf(" ");
		}
		for(j=0; j<k; j++)
		{
			printf(" ");
		}
		for(j=0; j<i; j++)
		{
			if(j == 0 || j == i-1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		k += 2;
	}
}
