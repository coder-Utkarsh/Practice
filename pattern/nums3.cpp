#include<stdio.h>
int main()
{
	int n, k;
	printf("Enter n: ");
	scanf("%d", &n);
	k = n-1;
	int num = 1;
	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<k; j++)
		{
			printf(" ");
		}
		for(int j=0; j<i; j++)
		{
			printf("%d ", num);
			num++;
		}
		printf("\n");
		k--;
		num = 1;
	}
}
