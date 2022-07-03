#include<stdio.h>
#include<string.h>
// concatenate 2 strings using pointers(without strcat)
int main()
{
	int i, j; 
	char str1[20], str2[20];
	char *p1 = str1, *p2 = str2;
	printf("Enter the strings(max size:20) \n");
	gets(str1);
	gets(str2);
	
	printf("\nString 1:  ");
	puts(str1);
	printf("String 2:  ");
	puts(str2);
	
	int l1 = strlen(str1), l2 = strlen(str2);
	for(i=0, j=l1; i<( (l1) + (l2) ), j<( (l1) + (l2) ); i++, j++)
	{
		*(str1 + j) = *(str2 + i);
	}
	
	printf("\n\nafter concatenation the string becomes:  ");
	puts(str1);
	
	return 0;
}
