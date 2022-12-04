#include <stdio.h>

/**
 * write a program that take inputs from a user and send the arguments to
 * a function.
 *
 * Author:Akong Rodney
 * Date:12/4/2022
 * Time:10:59
 *
 */
void sum(int, int);

int main()
{
	int a,b;
	printf("enter two ineger values a and b\n");
	scanf("%d%d",&a,&b);

	sum(a,b);

	return (0);
}
void sum(int x, int y)
{
	int sum = 0;

	sum = x + y;

	printf("%d",sum);
}
