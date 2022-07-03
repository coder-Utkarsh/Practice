#include<stdio.h>
// to find the length of a string using pointer
int main()
{
	int i, count;
	char array[20];
	char *p = array;
	
	printf("Enter a string ");
	gets(array);
	 
	printf("The string you enetered is : \n");
	puts(array);
	
	while( *(p++) != '\0') count++;
		
	printf("and it is %d characters long(including spaces) ", count);
	
	return 0;
}
