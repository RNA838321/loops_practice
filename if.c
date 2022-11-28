#include <stdio.h>

/**
 * program to test certain age range of a person using the if condition
 * Author:Akong Rodney
 * Date: 28/11/2022
 * Time:8:48pm
 *
 */
int main()
{
	int age;
	printf("please enter your age:\n");
	scanf("%d",&age);
	/*using the if condition*/
	
	if ( age > 25)
	{
		printf("your age is %d\n",age);
		printf("you can go coffee with me\n");
	}
	printf("it is time to go home");

	return (0);
}
