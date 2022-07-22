//Starting
#include<stdio.h>
#include<stdlib.h>
int factorial(int n)
{	
	int fact = 1;
	if(n == 0)
	{
		return 1;
	}
	while(n>0)
	{
		fact = fact * n;
		n--;
	}
	
	return fact;
}
int factorial_WithRecursion(int n)
{
	if(n>=1)
	{
		return n* factorial_WithRecursion(n-1);
	}
	if(n == 0)
	{
		return 1;
	}
}
int main()
{
	system("cls");
	printf("\
	#############################################\n\
	# This code is made by: Ebraheem El-Feshawy #\n\
	# Description:Factorial                     #\n\
	# Date       :                              #\n\
	#############################################\n\n\n");
	int x = factorial(5);
	printf("Factoial without recursion = %d\n",x);
	int y = factorial_WithRecursion(5);
	printf("Factoial with recursion    = %d",y);
	
}