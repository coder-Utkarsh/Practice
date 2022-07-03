#include<stdio.h>
// program to provide sort the elements of an array using pointers
int main()
{
	int i, j, smallest, length=0;
	int array[10];
	int *p = array;
	
	printf("Enter the Array(max length = 3):  ");
	for(i=0; i<3; i++)
	{
		scanf("%d", &*(array + i));
	}

	while(*(p++)) length++;           // why does it stop incrementing input as soon as 0  
	                            // is input in it ?? ALSO, what happens to length when we
	printf("\nlength: %d  ",length);      // put 5 or 7 instead of 3 in previous for-loop
	printf("\n\n Array before sorting:  ");		// P.S. Rest of the code is fine. 
	for(i=0; i<length; i++)
	{
		printf("%d ", *(array + i));
	}
	
	printf("\n\n The sorted array:  ");
	for(i=0; i<length; i++)
	{
		for(j=(i+1); j<length; j++)
		{
			if( *(array + j) < *(array + i) )
				{
					smallest = *(array + i);
					*(array + i) = *(array + j);
					*(array + j) = smallest;
				}
			else continue;
		}
	}
	
	for(i=0; i<length; i++)
	{
		printf("%d ", *(array + i));
	}
	
	return 0;
}
