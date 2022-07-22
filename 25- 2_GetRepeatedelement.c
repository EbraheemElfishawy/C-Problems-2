//Starting
#include<stdio.h>
int j = 0;
int * GetRepeatedElement(int* arr, int size)
{
	int temp_arr[10] = {0};
	static int final_array[10] = {0};
	for (int i = 0 ; i< size; i++)
	{			
		temp_arr[arr[i]]++;	
	}
	
	for(int i = 0; i < size; i++)
	{
		if(temp_arr[i] > 1)
		{
			final_array[j] = i;
			j++;
		}
	}
	return final_array;
}
int main()
{
	int arr[10] = {1,2,3,4,5,2,5,5,4,4};
	int *ptr    = GetRepeatedElement(arr,10);
	int i = 0;
	for (i = 0; i < j; i++)
	{
		printf("%d \n", ptr[i]);
	}
}