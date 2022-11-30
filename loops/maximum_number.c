#include <stdio.h>

/**
 * write a program that compares the maximum of three numbers
 * Author:Akong Rodney
 * Date:11/28/2022
 * Time:11:45 pm
 */
int main()
{
	int a,b,c;
	printf("please enter three numbers a,b,c.:\n");
	scanf("%d%i%d",&a,&b,&c);
	/**
	 * using the conditional if else 
	 * statement to compare the values
	 */
	if (a > b)
	{
		if (a > c)
		{
			printf("a is the maximum number");
		}
		else 
			printf(" c is the maximum number");
	}
	else
		printf("b is the maximum number");

	return (0);
}
