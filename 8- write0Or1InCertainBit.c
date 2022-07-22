#include<stdio.h>
void modify_bit(int *number, int bit_loc, int bit_val)
{	
	if (bit_val == 1)
	{
		*number |= (1<<bit_loc);
	}
	else
	{
		*number &= ~(1<<bit_loc);	
	}
}
int main()
{
	int x = 0;
	modify_bit(&x,30,1);
	printf("x = %d", x);
}