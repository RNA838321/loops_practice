#include <stdio.h>

/**
 * write a program to check if a charac ter entered is a vowel or
 * consonant using the if else statement.
 * Author:Akong Rodney
 * Date:11/29/2022
 * Time:1:41 am
 */
int main()
{
	char mn;
	printf("please enter a character");
	scanf("%c",&mn);
	if (mn == 'a')
	{
		printf("the character entered is a vowel:\n");
	}
	if (mn == 'e')
	{
		printf("the character entered is a vowel:\n");
	}
	if (mn == 'i')
	{
		printf("the character entered is  vowel:\n");
	}
	if (mn == 'o')
	{
		printf("the character entered is a vowel:\n");
	}
	if (mn == 'u')
	{
		printf("the charactere entered is a vowel:\n");
	}
	else
		printf("the charactere entered is a consonant:\n");

	return (0);
}
