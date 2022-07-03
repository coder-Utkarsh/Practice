/*
 *    Strong no. : Strong number is a special number whose sum of 
 *                       factorial of digits is equal to the original number.
 */
#include<stdio.h>
int fact(int n)
{
	if(n==1 || n == 0)
		return 1;
	else
		return ( n*(fact(n-1)) );
}
int main()
{
	int i, x, num, temp, sum = 0, length = 0;
	printf("Enter the num: ");
	scanf("%d", &num);
	temp = num;
	while(temp != 0)
	{
		length++;
		temp /= 10;
	}
	temp = num;
	for(i=0; i<length; i++)
	{
		x = temp%10;
		x = fact(x);
		sum = sum + x;
		temp /= 10;
	}
	if(sum == num)
		printf("\nIts a strong num");
	else 	
		printf("\nIts not a strong num");
	return 0;
}
