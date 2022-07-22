//Starting
#include<stdio.h>
int MaxRepeatedElement(int *arr, int size)
{
	int i 			 = 0;
	int j 			 = 0;
	int max_repeated = 0;
	int count 	  	 = 0;
	int max_count 	 = 0;
	
	for (i = 0; i < size; i++)
	{
		for(j = i; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
				
			}
			if(count > max_count)
				{
					max_count = count;
					max_repeated= arr[i];
				}
		}
		count = 0;
	}
	return max_repeated;
}
int main()
{
	system("cls");
	
	int arr[10] = {1,1,2,2,4,4,4,5,3,4};

;
	int x = MaxRepeatedElement(arr,10);
	printf("MaxRepeatedElement = %d", x);
}