#include <stdio.h>
#include <stdlib.h>

/**
 * program to write a character into a file
 *
 * Author:Akong, Rodney
 * Date:12/11/2022
 * Time:10:46 pm
 *
 */
int main()
{
	FILE *ptr;
	char ch;

	ptr = fopen("hellow.txt","r");

	if (ptr == NULL)
	{
		printf("error");
		exit(1);
	}
	ch = fgetc(ptr);
	printf("%c\n",ch);
	fclose(ptr);

	return (0);
}
