#include<stdio.h>
// Hollow triangle pattern
int main()
{
	int i, j, n;
	printf("Enter n: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
		{
			if(j == 0 || j == i || i == (n-1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
