#include<stdio.h>
#include<stdlib.h>
//Binary Search
int main()
{
	int mid, low=0, high=9, n, A[] = {1,23,34,43,64,87,96,165,279,598};
	printf("Enter the no. you want to search: ");
	scanf("%d", &n);
	while(low<=high)
	{
		mid = (low+high)/2;
		if(A[mid] == n)
		{
			printf("The no. you entered is at index no. %d", mid);
			exit(0);
		}
		else if(A[mid]>n)
		{
			high = mid-1;
		}
		else//if(A[mid]<n)
		{
			low = mid+1;
		}
	}
	printf("The no. you entered is not in the array");
}
