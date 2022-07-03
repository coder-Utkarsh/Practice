#include<stdio.h>
// Print a hollow diamond inscribed in a rectangle.
int main()
{
	int n, j, l = 1;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		for(j=0; j<(n-i); j++)
		{
			printf("*");
		}
		for(j=0; j<l; j++)
		{
			if(j==0 || j==l-1)
				printf("*");
			else
				printf(" ");
		}
		for(j=0; j<(n-i); j++)
		{
			printf("*");
		}
		printf("\n");
		l += 2;
	}
	for(int i=0; i<n; i++)
	{
		l -= 2;
		for(j=0; j<i; j++)
		{
			printf("*");
		}
		for(j=0; j<l; j++)
		{
			if(j==0 || j==l-1)
				printf("*");
			else
				printf(" ");
		}
		for(j=0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
