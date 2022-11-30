#include <stdio.h>

/**
 * write a program taht ask the use to enter 
 * certain number of integers till a negative
 * value is enter, then print the sum.
 *
 * Author:Akong Rodney
 * Date: 11/30/2022
 * Time:9:10 am
 */
int main()
{
	int a,i,sum = 0;

	for (i = 0; i <=10; i++)
	{
		printf("please enter an intere:\n");
		scanf("%d",&a);
		
		if (a < 0)
		{
			break;
		}
		sum = sum + a;
	}
	printf("the number less than 0 = %d\tthe sum =%d",a,sum);

	return (0);
}
