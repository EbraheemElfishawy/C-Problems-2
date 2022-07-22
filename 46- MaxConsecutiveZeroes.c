//Starting
#include<stdio.h>
#include<stdlib.h>
#define GET_BIT(NUMBER,BIT)		((NUMBER>>BIT)&1)
int MaxConsecutiveZeroes(char number)
{
	int size  = 8 ;
	int i     = 0;
	int j     = 0;
	int first_one = 0;
	int last_one  = 0;
	int count = 0;
	int max_count = 0;
	
	for(i = 0; i < size; i++) 
	{	
		if( GET_BIT(number,i) == 1)
		{
			first_one = i;
			break;
		}
	}
	for(i = size; i > 0; i--) 
	{	
		if( GET_BIT(number,i) == 1)
		{
			last_one = i;
			break;
		}
	}
	for(j = first_one; j < last_one; j++) 
			{
				if(GET_BIT(number,j) == 0)
				{	
					count++;
					if(count > max_count)
					{
						max_count = count;
					}
				}
				else
				{
					count = 0;
				}
			}
			return max_count;
}
//00000010000010001000000000
int MaxZeroesBetweenTwoOnes(unsigned int n)
{
	int i=0,count=0,max=0,flag=0;
	int size=sizeof(n)*8;
	for(i=0;i<size;i++)
	{
		if( ((n>>i)&1) == 0)
		{
			if(flag==1)
			{
				count++;
			}
		}
		else
		{
			if(count>max)
			{
				max=count;
			}
			flag=1;
			count=0;
		}
	}
	return max;
}

int main()
{
	system("cls");
	printf("\
	#############################################\n\
	# This code is made by: Ebraheem El-Feshawy #\n\
	# Description:                              #\n\
	# Date       :                              #\n\
	#############################################\n\n\n");
	char x = 0b010001001;
	int max_zeroes = 0;
	max_zeroes = MaxConsecutiveZeroes(x);
	printf("Max Zeroes = %d", max_zeroes);
	int n = 0b00000000000010000010001000000000;
	max_zeroes = 0;
	max_zeroes = MaxZeroesBetweenTwoOnes(n);
	printf("Max Zeroes = %d", max_zeroes);
	
}