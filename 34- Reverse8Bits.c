//Starting
#include<stdio.h>
void Reverse8Bits(unsigned char *N)
{
	unsigned char i = 0;
	unsigned char j = 7;
	unsigned char x = 0;
	for(i = 0; i < 8; i++)
	{
		if ((*N>>i) & 1)
		{
			x = x|(1<<j);
		}
		else
		{
			x = x& (~(1<<j));
		}
		j--;
	}
	*N = x;
}
int main()
{
	system("cls");
	unsigned char x = 0b11001110; // 0X5F ===> 0b11111010 = 0XFA
	printf("Before x = %x\n",x);
	Reverse8Bits(&x);
	printf("After x = %x",x);
}