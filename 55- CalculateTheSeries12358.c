//Starting
#include<stdio.h>
#include<stdlib.h>
void FibonaciSeries(int a, int b)
{
	int i = 0;
	int c = 0;
	for (i = 0; i < 10; i++)
	{	
		printf("%d,",a);
		c = a+b;
		a = b;
		b = c;
	}
}
int main()
{
	start();
	FibonaciSeries(1, 2);
	
	
}

void start(void)
{
	system("cls");
	printf("\
	#############################################\n\
	# This code is made by: Ebraheem El-Feshawy #\n\
	# Description:                              #\n\
	# Date       :                              #\n\
	#############################################\n\n\n");
}