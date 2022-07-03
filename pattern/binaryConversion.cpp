#include<stdio.h>
// to convert decimal into binary
int main()
{
	int i, num, temp, length = 0, array[10];
	printf("enter the no.(max=1023) : ");
	scanf("%d", &num);
	if(num == 0)
		printf("binary: 0");

	temp = num;
	while(temp != 0)
	{
		length++;
		temp = temp/2;
	}
	for(i=1; i<=length; i++)
	{
		array[length - i] = (num%2);
		if(num == 1)
			continue;
		num = num/2;
	}
	printf("\nbinary: ");
	for(i=0; i<length; i++)
		printf("%d", *(array + i) );
	return 0;
}
