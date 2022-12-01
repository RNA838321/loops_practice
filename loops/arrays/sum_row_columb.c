#include <stdio.h>

/**
 * a prograam the prints the sum and row of a 3x3 matrix.
 *
 * Author:Akong, Rodney Ntol
 * Date: 12/1 2022
 * Time: 11:40 am
 *
 */
int main()
{
	int a[3][3],i,j,sr = 0,sc = 0;
	printf("enter the values for the matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for ( i = 0; i < 3; i ++)
	{
		sr = 0;
		sc = 0;
		/**
		 * the sum or row and columb(sr,sc)
		 * are both initialize at the outer loop
		 * so that their sum will always be equal to 
		 * zero after the completion of the sum
		 * in the first interation, the value will not be 
		 * addwd to another interation
		 */
		for (j = 0; j < 3; j++)
		{
			sr = sr + a[i][j];
			sc = sc + a[j][i];

			/**
			 * to calculate the sum of the 
			 * the colums, the columns and rows are transposed
			 */
		}
		printf("sr = %d ,sc = %d\n",sr,sc);
	}
	return (0);
}
