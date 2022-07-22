#include<stdio.h>
int RepeatedOrNot(int *arr, int size, int number)
{
	int i     = 0;
	int count = 0;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			count++;
		}
		else
		{
			continue;
		}
	}
	return count;
}

int main()
{
	int arr[10] = {1,2,3,4,4,4,6,7,8,9};
	int value = RepeatedOrNot(arr, 10, 4);
	printf("%d", value);
}