#include <stdio.h>

/**
 * write a program that prints the alphabet in lower case 10 times
 * Author:Akong Rodney 
 * Date:11/30/2022
 * Time:12:38 pm
 */
int main()
{
	int i;
	char j = 'a';
	char k = 'z';
	/*using the nested for loop*/
	for (i = 0; i <11; i++)
	{
		for (j = 'a'; j <= k; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
	return (0);
}
