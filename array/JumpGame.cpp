#include<stdio.h>
// Given an array of non-negative integers, you are initially positioned at the first index of
//  the array. Each element in the array represents your maximum jump length at that position.
//  Determine if you are able to reach the last index.
void canJump(int* nums, int numsSize)
{
	int i, j, k;
	for(i=0; i<=nums[0]; i++)
	{
		for( ; j<=nums[i]; j++)
		{
			
		}
	}
}
int main()
{
	int A[] = {1,2,3};
	canJump(A, 3);
}
//Input: nums = [2,3,1,1,4]
// Output: true
// Input: nums = [3,2,1,0,4]
// Output: false
