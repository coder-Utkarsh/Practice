#include<stdio.h>
//  To compare the skills
//    of 2 players(a & b) based on 3 different scores
   
void final_score(int a[3], int b[3]);

int main()
{
	int i;
	int a[3], b[3];
	printf("Enter the scores of a: ");
	for(i=0; i<3; i++)
		scanf("%d", &a[i]);

	printf("\nEnter the scores of b: ");
	for(i=0; i<3; i++)
		scanf("%d", &b[i]);
	final_score(a, b);
	
	return 0;
}
void final_score(int a[3], int b[3])
{
	int j, sum1 = 0, sum2 = 0;
	for(j=0; j<3; j++)
	{
		if(a[j] > b[j])
			sum1++;
		if(a[j] < b[j])
			sum2++;	
	}
	printf("The final scores are: a = %d & b = %d", sum1, sum2);
}
