#include <stdio.h>

/**
 * write a program using the switch statement to determine 
 * if a character is a vowel or consonant.
 * Author: Akong Rodney Ntol
 * Date:11/29/2022
 * Time:1:11am
 */
int main()
{
	char mn;
	printf("please enter a character:\n");
	scanf("%d",&mn);
	switch (mn)
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
			printf("the character entered is a vowel\n");
		default :
			printf("the character entered is a consonant:\n ");
	}
	printf("end of program");
}
