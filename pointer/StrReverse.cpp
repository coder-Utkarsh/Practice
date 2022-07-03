#include<stdio.h>
#include<string.h>
// Reverse a string using pointers
int main()
{
	int i, j;
	char str[20], reverse[20];
	char *p = str, *r = reverse;
	
	printf("Enter the string:  ");
	gets(str);
	printf("\n\nString before reversing:  ");
	puts(str);
	int length = strlen(str);
	
	for(i=0, j=(length-1); i<length, j>=0; i++,j--)
	{
		*(reverse + j) = *(str + i);                       // reverse code
	}
	
	printf("\n\nString after reversing:  ");
	puts(reverse);
	
	return 0;
}
