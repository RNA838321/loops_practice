#include <stdio.h>

/**
 * program to convert alphabets from lower to uppercase
 * and vice versa.
 *
 * Author: Akong,Rodney
 * Date:12/3/2022
 * Time:3:15 am
 *
 */
int main()
{
	char name[23];
	int i;

	puts("please enter string");

	/**
	 * the "gets" function enables you to enter
	 * a string with spaces unlike its counterpart the "scanf" function.
	 */
	gets(name);

	for (i =0; name[i] !='\0'; i++)
	{
		if (name[i] >= 65 && name[i] <= 90)
		{

			name[i] = name[i] + 32;

		}
	
	}
	printf("%s\n",name);

	return (0);
}
