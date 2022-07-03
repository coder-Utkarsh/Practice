#include<stdio.h>
// print an array using recursion
void print(int i, int array[], int num);

int main()
{
	int i, n, array[5];
	printf("Enter no. of elements(max-5): ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
	}
	i=0;
	print(i, array, n);
}
void print(int i, int array[], int num)
{
	if(i == num)
		return;

	printf("%d ", array[i]);
	print(i+1, array, num);
}
