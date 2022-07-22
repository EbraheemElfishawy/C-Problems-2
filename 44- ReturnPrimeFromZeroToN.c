//Starting
#include<stdio.h>
#include<stdlib.h>
int count = 0;
int* ReturnPrimeFromZeroToN(int end)
{
	
	int i = 0;
	int j = 0;
	for(i = 0; i < end; i++)
	{
		switch(i)
		{
			case 2: count++; break;
			case 3: count++; break;
			case 5: count++; break;
			case 7: count++; break;
			default: 
					if(i%2 !=0)
					{
						if( (i!= 1)&&(i%3 !=0) && (i%5 !=0) && (i%7 !=0) )
						{
							count ++;
						}
					}
		}
	}
	int *prime_arr = (int*)malloc(count * sizeof(int));
	j = 0;
	for(i = 0; i < end; i++)
	{
		switch(i)
		{
			case 2: prime_arr[j] = i;j++; break;
			case 3: prime_arr[j] = i;j++; break;
			case 5: prime_arr[j] = i;j++; break;
			case 7: prime_arr[j] = i;j++; break;
			default: 
					if(i%2 !=0)
					{
						if( (i!= 1)&&(i%3 !=0) && (i%5 !=0) && (i%7 !=0) )
						{
							prime_arr[j] = i;
							j++;
						}
					}
		}
	}
	return prime_arr;
}
int main()
{
	system("cls");
	printf("\
	#########################################################################\n\
	# This code is made by: Ebraheem El-Feshawy 							#\n\
	# Description: Return prime numbers from zero to a certain given number #\n\
	# Date       :                              							#\n\
	#########################################################################\n");
	
	int number = 0;
	printf("Enter a number to check from zero to it\n");
	scanf("%d",&number);
	int *prime_arr = ReturnPrimeFromZeroToN(number);
	
	printf("The prime mnumbers within 0 : %d are:\n",number);
	for(int i = 0; i <count; i++)
	{
		printf("%d,",prime_arr[i]);
	}
	
	
}