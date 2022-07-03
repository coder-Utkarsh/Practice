#include<stdio.h>
// swap the kth element from beginning with kth element from end
int main()
{
	int i, k, length, array[10];
	printf("Enter k(max=10): ");
	scanf("%d", &k);
	
	if(k<1 || k>10)
	{
		printf("\nWrong input!");
		return 0;
	}

	printf("Enter the no. of elements(max=10): ");
	scanf("%d", &length);
	printf("Enter the elements of the array: ");
	for(i=0; i<length; i++)
		scanf("%d", &array[i]);
	
	printf("\nArray before:");
	for(i=0; i<length; i++)
		printf(" %d", array[i]);
	
	i = array[(k-1)];
	array[(k-1)] = array[length - k];
	array[length - k] = i;
	
	printf("\nArray after:");
	for(i=0; i<length; i++)
		printf(" %d", array[i]);
	return 0;
} 
