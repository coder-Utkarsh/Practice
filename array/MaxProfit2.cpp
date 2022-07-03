#include<stdio.h>
//
void maxProfit(int* prices, int size)
{
	if(size == 1 || size == 0)
	{
		printf("0");
		return;
	}
	int i, j=-1, k=0, max=0, pft=0, flag=0;
	for(i=0; i<(size-1);)
	{
		for(j=(i+1); j<size;j++)
		{
			if(prices[j]-prices[i] > max)
			{
				max = prices[j]-prices[i];
				printf("\nloop: i=%d  j=%d  k=%d  max=%d", i, j, k, max);
				flag = 1;
				break;
			}
		}
		if(flag == 1)
		{
			pft += max;
			k = j+1;
		}
		printf("\nout: k=%d", k);
		flag = 0;
		max = 0;
		i=k;
	}
	printf("\npft = %d", pft);
	printf("\nmax = %d", max);
}
int main()
{
	int arr[] = {7,1,5,3,6,4};
	maxProfit(arr, 6);
}

