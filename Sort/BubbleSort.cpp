#include<stdio.h>
// Bubble sort
int main()
{
	int i = 0, flag = 0, k, j, count, array[7];
	printf("Enter the elements: ");
	do
	{
		scanf("%d", &array[i]);
		i++;
	}while(getchar() != '\n');
	count = i;
	// sorting
	j = count-1;
	while(flag != 1)
	{
		k = 0;
		for(i=0; i<j; i++)
		{
			if(array[i] > array[i+1])
			{
				array[i] = array[i] + array[i+1];     // Swapping
				array[i+1] = array[i] - array[i+1];
				array[i] = array[i] - array[i+1];
				k++;
			}
		}
		j--;
		if(k == 0 || j == 0)
			flag = 1;
	}
	printf("\n Sorted Array: ");
	for(i=0; i<count; i++)
	{
		printf("%d ", array[i]);
	}
}
