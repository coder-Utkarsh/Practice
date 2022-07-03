#include<stdio.h>
#include<string.h>
// Given a string and an integer k, you need to reverse the first k characters for every
//  2k characters counting from the start of the string (string has only lowercase letters).
//  Input: s = "abcdefg", k = 2        Output: "bacdfeg".
void reverse(char* s, int k)
{
	int i = 0, j, len, num=1;
	char temp;
	len = strlen(s);
	while(i < len-1)
	{
		if(k >= len)
			j = len;
		else
			j = i+k;
		if(j > len)
			j = len;
		while(i < j-1)
		{
			temp = s[i];
			s[i] = s[j-1];
			s[j-1] = temp;
			i++;
			j--;
		}
		i = num*k*2;
		num++;
	}
	printf("\nResult: ");
	puts(s);
}
int main()
{
	char a[20] = "HarryPotter";
	printf("You entered: ");
	puts(a);
	reverse(a, 3);
}
