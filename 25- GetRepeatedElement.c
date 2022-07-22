//Starting
#include<stdio.h>
#include<stdlib.h>
int dynamic_size = 0;
int* GetRepeatedElement(int *arr, int size)
{
	int i = 0;
	int j = 0;
	int counter = 0;
	int static temp_arr[5] = {0};
	int index_temp_array = 0;
	int flag = 0;
	
	for(i = 0; i < size; i++)
	{
		for(j = i+1; j < size; j++)
		{
			if(arr[i] == arr[j])
			{
				counter ++;
			}
		}
		if(counter > 0)
		{	
			for(int k = 0; k < index_temp_array; k++)
			{
				if(temp_arr[i] == temp_arr[k])
				{
					flag++;
				}
			}
			if(flag == 0)
			{
				temp_arr[index_temp_array] = arr[i];
				index_temp_array++;
				dynamic_size++;
			}
			else
			{
				flag = 0;
			}
			
		}
		counter = 0;
	}
	int *new_allocated_array = (int*)malloc(dynamic_size * sizeof(int));
	for(int k = 0 ; k < dynamic_size; k++)
		{
			new_allocated_array[k] = temp_arr[k];
		}
		
	return new_allocated_array;
}
int main()
{
	int arr[10] = {1,2,3,4,4,5,6,6,8,4};
	int *ptr    = GetRepeatedElement(arr,10);
	int i = 0;
	for (i = 0; i < dynamic_size; i++)
	{
		printf("%d \n", ptr[i]);
	}
}