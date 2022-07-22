//Starting
#include<stdio.h>
#include<stdlib.h>
void ReturnMinNumber(void)
{
	int number 	   = 0;
	int min_number = 0;
	while(1)
	{
	printf("======\nEnter current number\n======\n==>  ");
	scanf("%d",&number);
	if(number <= min_number)
	{
		system("cls");
		min_number = number;
		printf("This is new min number and it is = %d\n", min_number);
	}
	else
	{
		system("cls");
		printf("This is no the min number.\n");
		printf("Min number is = %d\n", min_number);
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
	ReturnMinNumber();
	
	
}