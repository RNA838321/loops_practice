#include <stdio.h>
#include <stdlib.h>

/**
 * program to read a string
 *
 * Author: Akong Rodney 
 * Date: 12/11/2022
 * time: 11:04 pm
 *
 */
int main()
{
	FILE *handle;
	char ch;

	handle = fopen("string.txt","r");
	if(handle == NULL)
	{
		printf("error");
		exit(1);
	}

	while(!feof(handle))
	{
		ch = fgetc(handle);
		printf("%c",ch);
	}
	fclose(handle);

	return (0);
}
