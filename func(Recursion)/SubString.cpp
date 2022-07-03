#include<stdio.h>
#include<string.h>
// print each and every substring using reursion
void substr(char string[], int n)
{
	if(n == 0)
		return;
	int i;
	printf("\nString: ");
	for(i=0; i<n; i++)
		printf("%c", string[i]);
	substr(string, n-1);
}
int main()
{
	char string[10];
	printf("Enter a string: ");
	gets(string);
	int i = strlen(string);
	substr(string, i);
}
