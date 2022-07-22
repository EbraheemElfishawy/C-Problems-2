//Starting
#include<stdio.h>
#include<stdlib.h>
int ReturnIndexOfTheOnlyOddElement(int *arr, int size)
{
	int index = 0;
	int i = 0;
	for(i = 0; i<size; i++)
	{
		if(arr[i]%2 != 0)
		{
			index = i;
			return index;
		}
	}
}
int main()
{
	system("cls");
	printf("\
	#############################################\n\
	# This code is made by: Ebraheem El-Feshawy #\n\
	# Description:                              #\n\
	# Date       :                              #\n\
	#############################################\n\
			#\n");
	
	int arr[10] = {2,4,6,8,10,12,14,16,18,9};
	int odd_number = 0;
	odd_number = ReturnIndexOfTheOnlyOddElement(arr, 10);
	printf("The Only odd Number is = %d\n\n",odd_number);
	
}