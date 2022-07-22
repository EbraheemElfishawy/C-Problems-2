//Starting
#include<stdio.h>
#define GET_BIT(n,bit)		(n>>bit) & 1
void Swap4BitsBy4Bits(unsigned char *N)
{
	unsigned char temp1 = *N;
	unsigned char temp2 = *N;
	temp1 = *N>>4;
	temp2 = *N<<4;
	*N = temp1 | temp2;
	printf("temp1 = %p\n",temp1);
	printf("temp2 = %p\n\n",temp2);

	
}
int main()
{
	system("cls");
	
	unsigned char a = 0xAB;
	printf("a Before = %p\n\n",a);
	Swap4BitsBy4Bits(&a);
	printf("a After  = %p\n",a);
}