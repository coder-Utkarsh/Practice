#include<stdio.h>
// hollow rectangle
int main()
{
	int n, m;
	printf("Enter rows and col: ");
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(i==0 || j==0 || i==(n-1) || j==(m-1))
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}
}

