#include<stdio.h>
#include<string.h>
// reverse a string using (1)recursion & (2)Loop
void reverse(int i, char array[])
{
	if(array[i] == '\0')
		return;
	reverse(i+1, array);
	printf("%c", array[i]);
}
void rev(int size, char* s)
{
	char temp;
	int i = 0;
	while(i<size)
  	{
    	temp = s[i];
    	s[i] = s[size];
    	s[size] = temp;
    	i++;
    	size--;
  	}
  	puts(s);
}
int main()
{
	int i;
	char str[10];
	printf("Enter the string: ");
	gets(str);
	
	printf("the string you entered: ");
	puts(str);
	i=0;
	printf("\nreverse string: ");
	reverse(i, str);
}
