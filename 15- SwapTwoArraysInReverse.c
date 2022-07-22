#include <stdio.h>

int swap_TwoArraysInReverse(int*arr1,int *arr2,int size)
{
	int temp[5] = {0};
	int i 		=  0 ;
	int j 		=  size-1;
	
	for (i = 0; i < size; i++)
	{
		temp[i] = arr1[j];
		j--;
	}
	i 		=  0 ;
	j 		=  size-1;
	for (i = 0; i < size; i++)
	{
		arr1[i] = arr2[j];
		j--;
	}
	i 		=  0 ;
	j 		=  size-1;
	for (i = 0; i < size; i++)
	{
		arr2[i] = temp[i];
		j--;
	}
	
}
int main()
{
	int arr1[4] = {1,2,3,4};
	int arr2[4] = {5,6,7,8};
	printf("Before\n");
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("arr1 [%d] = %d\n",i , arr1[i]);
	}
	printf("========\n");
	i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("arr2 [%d] = %d\n",i , arr2[i]);
	}
	swap_TwoArraysInReverse(arr1,arr2,4);
	printf("========\n");
	printf("After\n");
	i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("arr1 [%d] = %d\n",i , arr1[i]);
	}
	printf("========\n");
	i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("arr2 [%d] = %d\n",i , arr2[i]);
	}
	swap_TwoArraysInReverse(arr1,arr2,4);
}