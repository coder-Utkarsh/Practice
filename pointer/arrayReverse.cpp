#include<stdio.h>
#include<time.h>
#include<stdlib.h>
// to reverse an array(generated randomly) using pointers
int main()
{
	time_t t;
	srand(time(&t));
	int i, j, array[7], arrcopy[3];
	int *p = array, *pcopy = arrcopy;
	
	for(i=0; i<7; i++)
	{
		*(array + i) = ((rand() % 100) + 1);
	}
	
	printf("array before reversing: ");
	for(i=0; i<7; i++)
	{
		printf("%d ", *(array + i));
	}
	
	for(i=0; i<3; i++)                               // C
	{                                               //  O 
		*(arrcopy + i) = *(array + i);              //  D   
	}                                               //  E   
	for(i=0; i<4; i++)                              //    F 
	{												//	  O   R
		*(array + i) = *(array + (6-i));			//	  R   E
	}                                               //        V
	for(i=4, j=0 ; i<7, j<3 ; i++, j++)             //        E
	{                                               //        R
		*(array + i) = *(arrcopy + (2-j) );         //        S
	}                                               //        E
	
	printf("\n\nAnd here is the array after reversing: ");
	for(i=0; i<7; i++)
	{
		printf("%d ", *(array + i));                   // doubt in *(p++): why is it not working
	}											// when applied in previous printf(s)		
}
