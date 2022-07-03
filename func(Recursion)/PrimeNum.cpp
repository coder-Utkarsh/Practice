#include<stdio.h>
#include<math.h>
// to check prime no. using recursion
int check(int num, int i)
{
	int k = sqrt(num);
	if(num==2 || num==3)
		return 1;
	if( num % i != 0)
	{
		if(i>(sqrt(num)))
		{
			return 1;
		}
		check(num, i+1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n, k, i=2;
	printf("enter the num: ");
	scanf("%d", &n);
	k = check(n, i);
	if(k)
		printf("\nprime no. \n%d", k);
	else
		printf("\nnot a prime no.");
}
