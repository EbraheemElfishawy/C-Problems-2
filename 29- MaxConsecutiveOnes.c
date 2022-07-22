//Starting
#include<stdio.h>
#define GET_BIT(n,bit)		(n>>bit) & 1
int Count_Maxconsecutive_Ones(int n)
{
	int i 		  = 0;
	int count 	  = 0;
	int max_count = 0;
	for(i = 0; i < 32; i++)
	{
		if(GET_BIT(n,i))
		{
			count++;
			if(count > max_count)
			{
				max_count = count;
			}
		}
		else
		{
			count = 0;
		}
	}
	return max_count;
}
int main()
{
	// ob 0110 1110
	system("cls");
	int x = 0b1111111110000011111000000;
	int max_count = Count_Maxconsecutive_Ones(x);
	printf("Max Ones Count = %d", max_count);
}