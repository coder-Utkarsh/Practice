#include<stdio.h>
#include<time.h>
#include<stdlib.h>
// to copy one array into another
int main()
{
	time_t t;
	srand(time(&t));
	
	int i, array1[5], array2[5];
	int *p1 = array1, *p2 = array2;
	
	for(i=0; i<5; i++)
	{
		*(array1 + i) = rand();
	}
	
	for(i=0; i<5; i++)
	{
		*(array2 + i) = *(array1 + i);
	}
	
	for(i=0; i<5; i++)
	{
		printf("array 1 = %d ", *(array1 + i));
	}
	printf("\n\n");
	
	for(i=0; i<5; i++)
	{
		printf("array 2 = %d ", *(array2 + i));
	}
}
