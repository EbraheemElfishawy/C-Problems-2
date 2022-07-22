//Starting
#include<stdio.h>
#include<stdlib.h>
#define GET_BIT(N,BIT)		((N>>BIT)&1)

int return_SumOfDigits(int n)
{
	int i = 0;
	int size = 8*sizeof(n);
	int sum  = 0;
	for(i = 0; i < size; i++)
	{
		if(GET_BIT(n,i) == 1)
		{
			sum+=1;
		}
	}
	return sum;
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
	int n = 100;
	int x = 0;
	x     = return_SumOfDigits(n);
	printf("Sum of digits in the number %d = %d \n",n,x);
	
	
}