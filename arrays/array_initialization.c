#include <stdio.h>

/**
 * write a program that initializes 2D arrays 
 * at run time, and prints the out put
 * Author:Akong Rodney 
 * Date:12/1/2022
 * Time:1:57 am
 */
int main()
{
	int array[2][3],i,j;
	/**
	 * the array decleared above has 2 row
	 * and 3 columbs.
	 * a nested for loop will be
	 * required to take input and store them
	 * in the two d array.
	 *
	 * the first loop takes input for the colums,
	 * the inner loop of the first loop
	 * takes inputs for the columbs.
	 */
       printf("please enter the array values:\n");
	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			/**
			 * this inner loop takes values fro columb*/
			scanf("%d",&array[i][j]);
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j <3; j++)
		{
			printf("%d\n",array[i][j]);
		}
	}
	return (0);
}	
