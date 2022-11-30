#include <stdio.h>

/**
 * write a program that sum the number of given integers and skips when
 * a negative value is entered
 *
 * to carry out this, the continue statement comes in handy
 *
 * Author:Akong Rodney Ntol
 * Date: 11/30/2022
 * Time: 11:26 am
 */

int main()
{
	int m,i,sum = 0;
	for (i = 0; i <=8; i++)
	{
		printf("please enter integers:\");
		scanf("%d",&m);

		if ( m < 0)
		{
			printf("you have entered a negative number, please enter a positive value.");
			
			continue;
		}
		
		sum = sum + m;
	}
	printf("%d",sum);

	return (0);
}
