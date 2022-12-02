#include <stdio.h>
#include <string.h>

/**
 * program to concatinate two strings using predefined function
 *
 * Author:Akong Rodney
 * Date:12/.2/2022
 * Time:2:57 pm
 *
 */
int main()
{
	char name[30],name0[12];

	puts("enter first name:");
	gets(name);

	puts("enter second name:");
	gets(name0);

	strcat(name,name0);

	puts(name);

	return (0);
}
