#include<stdio.h>
// Select the odd one out..
int main()
{
	int i, j, n, count, array[20];
	printf("enter the no. of elements you want to enter(max=20): ");
	scanf("%d", &n);
	printf("\nenter the elements of the array: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
	}
	
//   code for finding the element which occurs only once:

	for(i=0; i<n; i++)
	{
		count = 0;
		for(j=0; j<n; j++)
		{
			if(i == j)
				continue;
			if(array[i] == array[j])
			{
				count++;	
			}
		}
		if(count == 0)
			{
				printf("\n\nthe element which occurs only once: %d\n", array[i]);
				break;
			}
	}
	return 0;
}
