#include <stdio.h>

/**
 * function that takes input from the
 * user and sum the values together.
 *
 * Author:Akong Rodney
 * Date:12/4/2022
 * Time:10:25 am
 *
 */

void sum();

int main()
{
	
	sum();
	return (0);
}
void sum()
{
	int a,b,sum = 0;
	printf("please enter two numbwers a and b");
	scanf("%d%d",&a,&b);

	sum = a + b;

	printf("%d",sum);
}
