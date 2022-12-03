#include <stdio.h>
#include <string.h>

/**
 * write a program to compare two strings withpout using predefined functions
 *
 * Author:Akong Rodney
 * Date:3/12/2022
 * Time:1:27 am
 *
 */
int main()
{
	char s1[13],s2[12];
	int i,flag;

	printf("please enter first string:\n");
	gets(s1);

	printf("please enter second string:\n");
	gets(s2);

	for ( i = 0; s1[i]!='\0' || s2[i]!='\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flad = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("stringss are not the same:\n);
	}
	else
		printf("strings are the same:\n");
	
	return (0);
}
