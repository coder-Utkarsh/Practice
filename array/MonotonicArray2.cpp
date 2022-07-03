#include<stdio.h>
void monotonic(int* A, int size)
{
	int i, count=0, k=0;
	for(i=0; i<size-1; i++)
	{
		if(A[i] > A[i+1])
			count++;
		else if(A[i] < A[i+1])
			count--;
		else
			k++;
	}
	if(k>0)
	{
		if(count == (size-k-1) || count == -(size-k-1))
			printf("\n1");
		else
			printf("\n0");
	}
	else
	{
		if(count == (size-1) || count == -(size-1))
			printf("\n1");
		else
			printf("\n0");
	}
}
int main()
{
	int A[] = {1,1,1,2,3};
	monotonic(A, 5);
}
