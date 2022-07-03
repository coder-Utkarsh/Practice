#include<stdio.h>
#include<string.h>
#include<ctype.h>
// Write a function that takes a string as input and reverse only the vowels of a string.
void revVowels(char* s)
{
	int i=0, j, size;
	char temp, vow1, vow2;
	size = strlen(s);
	j = size;
	while(i < j)
	{
		vow1 = tolower(s[i]);
		if(vow1 == 'a' || vow1 == 'e' || vow1 == 'i' || vow1 == 'o' || vow1 == 'u')
		{
			for(j=j-1; j>i; j--)
			{
				vow2 = tolower(s[j]);
				if(vow2 == 'a' || vow2 == 'e' || vow2 == 'i' || vow2 == 'o' || vow2 == 'u')
				{
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
					break;
				}
			}
		}
		i++;
	}
	printf("\nString after reversing vowels: ");
	puts(s);
}
int main()
{
	char a[] = "ai";
	printf("You entered: ");
	puts(a);
	revVowels(a);
}
