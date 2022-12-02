#include <stdio.h>

/**
 * program to enter the thrre name of the user
 * using the "gets" function.
 * the "scanf" only take a name and when the white space is entered, 
 * the compiller automatically enters the a null character.
 *
 * Author:Akong Rodney
 * Date:12/2/2022
 * Time:10:48 am
 */
int main()
{
	char name[30];
	printf("please enter your three names:\n");

	gets(name);
	printf("%s%,name);

	return (0);

}	
