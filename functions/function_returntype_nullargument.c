#include <stdio.h>

/**
 * program to reurn the sum of two numbers to the main function
 *
 * Author:Akong Rodney
 * DAte:12/4/2022
 * Time:12:39;
 *
 */
int sum();

int main()
{
	int s;

	s = sum();
	printf("sum is %d\n",s);

	return (0)
}
int sum()
{
	int m,n,sum=0;
	printf("please enter two values a and b\n");
	scanf("%d%d",&m,&n);

	sum = m + n;

	return sum;
}
