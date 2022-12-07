#include <stdio.h>

/**
 * write a program using recursing to look for the sum of
 * n natural number';
 *
 * Author:Akong Rodney 
 * Date:12/7/2022
 * Time:2:02
 */
void display(int);

int main()
{
	int a;
	printf("enter a number\");
	scanf("%d",a);

	display(a);

	return (0);
}
void display(int x)
{
	if (x == 0)
	{
		return x;
	}
	else
	{
		printf("%d",x);
		display(x-1);
		printf("%d",x);
	}
}
