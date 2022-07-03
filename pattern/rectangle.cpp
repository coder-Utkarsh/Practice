#include<stdio.h>
int main()
{
	int n, m;
	printf("Enter rows and columns: ");
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

