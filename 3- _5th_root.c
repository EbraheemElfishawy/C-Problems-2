#include<stdio.h>

#define nth_root 	 5
int main()
{
	int number = 0;
	int temp_number = 1;
	int _5th_root = 1;
	int i = 0;
	printf("Enter a number to get 5th root\n");
	scanf("%d", &number);
	
	for(_5th_root = 1; _5th_root < 10; _5th_root++)
	{	
		temp_number = _5th_root*_5th_root*_5th_root*_5th_root*_5th_root;
		if (number == temp_number)
		{
			printf("The 5th root is : %d",_5th_root);
			break;
		}
		
	}
	
}