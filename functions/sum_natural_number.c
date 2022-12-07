#include <stdio.h>

/**
 * sum of natural number using recursive function
 *
 * Author:Akong Rodney
 * Date:12/7/2022
 * Time:2:33pm
 */
int sum(int x);

int main()
{
	int a;
	printf("enter a number\");
	scanf("%d",&a);

	int b;

	b = sum(a);
	printf("%d",b);

	return (0);
}
int sum(int b)
{
	int s = 0;
	if (b == 1)
	{
		return b;
	}
	else
	{
		s = b + sum(b-1);
		return s;
	}
}
