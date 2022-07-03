#include<stdio.h>
#include<time.h>
#include<stdlib.h>
// swapping 2 arrays using pointer
int main()
{
	time_t t;
	srand(time(&t));
	int array1[5], array2[5];
	int *p1 = array1, *p2 = array2;
	for(int j=0; j<5; j++)
	{
		array1[j] = (rand()%100)+ 1;
	}
	for(int k=0; k<5; k++)
	{
		array2[k] = (rand()%100)+ 1;
	}
	printf("Before swapping : \n\n");
	for(int i=0; i<5; i++)
	{
		printf("array1 = %d  ", *(array1 + i) );
		printf("array2 = %d  ", *(array2 + i) );
	}

	for(int m=0; m<5; m++)
	{
		*(array1 + m) = *(array1 + m) + *(array2 + m);
		*(array2 + m) = *(array1 + m) - *(array2 + m);
		*(array1 + m) = *(array1 + m) - *(array2 + m);
	}
	
	printf("\n\n\nAfter swapping : \n\n");
	for(int l=0; l<5; l++)
	{
		printf("array1 = %d  ", *(array1 + l) );
		printf("array2 = %d  ", *(array2 + l) );
	}
	
	return 0;
}
