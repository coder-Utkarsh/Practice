#include<stdio.h>
int main()
{
	int row, col, n;
	printf("Enter n: ");
	scanf("%d", &n);
	for(row=1; row<4; row++)
	{
		for(col=1; col<=n; col++)
		{
			if( ( (row+col)%4==0 ) || (row == 2 && col%4 == 0))
				printf(" *");
			else
				printf("  ");
		}
			printf("\n");
	}
}
