#include<stdio.h>
// reversing an array

void rev(int length, int array2[]);

int main()
{
	int i,n;
	int array[20];
	printf("Enter the no. of elements you have(max=20) ");
	scanf("%d", &n);
	printf("Enter the elements of the array: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
	}
		
	printf("The reversed array is: ");
	rev(n, array);
	return 0;
}
void rev(int length, int array2[])
{
	int i, reverse[length];
	
	for(i=0; i<length; i++)
	{
		*(reverse + i) = *(array2 + ( length - (i+1) ) );
	}
	for(i=0; i<length; i++)
	{
		printf("%d ", *(reverse + i));
	}
}
