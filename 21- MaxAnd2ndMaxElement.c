#include<stdio.h>
int MaxAnd2ndMaxElement(int *arr, int size)
{
	int i        = 0;
	int second_max = 0;
	int max        = 0;
	
	for (i = 0; i<size; i++)
	{
		if(arr[i]>=max)
		{
			second_max = max;
			max        = arr[i];
		}
		if((arr[i+1]>=second_max)&&(i< size-1))
		{
			second_max = arr[i+1];
		}
	}
	printf("Max = %d\n",max);
	printf("second_max = %d",second_max);
}
int main()
{
	int arr[10] = {4,6,3,5,3};
	MaxAnd2ndMaxElement(arr,10);
}