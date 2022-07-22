#include<stdio.h>

int* return_SumAndMul(int operand1, int operand2)
{
	static int result_array[2] = {0};
	int sum = 0;
	int mul = 0;
	sum = operand1 + operand2;
	mul = operand1 * operand2;
	
	*(result_array +0) = sum;
	*(result_array +1) = mul;
	
	return result_array;
}

int main()
{	
	int x = 5;
	int y = 2;
	int sum = 0;
	int mul = 0;
	int *ptr_sum = return_SumAndMul(x,y);
	sum = *(ptr_sum +0);
	mul = *(ptr_sum +1);
	
	printf("sum = %d, mul = %d\n",sum,mul);
}