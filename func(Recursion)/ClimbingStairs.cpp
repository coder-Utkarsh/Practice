/*
 *	You are climbing a stair case.
 *	It takes n steps to reach to the top.(1<= n <=45)
 *	Each time you can either climb 1 or 2 steps. 
 *	In how many distinct ways can you climb to the top?
 */
#include<stdio.h>
int main()
{
	int a=0, b=1, n, count=0, i;
	printf("Enter n(max 45) : ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		count = a+b;
		a = b;
		b = count;
	}
	printf("\nNo. of ways to climb to the top = %d", count);
}
