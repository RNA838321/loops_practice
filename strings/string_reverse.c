#include <stdio.h>
#include <string.h>

/**
 * program to reverse a string
 * using logic.
 *
 * Author:Akong Rodney.
 * Date:12/3/2022
 * Time:2:34
 */
int main()
{
	char name[20];
	char mn;
	int number,i;

	puts("please enter a string");
	gets(name);

	number = strlen(name);
	for (i = 0; i < number/2; i++)
	{
		mn = name[i];

		name[i] = name[number-1-i];

		name[number-1-i] = mn;
	}
	printf("%s",name);

	return (0);
}
