//Starting
#include<stdio.h>
#include<stdlib.h>
void Check_Endiannes(void)
{
	int x = 1;
	//char *ptr = (char*)&x;
	
	if(x>>0)
	{
		printf("Your machine is little endian");
	}
	else
	{
		printf("Your machine is big endian");
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
	#############################################\n\n\n");
	
	Check_Endiannes();
	
}