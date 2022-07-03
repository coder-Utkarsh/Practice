#include<stdio.h>
// largest element using recursion
int largest(int i, int array[], int max, int n);

int main()
{
	int i, n, m, max = 0, array[5];
	printf("Enter no. of elements(max-5): ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
	}
	i = 0;
	m = largest(i, array, max, n);
	printf("max = %d", m);
}
int largest(int i, int array[], int max, int n)
{
	if(i == n)
		return max;
	if( array[i] > max )
		max = array[i];
	largest(i+1, array, max, n);
}
