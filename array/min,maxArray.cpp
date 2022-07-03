#include<stdio.h>
// to find the smallest and largest element of an array
float smallest(float array1[], float max, int length2);
float largest(float array2[], int length1);

int main()
{
	int n;
	float array[20];
	printf("enter the no. of elements you have(max:20) ");
	scanf("%d", &n);
	printf("\nEnter the elements of the array ");
	for(int i=0; i<n; i++)
	{
		scanf("%f", &array[i]);
	}
	
	float maximum = largest(array, n);
	float minimum = smallest(array, maximum, n);
	
	printf("\nThe largest and least no. are %.2f and %.2f respetively", maximum, minimum);
	return 0;
}
float largest(float array1[], int length1)
{
	float max=0;
	for(int j=0; j<length1; j++)
	{
		if(array1[j] > max )
			max = array1[j];
		else
			continue;
	}
	
	return max;
}
float smallest(float array2[], float max, int length2) 
{
	float min=max;
	for(int k=0; k<length2; k++)
	{
		if(min > array2[k])
			min = array2[k];
		else 
			continue;	
	}
	return min;
}
