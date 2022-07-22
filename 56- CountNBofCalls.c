//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
int c = 0;
int count = 0;
int FibonaciSeries(int a, int b)
{
	count ++;
	printf("%d,",a);
	c = a+b;
	a = b;
	b = c;
	if(a > 100)
	{
		return count;
	}
	FibonaciSeries(a,b);

}
int main()
{
	start();
	FibonaciSeries(1, 2);
	printf("\nNumber of calls = %d\n,",count);
	
	
	
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