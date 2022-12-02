#include <stdio.h>

/**
 * program to find the length of a string 
 * without using the predefined function
 *
 * Author:Akong Rodney
 * Date:12/2/2022
 * Time:12:34 pm
 *
 */
int main()
{
	char name[20];
	int count =0;
	int i = 0;

	puts("enter your name");
	gets(name);

	while (name != '\0')
	{
		count++;
		i++;
	}
	printf("%d",count);

	return (0);
}
