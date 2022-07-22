#include <stdio.h>

int find_unrepeated(int *arr, int size)
{
	int temp_arr[11]= {0};
	int temp_index  = 0;
	int i = 0;
	for (int i = 0; i < size; i++)
	{
		temp_index = arr[i];
		temp_arr[temp_index]++; 
	}
	int j = 0;
	for ( j = 0; j < size; j++)
	{
		if(temp_arr[j] == 1)
		{
			return j;
		}
		else
		{
			continue;
		}
	}
	return -1;

}
int main()
{
	int arr[11] = {1,1,2,2,3,4,4,5,5,6,6};
	int unrepeated_number = 0;
	unrepeated_number = find_unrepeated(arr, 11);
	printf("unrepeated_number = %d",unrepeated_number );
}