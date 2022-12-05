#include <stdio.h>
#include <string.h>

/**
 * write a program that passes two string to function
 * and prints the length of that string.
 *
 * Author:Akong,Rodney
 * Date:12/5/2022
 * Time:12:00pm
 *
 */
void modify(char [], char []);

void main()
{
	char name[24];
	char name1[13];

	puts("enter first name");
	gets(name);

	puts("enter second name");
	gets(name1);

	modify(name,name1);
}
void modify(char firstname[], char secondname[])
{
	int lent;
	lent = strlen(firstname);

	printf("%d\n",lent);

	secondname[5] = 't';

	printf("%s",secondname);
}
