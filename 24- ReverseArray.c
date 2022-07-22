#include <stdio.h>

int reverse_array(int *arr, int size)
{
	int temp[10] = {0};
	int i = 0;
	int j    = size-1;
	for(i = 0;i < size; i++)
	{
		temp[i] = arr[j];
		j--;		
	}
	j = size-1;
	for(i = 0;i < size; i++)
	{
		arr[i] = temp[i];
		j--;		
	}
}

int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("==========\n");
	reverse_array(arr, 10);
	
	for(i = 0; i < 10; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

/*
void Reverse_arr(int arr[] , int size);

int main(void)
{
	int arr [5]={1,2,3,4,5};
	Reverse_arr(arr,5);
	
}
void Reverse_arr(int arr[] , int size)
{
	int i;
	int *First =&arr[0];
	int *Last =&arr[4];
	int Temp;
	while(First < Last)
	{
		Temp=*First;
		*First=*Last;
		*Last=Temp;
		 ++First;
		 --Last;
	}
	for(i=0;i<size;i++)
	printf("%d",arr[i]);
}
*/