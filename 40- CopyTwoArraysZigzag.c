//Starting
#include<stdio.h>
#include<stdlib.h>
int * CopyTwoArraysZigzag (int *arr1, int size1,int *arr2,int size2, int *arr3)
{
	int size3 = size1+size2;
	int i = 0;
	int j = 0;
	
	for (i = 0; i < size3; i+=2)
	{	
		arr3[i]   = arr2[j];
		arr3[i+1] = arr1[j];
		j++;
	}
	
}
int main()
{
	system("cls");
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {6,7,8,9,10};
	int size1  = sizeof(arr1) / sizeof(*arr1);
	int size2  = sizeof(arr2) / sizeof(*arr2);
	int size3  = size1+size2;   
	int *const arr3  = (int*)malloc(size3 * sizeof(int));
	CopyTwoArraysZigzag(arr1,size1,arr2,size2,arr3);
	
	int i = 0;
	for(i = 0; i<size3; i++)
	{
		printf("arr3[%d] = %d\n", i, arr3[i]);
	}
	free(arr3);
}