#include<stdio.h>
// To find the largest word among a set of words
void longest_word(char word[][11], int n);

int main()
{
	int i, j, k, n;
	char array[5][11];
	char temp[11];
	printf("Enter the no. of words you want to enter(max:5) : ");
	scanf("%d", &n);
	printf("Enter the %d words(max length = 10): ",n);
	for(i=0; i<n; i++)
	{
		do
		{
			scanf("%s", array[i]);	
		} while(getchar() != '\n' );
	}
	longest_word(array, n);
}
void longest_word(char word[][11], int num)
{
	int p, q, a = 0, max = 0;
	for(p=0; p<num; p++)
	{
		q=0;
		while(word[p][q] != '\0')
		{
			q++;
		}
		if(q > max)
		{
			max = q;
			a = p;
		}
	}
	printf("the longest string is: %s", word[a]);
}
