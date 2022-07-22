//Starting
#include<stdio.h>
void Print2DArray(int *arr,int row,int col)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("Array2D [%d][%d] = %d\n",i,j,*((arr+i*col) + j));
		}
	}
}
int main()
{
	system("cls");
	int arr[2][3] = {{1,2,3},{4,5,6}};
	Print2DArray((int*)arr,2,3);
	printf("arr addres = %p \n",arr);
	printf("arr+1 addres = %p \n",arr+1);
	printf("arr+1 addres = %p \n",(int*)arr+1);
}

/*
void Print2DArray(int *arr,int row,int col)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < row*col; i++)
	{
		
			printf("Array2D  = %d\n",*(arr+i));
		
	}
}
int main()
{
	system("cls");
	int arr[2][3] = {{1,2,3},{4,5,6}};
	Print2DArray((int*)arr,2,3);
}
*/