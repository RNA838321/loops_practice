#include <stdio.h>

/**
 * program that takes a users name and print the output
 *
 * Author: Akong Rodney
 * Date:12/2/2022
 * Time: 10:26 am
 */
int main()
{
	char name[10];
	printf("enter name");
	scanf("%s",name);

	/**
	 * note that the scanf is taking input
	 * and storing in the array name wihout the 
	 * address (&) sign, this is because the
	 * array name carries the case adrress of the first character
	 * of the name,
	 */
	printf("%s",name);

	return (0);
}
