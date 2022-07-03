#include<stdio.h>
#include<string.h>
// sum of the elements of an array
int main()
{
	int i,j, sum=0;
	float array[20];
	printf("Enter the no. of elements you have(max:20) ");
	scanf("%d", &j);
	printf("Enter the elements of the array to get their sum: ");
	for(i=0; i<j; i++)
	{
		scanf("%f", &array[i]);
	}
	for(i=0; i<j; i++)
	{
		sum = sum + array[i];
	}
	
	printf("The sum is %d", sum);
	return 0;
}
