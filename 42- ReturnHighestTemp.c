//Starting
#include<stdio.h>
#include<stdlib.h>
void ReturnHighestTemp(void)
{
	int temp 	 = 0;
	int max_temp = 0;
	while(1)
	{
	printf("======\nEnter current temp\n======\n==>  ");
	scanf("%d",&temp);
	if(temp >= max_temp)
	{
		system("cls");
		max_temp = temp;
		printf("This is new max temperature and it is = %d\n", max_temp);
	}
	else
	{
		system("cls");
		printf("This is no the max temperature.\n");
		printf("Max temperature is = %d\n", max_temp);
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
	ReturnHighestTemp();
	
}