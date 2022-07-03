#include<stdio.h>
// floyd's triangle
int main()
{
	int i, j, rows, num = 1;
	printf("rows: ");
	scanf("%d", &rows);
	for(i=1; i<=rows; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}
	return 0;
}
