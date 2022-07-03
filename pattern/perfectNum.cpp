//   Perfect no. : A no. whose sum of divisors is equal to the no. itself.
#include<stdio.h>
int main()
{
	int n = 2, sum = 0, num, temp;
	printf("Enter the no.: ");
	scanf("%d", &num);
	while( n <= (num/2) )
	{
		if(num % n == 0)
		{
			temp = n;
			sum = sum + temp;	
		}
		n++;
	}
	
	if(num == (sum+1) )     //  Started n at 2, so 1 is to be added(everytime)..
		printf("its a perfect no.");
	else
		printf("its NOT a perfect no.");
	return 0;	
} 
