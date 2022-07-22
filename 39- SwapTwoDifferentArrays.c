//Starting
#include<stdio.h>
// according to smallest size
void swap_TwoDifferentArrays(int *arr1, int *arr2, int smallest_size)
{	
	int temp = 0;
	int i = 0;
	for (i = 0 ; i < smallest_size; i++)
	{
		temp      = *(arr1+i);
		*(arr1+i) = *(arr2+i);
		*(arr2+i) = temp;
	}
}
int main()
{
	system("cls");
	int arr1[6] = {1,2,3,4,5,6};
	int arr2[3] = {7,8,9};
	int i = 0;
	swap_TwoDifferentArrays(arr1,arr2,3);
	for (i = 0 ; i < 3; i++)
	{
		printf("arr1[%d] = %d, arr2[%d] = %d\n",i,arr1[i],i,arr2[i]);
	}
}