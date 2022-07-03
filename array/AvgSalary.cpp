#include<stdio.h>
// avg. salary excluding max. & min.
int main()
{
	int i = 0, j, max = 0, min, salary[8];
	float avg;
	printf("Enter the slaries(max8): ");
	do
	{
		scanf("%d", &salary[i]);
		i++;
	}while( getchar() != '\n');
	j = i;
	for(i=0; i<j; i++)
	{
		if(salary[i] > max)
			max = salary[i];
	}
	min = max;
	for(i=0; i<j; i++)
	{
		if(min > salary[i])
			min = salary[i];
		printf("\nmin %d: %d ,%d", i, min, salary[i]);
	}
	printf("\nmin max: %d %d", min, max);
	for(i=0; i<j; i++)
		avg = avg + salary[i];
	
	avg = ( (avg - (max + min) )/ (j-2) );
	printf("\navg salary excluding min & max: %f", avg);
}
