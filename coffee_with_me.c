#include <stdio.h>

/**
 * program to test the age of a person using the if else condition
 * Author:Akong Rodney Ntol
 * Date:11/28/2022
 *
 */
int main()
{
	int age;
	printf("please enter your age:\n");
	scanf("%d",&age);
	/*using the if conditional statement*/
	if (age > 25 && age < 40)
	{
		printf("your age is : %d\n",age);
		printf("please coffee with me\n");
	}
	else
	{
		printf("your age is : %d\n",age);
		printf("you have to go home\n");
	}
	printf("Thank you for cooperating.");
	
	return (0);
}
