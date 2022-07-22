//Starting
#include<stdio.h>
void SwapTwoPointers(int **ptr_1, int **ptr_2)
{
	int *temp_ptr = NULL;
	temp_ptr = *ptr_1;
	*ptr_1   = *ptr_2;
	*ptr_2   = temp_ptr;
}
int main()
{
	system("cls");
	int x = 2;
	int y = 3;
	
	int *ptr_1 = &x;
	int *ptr_2 = &y;
	printf("ptr_1 = %p\nptr_2 = %p\n"  ,  ptr_1, ptr_2);
	printf("*ptr_1 = %p\n*ptr_2 = %p\n", *ptr_1,*ptr_2);
	SwapTwoPointers(&ptr_1, &ptr_2);
	printf("ptr_1 = %p\nptr_2 = %p\n"  ,  ptr_1, ptr_2);
	printf("*ptr_1 = %p\n*ptr_2 = %p\n", *ptr_1,*ptr_2);

}