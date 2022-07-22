#include<stdio.h>

unsigned char add(unsigned char n1,unsigned char n2)
{
	if ((n1<=255)&&(n2<=255))
	{
		return n1+n2;
	}
	else
	{
		return 0;
	}
}

int main()
{
	unsigned char n1     = 2;
	unsigned char n2     = 4;
	unsigned char result = add(n1,n2);
	printf("%d",result);
}