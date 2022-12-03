#include <stdio.h>
#include <string.h>

/**
 * program to compare two strings
 * using predefined functions.
 * Author:Akong Rodney
 * Date:12/3/2022
 * Time:12:57 am
 *
 */
int main()
{
	char s1[12],s2[14];
	int number;

	printf("please enter string one:\n");
	gets(s1);

	printf("please enter string two:\n");
	scanf("%d",s2);

	value = strcmp(s1,s2);
	if(value == 0)
	{
		printf("the strings are the same");
	}
	else
	{
		printf("the values are not the same");
	}
	printf("%d",value);

	return (0);
}
