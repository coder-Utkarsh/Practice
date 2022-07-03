#include<stdio.h>
void fun(int arr[])
{
	printf("size of array in fun() = %d", sizeof(arr));
	// since an array is always passed by reference, the sizeof(arr) shows size of
	//   int*(i.e 8) instead of array(i.e 20).
}
int main()
{
	printf("int = %d\n", sizeof(int));
	printf("int* = %d\n", sizeof(int*));
	// this shows that pointer of char, int, double occupy same amount of memory.
	printf("char = %d\n", sizeof(char));
	printf("char* = %d\n", sizeof(char*));
	printf("double = %d\n", sizeof(double));
	printf("double* = %d\n", sizeof(double*));
	int arr[]={1,2,3,4,5};
	printf("size of array in main() = %d\n", sizeof(arr));
	fun(arr);
}

