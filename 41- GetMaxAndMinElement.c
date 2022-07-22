//Starting
#include<stdio.h>
#include<stdlib.h>
void GetMaxAndMinElement(int* arr,int size,int* max,int* min)
{
	*max  = arr[0];
	*min  = arr[0];
	int i = 0;
	int j = 0;
	for(i = 0; i<size; i++)
	{
		if(arr[i] >= *max)
		{
			*max = arr[i];
		}
		if(arr[i] <= *min)
		{
			*min = arr[i];
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
	#############################################\n");
	int arr[10] = {1,2,5,3,10,7,4,8,3,1};
	int max = 0;
	int min = 0;
	GetMaxAndMinElement(arr,10,&max,&min);
	printf("Max = %d, Min = %d \n",max,min);
	
	
}