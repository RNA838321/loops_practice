#include <stdio.h>

/**
 * write a program on arrays that accepts inputs from the user and prints the result
 *
 * Author:Akong Rodney
 * Date: 11/30/2022
 * Time:11:52 pm
 */
int main()
{
	int a[7],i;
	printf("please enter values:\n");
	/*The for loop is used to access the various elements
	 * of an array,
	 * it is a vital tool for printing out arrays since it gives you access to teh index.
	 */
	for (i =0; i < 7; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i =0; i < 7; i++)
	{
		printf("%d",a[i]);
	}
	return (0);
}
