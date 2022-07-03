#include<stdio.h>
// Given n, draw a hollow diamond pattern of 2n rows.
int main()
{
	int n, j, l;
	printf("Enter n: ");
	scanf("%d", &n);
	l = n-1;
	for(int i=1; i<=n; i++)
	{
		for(j=0; j<l; j++)
			printf(" ");
			
		for(j=0; j<(2*i-1); j++)
		{
			if(j == 0 || j == (2*i-2))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		l--;
	}
	l = 0;
	for(int i=n; i>0; i--)
	{
		for(j=l; j>0; j--)
			printf(" ");

		for(j=0; j<(2*i-1); j++)
		{
			if(j == 0 || j == (2*i-2))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		l++;
	}
}
