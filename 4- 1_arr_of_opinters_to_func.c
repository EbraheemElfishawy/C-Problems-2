
#include <stdio.h>

float add(float operand1, float operand2)
{
	float result = 0;
	result = operand1 + operand2;
	return result;
}
float sub(float operand1, float operand2)
{
	float result = 0;
	result = operand1 - operand2;
	return result;
}
float mul(float operand1, float operand2)
{
	float result = 0;
	result = operand1 * operand2;
	return result;
}
float div(float operand1, float operand2)
{
	float result = 0;
	if(operand2 == 0)
	{
		result = -1;
	}
	else
	{
		result = operand1 / operand2;
	}
	return result;
}

int main()
{
	float result = 0;
	
	float (*calculator_ptr[4])(float operand1, float operand2) = {add,sub,mul,div};
	
	result = (*calculator_ptr[3])(2,0);
	printf("Result = %.2f", result);
	
}