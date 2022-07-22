//Starting
#include<stdio.h>
#include<stdlib.h>
int swap_3DigitsCyclic(int n)
{
	int i = 0;
	int first_digit  = 0;
	int second_digit = 0;
	int third_digit  = 0;
	int temp 		 = 0;
	first_digit  = (n)%10;
	second_digit = (n%100)/10;
	third_digit  = (n/100);
	
	temp = first_digit;
	first_digit = second_digit;
	second_digit = temp;
	
	temp = first_digit;
	first_digit = third_digit;
	third_digit = temp;
		
	n = third_digit*100 + second_digit*10 + first_digit;
	
	return n;
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
	
	int x = 0;
	x     = swap_3DigitsCyclic(123);
	printf("Swapped x = %d", x);
	
}