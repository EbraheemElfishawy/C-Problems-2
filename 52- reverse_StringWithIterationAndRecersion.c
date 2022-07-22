//Starting
#include<stdio.h>
#include<stdlib.h>
char newarray[19]={0};
int i=0;
void reverse_StringWithIteration(char *string, int size)
{
	int i = 0;
	int j = size -1;
	char temp = '0';
	char *temp_string = (char*)malloc(size*sizeof(char));
	for (i = 0; i < size ; i++)
	{
		temp_string[i] = string[j];
		j--;
	}
	for (i = 0; i < size ; i++)
	{
		string[i]      = temp_string[i];
	}
	free(temp_string);
}

void reverse_StringWithRecursion(char *string,int size)
{	
	while (string[i] != '\0')
   {	
		newarray[i++]= string[--size];
       reverse_StringWithRecursion(string,size);
   }
}
int main()
{
	system("cls");
	printf("\
	#############################################\n\
	# This code is made by: Ebraheem El-Feshawy #\n\
	# Description:                              #\n\
	# Date       :                              #\n\
	#############################################\n\n\n");
	char string[] = "EbraheemElFESHAWY";
	int size      = (sizeof(string)/sizeof(*string))-1;
	printf("size = %d\n",size);
	printf("string = %s\n",string);
	reverse_StringWithIteration(string,size);
	printf("reverse_StringWithIteration string = %s\n",string);
	char string2[] = "EbraheemElFESHAWY";
	int size2      = (sizeof(string2)/sizeof(*string2))-1;
	reverse_StringWithRecursion(string2,size2);
	printf("reverse_StringWithRecursion string = %s\n",newarray);
}