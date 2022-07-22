#include<stdio.h>
int RemoveRepeated(int *arr,int size)
{
	int i 		 = 0;
	int j 		 = 0;
	int k 		 = 0;
	int deleted  = 0;	
	int new_size = 0;
	
	for(i = 0; i< size; i++)
	{
		for(j = i+1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{	
				deleted++;
				for(k = j; k < size-1; k++)
				{
					arr[k] = arr[k+1];
				}
			}
		}
	}
	new_size = size - deleted/2;
	return new_size;
}
int main()
{
int arr[10]= {1,2,3,4,3,5,6,5,6,3};
	int new_size = 0;
	int i 		 = 0;
	new_size = RemoveRepeated(arr,7);
	
	for (i = 0; i < new_size; i++)
	{
		printf("arr[%d] == %d\n", i, arr[i]);
	}
	
}