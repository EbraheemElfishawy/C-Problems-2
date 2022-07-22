#include<stdio.h>

int swap1(int *ptr1, int *ptr2)
{
	int ptr_temp = 0;
	ptr_temp	  = *ptr1;
	*ptr1		  = *ptr2;
	*ptr2         =  ptr_temp;
}

int swap2(int *ptr1, int *ptr2)
{
	
	*ptr1  = *ptr1 + *ptr2;
	*ptr2  = *ptr1 - *ptr2;
	*ptr1  = *ptr1 - *ptr2;
}
int swap3(int *ptr1, int *ptr2)
{
	*ptr1  = *ptr1 * *ptr2;
	*ptr2  = *ptr1 / *ptr2;
	*ptr1  = *ptr1 / *ptr2;
	
}
int swap4(int *ptr1, int *ptr2)
{
	*ptr1  = *ptr1 ^ *ptr2;
	*ptr2  = *ptr1 ^ *ptr2;
	*ptr1  = *ptr1 ^ *ptr2;
	
}
#define SWAP5(N1,N2,TYPE)	TYPE temp=N1;N1=N2;N2=temp;

int main()
{
	int n1 = 2;
	int n2 = 4;
	
	swap1(&n1, &n2);
	printf("swap1=> n1 = %d, n2 = %d\n", n1,n2);
	swap2(&n1, &n2);
	printf("swap2=> n1 = %d, n2 = %d\n", n1,n2);
	swap3(&n1, &n2);
	printf("swap3=> n1 = %d, n2 = %d\n", n1,n2);
	swap4(&n1, &n2);
	printf("swap4=> n1 = %d, n2 = %d\n", n1,n2);
	SWAP5(n1, n2, int);
	printf("swap5=> n1 = %d, n2 = %d\n", n1,n2);
}