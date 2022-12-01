#include <stdio.h>

/**
 * write a program to to accept matrix from a
 * user and print the sum of the matrix.
 *
 * Author:Akong Rodney
 * Date:12/1/2022
 * Time:9:29 am
 */
int main()
{
	int array[3][4],i,j,sum = 0;

	printf("please enter the values of the matrix:\n");
	/**
	 * using the for loop to accept data from the user
	 * with the help of the scanf function.
	 */
	for (i = 0; i < 3; i++)
	{
		/**
		 * the outer for loop takes input for the rows
		 */
		for (j = 0; j < 4; j++)
		{
			/**
			 * the inner loop takes input for thr columbs*/
			scanf("%d",&array[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j =0; j < 4; j++)
		{
			printf("%d\t",array[i][j]);
			sum = sum + array[i][j];
		}
		printf("\n");
	}
	printf("%d\n",sum);

	return (0);
}
