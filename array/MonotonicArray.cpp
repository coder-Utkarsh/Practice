#include<stdio.h>
#include<stdlib.h>
// to find whether the given array is monotonic
int main()
{
	int i = 0, j, size = 0, count = 1, array[7];
	printf("Enter the elements(max7): ");
	do
	{
		scanf("%d", &array[i]);
		i++;
	}while(getchar() != '\n');
	
	size = i-1;
	if(array[0] >= array[1])
		j=0;
	if(j==0)
	{
		for(i=1; i<size; i++)
		{
			if(array[i] >= array[i+1])
				count++;
			else
				break;
		}
			printf("\ncount = %d size = %d", count,size);
		if(count == size)
		{
			printf("\nIt's monotonically decreasing");
			exit(0);
		}
	}
	for(i=0; i<size; i++)
	{
		if(array[i] <= array[i+1])
			count++;
		else
			break;	
	}
	if(count >= size)
		printf("\nIt's monotonically increasing");
	else	
		printf("\nIt's not a monotonic array");
}
