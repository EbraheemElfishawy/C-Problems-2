//Starting
#include<stdio.h>
int N = 0;
int *separate_prev(int *arr,int size, int n)
{
	int i = 0;
	static int temp_arr[10] = {0};
	int j = 0;
	int k = 0;
	for(i = 0; i < size; i++)
	{
		if (arr[i] == n)
		{	
			k = i;
			N = i;
			for(j = 0; j <i; j++)
			{
				temp_arr[j] = arr[k-1];
				k--;
			}
			return temp_arr;
		}
	}
	
}
int main()
{
	//system("cls");
	int arr[15] = {1,2,3,4,5,6,4,8,4,7,5,4,1,2,4};
	int *ptr = separate_prev(arr,15,4);
	int i = 0;
	for(i = 0; i < N ; i++)
	{
		printf("ptr[%d] = %d\n", i, ptr[i]);
	}
}