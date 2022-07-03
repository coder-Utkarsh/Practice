#include<stdio.h>
// To find the second largest input in a list
int main()
{
	int i, j, n, k, temp;
	int array[8];
	printf("Enter the no. of elements you want to enter: ");
	scanf("%d", &n);
	printf("\nEnter the elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
	}
// code for finding the 2nd largest int:   *Bubble sort*
	k = n-1;
	for(i=0; i<(n-1); i++)
	{
		for(j=0; j<k; j++)
		{
			if(array[j] < array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
		k--;
	}
	for(i=0; i<n; i++)
	{
		printf(" %d", array[i]);
	}
	printf("\n\nThe second largest integer is: %d", array[1]);
	return 0;
}
