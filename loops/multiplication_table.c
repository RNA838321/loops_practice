#include <stdio.h>

/**
 * write a program that prints the multiplication
 * table of a number.
 * Author: Akong Rodney
 * Date:11/30/2022
 * Time:3:22 am
 *
 */
int main()
{
	int i,a,number;
	printf("please enter a number:\n);
	scanf("%d",&number);

	for (i = 1; i < 11; i++)
	{
		a = number * i;
		printf("%d * %d = %d\n",number,i,a);
	}
	return (0);
}
