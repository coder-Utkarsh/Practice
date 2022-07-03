#include<stdio.h>
#include<time.h>
#include<stdlib.h>
// to search an element of an array using pointers
int main()
{
	time_t t;
	srand(time(&t));
	int i, counter = 0, search, array[10];
	int *p = array;
	for(i=0; i<10; i++)
	{
		*(array + i) = ( (rand() % 100) + 1 );
	}
	
	printf("The array is : ");
	for(i=0; i<10; i++)
	{
		printf("%d ", *(array + i));
	}
	
	printf("\n\nEnter the element you want to search for: ");
	scanf("%d", &search);
	
	for(i=0; i<10; i++)
	{
		if(search == *(array + i))
			printf("\nthe element you searched for exits in the array at position no. %d ", i+1);
		else 
			counter++;
			
	}
		if(counter == 10)	
			printf("\n\nthe element you searched for does not exists in this array ");
}
