//Starting
#include<stdio.h>
int count_PrimeNumbers(int *arr, int size)
{
	int count = 0;
	for(int i = 0; i < size; i++)
	{
		switch(arr[i])
		{
			case 2: count++; break;
			case 3: count++; break;
			case 5: count++; break;
			case 7: count++; break;
			default: 
					if(arr[i]%2 !=0)
					{
						if( (arr[i]!= 1)&&(arr[i]%3 !=0) && (arr[i]%5 !=0) && (arr[i]%7 !=0) )
						{
							count ++;
						}
					}
		}
	}
	return count;
}
int main()
{
	system("cls");
	int arr[15] = {1,2,3,4,5,6,7,8,9,11,17,19,23};
	int prime_count = 0;
	prime_count = count_PrimeNumbers(arr,15);
	printf("Prime count = %d",prime_count);
}