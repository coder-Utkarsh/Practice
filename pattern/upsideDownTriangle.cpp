// upside-down triangle
#include<stdio.h>
int main()
{
	int i, j, k, rows;
	printf("Enter the no. of rows: ");
	scanf("%d", &rows);
	for(i=rows; i>0; i--)
	{
 		for(k=0; k<= (rows-i) ; k++)
		{
			printf(" ");
		}
		for(j= ( (2*i)-1 ) ; j>0 ; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
