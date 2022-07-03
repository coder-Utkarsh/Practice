#include<stdio.h>
/* Given two arrays of integers nums and index. Your task is to create target array under
   the following rules:
	1) Initially target array is empty.
	2) From left to right read nums[i] and index[i], insert at index index[i] the value nums[i]
	    in target array.
	3) Repeat the previous step until there are no elements to read in nums and index.
	Return the target array.
	It is guaranteed that the insertion operations will be valid.
*/
int main()
{
	int i, j, k, len, nums[10], index[10], target[10];
	printf("Enter the length of arrays: ");
	scanf("%d", &len);
	for(i=0; i<len; i++)
	{
		printf("Enter element no. %d and its index no.: ", i+1);
		scanf("%d %d", &nums[i], &index[i]);
	}
	printf("\nTarget array: ");

	for(i=0; i<len; i++)
	{
//		for(j=0; j<i; j++)
//		{
//			if(index[j] >= index[i])
//			{
//				for(k=i-1; k>=j; k--)
//					target[k+1] = target[k];
//				break;
////				printf("\ni=%d j=%d k=%d", i, j, k);
//			}
//		}
		target[index[i]] = nums[i];
	}
		
	for(i=0; i<len; i++)
		printf("\ntarget[%d] = %d ", i, target[i]);
}
