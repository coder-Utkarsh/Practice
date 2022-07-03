#include<stdio.h>
// to count the no. of 'complete' staircases made using coins.
int main()
{
	int i, j, coins, temp, flag=0, count = 0, length = 1;
	printf("Enter no. of coins: ");
	scanf("%d", &coins);
	temp = coins;
	while(temp > 0)
	{
		temp = temp - length;
		count++;
		length++;
		if(temp < 0)
			count--;
	}
	length = 0;
	for(i=1; i<=(count+1); i++)
	{
		for(j=0; j<i; j++)
		{
			printf("*");
			length++;
			if(length == coins)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			break;
		printf("\n");
	}
	printf("\nThe no. of complete staircases can be made using %d coins = %d", coins, count);
}
