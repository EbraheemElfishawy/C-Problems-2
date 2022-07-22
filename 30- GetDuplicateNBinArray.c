//Starting
#include<stdio.h>
int GetDuplicatedNBinArray(int *arr, int size)
{	
	int i = 0;
	int j = 0;
	for(i = 0; i < size; i++)
	{
		for ( j = i+1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				return arr[i];
			}
		}
		
	}
}



int main()
{
	system("cls");
	
	int arr[10] = {1,2,3,8,4,5,4,3,9,0};
	int x = GetDuplicatedNBinArray(arr, 10);
	printf("The duplicated number is %d \n", x);
}