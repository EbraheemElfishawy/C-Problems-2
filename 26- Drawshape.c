//Starting
#include<stdio.h>
void draw_star(int before);
void draw_row(int before,int middle, int after);

#define X_SHAPE			1
#define PYRAMID_SHAPE	2	
/*choose the shape you want:
					1- X_SHAPE
					2- PYRAMID_SHAPE
*/
#define CHOSEN_SHAPE	PYRAMID_SHAPE

#define X_SIZE			20
#define PYRAMID_SIZE	10



int main()
{
#if CHOSEN_SHAPE == X_SHAPE
	#define SIZE	X_SIZE // must be even number
	system("cls");
	
	int i = 0;
	int j = SIZE;
	int k = 0;
	
	while(j>=1)
	{
		draw_row(i,j-1,k);
		i++;
		j-=2;
		k++;
	}
	draw_star(i);
	printf("\n");
	i = SIZE/2;
	j = 1;
	k = SIZE/2;
	while(i>0)
	{
		draw_row(i-1,j,k-1);
		i--;
		j+=2;
		k--;
	}
#elif CHOSEN_SHAPE == PYRAMID_SHAPE
	#define SIZE	PYRAMID_SIZE // must be even number
	system("cls");
	
	int i = 0;
	int j = 0;
	for(i = 0; i <SIZE; i++)
	{
		for(j = i; j < SIZE; j++)
		{
			printf(" ");
		}
		for(j = 1; j < 2*i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
#endif
	
}

void draw_star(int before)
{
	int i = 0;
	for(i = 0; i < before; i++)
	{
		printf(" ");
	}
	printf("*");
}
void draw_row(int before,int middle, int after)
{
	int i = 0;
	for(i = 0; i < before; i++)
	{
		printf(" ");
	}
	printf("*");
	for(i = 0; i < middle; i++)
	{
		printf(" ");
	}
	printf("*");
	for(i = 0; i < after; i++)
	{
		printf(" ");
	}
	printf("\n");
}