#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * write a string into a file using the fputs function
 *
 * Author:Akong,Rodney
 * Date:12/11/2022
 * Time:5:45 pm
 *
 */
int main()
{
	FILE *ptr;
	char string[20];
	printf("please enter a string of 20 characters\n");
	fgets(string,20,stdin);

	ptr = fopen("secondfile.txt","w");

	fputs(string,ptr);
	fclose(ptr);

	return (0);
}
