#include<stdio.h>
//
void maxProfit(int* prices, int size)
{
	int i, j, max=0, pft;
	for(i=0; i<(size-1); i++)
	{
		for(j=(i+1); j<size; j++)
		{
			pft = prices[j] - prices[i];
			if(max < pft)
				max = pft;
		}
	}
	printf("\npft=%d", pft);
	printf("\nmax=%d", max);
	if(max <= 0)
	{
		printf("\nyo 0");
		return;
	}
	else
	{
		printf("\nlol %d", max);
		return;
	}
}
int main()
{
	int arr[10] = {7,6,4,3,1};
	maxProfit(arr, 5);
}
