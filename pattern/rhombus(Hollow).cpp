#include<stdio.h>
//
int main()
{
	int n, k;
	printf("Enter n: ");
	scanf("%d", &n);
	k = n-1;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<k; j++)
		{
			printf(" ");
		}
		for(int j=0; j<n; j++)
		{
			if(i == 0 || i == n-1)
				printf("*");
			else
				if(j == 0 || j == n-1)
					printf("*");
				else
					printf(" ");
		}
		printf("\n");
		k--;
	}
}

