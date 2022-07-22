#include<stdio.h>
#GET_BIT(number,bit_no)		( (number>>bit_no) & 1)
int main()
{
	int number 		   = 0b1110011001;
	int no_of_bits = 8*sizeof(number);
	int ones_count = 0;
	int i = 0;
	
	for (i = 0; i < no_of_bits; i++)
	{
		if ( GET_BIT(number,i) == 1)
		{
			ones_count++;
		}
	}
	printf("ones count = %d \n", ones_count);
	
}