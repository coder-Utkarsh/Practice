#include<stdio.h>
// Butterfly pattern
int main()
{
	int n, p=0, q, i, j, flag = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	q=(2*n)-1;
	for(i=0; i<2*n; i++)
	{
		for(j=0; j<2*n; j++)
		{
			if(j<=p || j>=q)
				printf("*");
			else
				printf(" ");
		}
		if(flag == 0 && p < n-1)
		{
			p++;
			q--;
		}
		else if(flag == 0 && p == n-1)
			flag = 1;
		else
		{
			p--;
			q++;
		}
		printf("\n");
	}
}
