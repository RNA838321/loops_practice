#include <stdio.h>
#include <string.h>

/**
 * program to determine the length of 
 * a string using a predefined function.
 *
 * Author:Akong Rodney
 * Date:12/2/2022
 * Time:12:01pm
 */
int main()
{
	char name[30],x;
	printf("enter your name:\n");

	gets(name);

	x = strlen(name); /** strlen is a predefined function
			    to determine the lenth of a string.
			    and it is stored in the "string.h" header file.*/

	printf("%d",x);

	return (0);

}
