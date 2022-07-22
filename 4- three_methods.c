#include <stdio.h>

#define add	1
#define	sub	2
#define mul	3
#define div	4

float generic_calc(float operand1, float operand2, int operation)
{	
	float result = 0;
	switch (operation)
	{
		case 1 : result = operand1+operand2; break;
		case 2 : result = operand1-operand2; break;
		case 3 : result = operand1*operand2; break;
		case 4 : result = operand1/operand2; break;
		default: result = -1; 				 break;
	}
	
	
	return result;
}



int main()
{
	float operand1  = 0;
	float operand2  = 0;
	int   operation = 0;
	float result	= 0;
	printf("Enter the required operation number:\n Addition ==> press1\nSubtraction ==> press2\nMultiplication ==> press3\ndivision ==> press4\n");
	scanf("%d",&operation);
	printf("Enter the first operand\n");
	scanf("%f",&operand1);
	printf("Enter the second operand\n");
	scanf("%f",&operand2);
	
	result = generic_calc(operand1, operand2, operation);
	printf("The result is = %.2f",result);

}