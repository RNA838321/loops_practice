#include <stdio.h>

/**
 * program to multiply matrix.
 * note: arrays can only be multiplied if 
 * the column of the first array == the row of the secod array.
 *
 * Author:Akong Rodney
 * Date:12/2/2022
 * Time:12:53 am
 */
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum = 0;
	printf("please enter the values for the first matrix:\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("please enter the values for the second matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("d",&b[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
				sum = 0;
				/**
				 * a third variable k is used for the third
				 * loop for the increament of rows and
				 * columbs.
				 */

			for (k = 0; k < 3; k++)
			{
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;
			
			printf("\nsum of %d = %d",i,c[i][j]);
		}
	}

	return (0);
}
