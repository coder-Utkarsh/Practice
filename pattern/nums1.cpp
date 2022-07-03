#include<stdio.h>
// Decreasing no. of columns as row no. increases
int main()
{
	int n, k;
	printf("Enter n: ");
	scanf("%d", &n);
	k=n+1;
	for(int i=0; i<n;i++)
	{
		for(int j=1; j<k; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
		k--;
	}
}
