//Starting
#include<stdio.h>
#include<stdlib.h>
#define GET_BIT(N,BIT)		((N>>BIT)&1)

void print_BinaryOfInteger(int n)
{
	int size = 8*sizeof(n);
	int i    = 0;
	printf("The binary representation of %d is 0b",n);
	
	for(i = size-1; i >= 0 ; i--)
	{
		if(GET_BIT(n,i) == 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
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
	
	print_BinaryOfInteger(100);
	
}