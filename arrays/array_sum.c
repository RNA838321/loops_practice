#include <stdio.h>

/**
 * write a program that computes the sum of two arrays,
 * and add the sum to a third array.
 *
 * Author:Akong Rodney
 * Date:12/1/20222
 * Time: 12:39 am
 */
int main()
{
	int arr1[6],arr2[6],sumArr[6],i;
	/** using the forloop and the
	 * scanf function to that input from the use
	 */
	printf("please enter the values for the first arrays:\n");
	for (i = 0; i < 6; i++)
	{
		scanf("%d",&arr1[i]);
	}

	printf("enter valuse for the second arrays:\n");
	for (i = 0; i < 6; i++)
	{
		scanf("%d",&arr2[i]);
	}
	/**
	 * a third for loop is require for the 
	 * summation and assignment of the arrays two arrays
	 * to the third.
	 */
	for (i =o; i < 6; i++)
	{
		sumArr[i] = arr1[i] + arr2[2];
	}
	/**
	 * the fourth for loop is for the 
	 * printing of the sum and index.
	 */
	for (i = 0; i < 6; i++)
	{
		printf("the sum of the arrays of index %d = %d\n",i,sumArr[i]);
	}
	return (0);
}
