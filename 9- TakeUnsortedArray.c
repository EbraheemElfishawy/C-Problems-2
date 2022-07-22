#include<stdio.h>

int check_0To9_print(int *unsorted_array, int size)
{
	int temp_arr[10] = {0};
	int index_temp_arr = 0;
	int i = 0;
	
	for (i = 0; i <= size; i++ )
	{
		index_temp_arr = unsorted_array[i];
		temp_arr[index_temp_arr] = 1;
	}
	int j = 0;
	int logic_result = 1;
	for (j = 0; j <=9; j++)
	{
		logic_result &= temp_arr[j];
	}
	return logic_result;
}

int check_0To9_print_switch(int *unsorted_array, int size)
{
	int i = 0;
	int temp_arr[10] = {0};
	int index = 0;
	for ( i = 0; i < size; i++)
	{	
		index = unsorted_array[i];
		switch (index)
		{
			case 0 : temp_arr[0] = 1; break;
			case 1 : temp_arr[1] = 1; break;
			case 2 : temp_arr[2] = 1; break;
			case 3 : temp_arr[3] = 1; break;
			case 4 : temp_arr[4] = 1; break;
			case 5 : temp_arr[5] = 1; break;
			case 6 : temp_arr[6] = 1; break;
			case 7 : temp_arr[7] = 1; break;
			case 8 : temp_arr[8] = 1; break;
			case 9 : temp_arr[9] = 1; break;
			default: /* DO NOTHING */ break;
		}
	}
	int j = 0;
	int logic_result = 1;
	for (j = 0; j <=9; j++)
	{
		logic_result &= temp_arr[j];
	}
	return logic_result;
}

int main()
{
	int unsorted_array[15]= {0,1,3,2,4,6,5,7,8,9,5,1,0,2,3};
	int check_return = 0;
	check_return = check_0To9_print_switch(unsorted_array, 15);
	printf("check_return = %d", check_return);
}