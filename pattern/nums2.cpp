#include<stdio.h>
// Display row no. as a triangle.
int main()
{
	int n, k;
	printf("Enter n: ");
	scanf("%d", &n);
	k = n-1;
	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<k; j++)
		{
			printf(" ");
		}
		for(int j=0; j<i; j++)
		{
			printf("%d ", i);
		}
		printf("\n");
		k--;
	}
}
