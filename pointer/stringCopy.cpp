#include<stdio.h>
#include<string.h>
// to copy one string into another using a pointer
int main()
{
	int i;
	char array1[20], array2[20];
	char *p = array1;
	printf("Enter a string ");
	gets(array1);
	printf("\nthe string you entered:  ");
	puts(array1);
	
	for(i=0; i<strlen(array1); i++)
	{
		*(array2 + i) = *(array1 + i);
	}
	printf("\nthe 2nd string is:  ");
	puts(array2);
	
	return 0;
}
