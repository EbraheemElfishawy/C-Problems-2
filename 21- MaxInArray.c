#include<stdio.h>
int MaxAnd2ndMaxElement(int *arr, int size)
{
	int i        = 0;
	int second_max = arr[0];
	int max        = arr[1];
	
	for (i = 0; i<size; i++)
	{
		if(arr[i]>max)
		{
			second_max = max;
			max      = arr[i];
		}
	}
	printf("Max = %d\n",max);
	printf("Prev_Max = %d",second_max);
}
int main()
{
	int arr[5] = {5,4,3,2,6};
	MaxAnd2ndMaxElement(arr,5);
}