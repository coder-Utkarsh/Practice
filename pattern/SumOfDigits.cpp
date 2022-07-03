#include<stdio.h>
// Adding the digits of a num (till a single digit is obtained)
int main()
{
	int num, sum=0;
	printf("Enter num: ");
	scanf("%d", &num);
	while(1)
	{
		sum = sum + (num%10);
		num /= 10;
		if(num == 0)
		{
			if(sum < 10)
				break;
			else
			{
				num = sum;
				sum = 0;
				continue;
			}
		}
	}
	printf("\nThe sum of its digits is: %d", sum);
}
