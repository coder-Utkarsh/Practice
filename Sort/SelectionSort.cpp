#include<stdio.h>
// Selection Sort
int main()
{
	int i = 0, j, count, min, array[8];
	printf("Enter the elements: ");
	do{
		scanf("%d", &array[i]);
		i++;
	}while(getchar() != '\n');
	count = i;
	// sort
	for(i=0; i<(count-1); i++)
	{
		min = i;
		for(j=(i+1); j<count; j++)
		{
			if(array[j] < array[min])
				min = j;
		}
		int temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
	printf("\nSorted Array: ");
	for(i=0; i<count; i++)
	{
		printf("%d ", array[i]);
	}
}
