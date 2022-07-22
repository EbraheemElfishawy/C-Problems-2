#include<stdio.h>
void check_StringMirroredOrNot(char *arr, int size)
{
	int i = 0;
	int j = 0;
	j     = size - 1;
	int count = 0;
	for(i = 0; i < size/2 ; i++)
	{
		if (arr[i] == arr[j])
		{
			count++;
		}
		j--;
	}
	if (count == size/2)
	{
		printf("Mirrored");
	}
	else
	{
		printf("Not Mirrored");
	}
}
int main()
{
	char string[] = {"ABCFFCBA"};
	int size = sizeof(string)/ sizeof(*string);
	check_StringMirroredOrNot(string,8);
	
}