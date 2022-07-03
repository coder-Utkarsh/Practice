#include<stdio.h>
#include<string.h>
#include<ctype.h>
// Given a string, you need to reverse the order of characters in each word within a sentence
//  while still preserving whitespace and initial word order.
void rev(char* s)
{
	int i = 0, j = 0, k, len;
	char temp;
	len = strlen(s);
	while(i < len)
	{
		while(s[j] != ' ' && j < len)
			j++;
		k = j;
		j--;
		while(i < j)
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			i++;
			j--;
		}
		i = k+1;
		j = k+2;
	}
	printf("\nResult: ");
	puts(s);
}
int main()
{
	char a[] = "Malay is a good boy";
	printf("You entered: ");
	puts(a);
	rev(a);
}
