#include <stdio.h>
#include <string.h>

/**
 * program to concatinate a string without using the predefined function
 *
 * Author:Akong Rodney
 * Date:12/2/2022
 * Time:3:42pm
 *
 */
int main()
{
	char name[12],name1[6];
	int i,len1,len2;

	puts("enter the first name:");
	gets(name);

	printf("enter  the second name:\n");
	scanf("%s",name1);

	len1 = strlen(name);
	len2 = strlen(name1);
	
	for (i =0; i < len2; i++)
	{
		name[len1 + i] = name1[i];
	}
	printf("%s",name);

	return (0);
}
