#include <stdio.h>

/**
 * write a program with thw while loop to add the sum of integers
 * till a negative number is entered
 * @note, the while loop is used when the given number of integers to ne entered
 * is not known.
 *
 * while for cases whe the number of integers to be entered is known,the for loop 
 * is preferrable.
 *
 * Author:Akong Rodney
 * Date:11/30/2022
 * Time:9:37 am
 *
 */
int main()
{
	int a, sum = 0;
	while (1)
	{
		printf("please enter integers:\n");
		scanf("%d",&a);

		if ( a < 0)
		{
			break;
		}

		sum = sum + a;
	}
	printf("%d",sum);

	return (0);
}
