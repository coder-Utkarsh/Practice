#include<stdio.h>
// 0 and 1 pyramid pattern.
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if( (i+j)%2 == 0 ) // Method 2: if( (j%2 == 0 && i%2 == 0) || (j%2 != 0 && i%2 != 0) )
				printf("1");      // i.e. either both i & j are even or both are odd.
			else
				printf("0");
		}
		printf("\n");
	}
}
