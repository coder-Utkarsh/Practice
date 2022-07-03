#include<stdio.h>
// Selection Sort
int main()
{
	int i = 0, j = 0, k, l,count, flag = 0, array[8];
	printf("Enter the elements: ");
	do
	{
		scanf("%d", &array[i]);
		i++;
	}while(getchar() != '\n');
	count = i;
	// sort
	l = count-1;
	while(flag != 1)
	{
		k = 0;
		for(i=0; i<l; i++)
		{
			for(j=(i+1); j<count; j++)
			{
				if(array[i] > array[j])
				{
					array[i] = array[i] + array[j];   // Swapping
					array[j] = array[i] - array[j];
					array[i] = array[i] - array[j];
					k++;
				}
			}
		}
		l--;
		if(k == 0)
			flag = 1;
	}
	printf("\nArray: ");
	for(i=0; i<count; i++)
	{
		printf("%d ", array[i]);
	}
}
