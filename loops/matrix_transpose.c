#include <stdio.h>

/**
 * write a program to print the transpose of a matrix
 * Author:Akong Rodney
 * Date:12/1/2022
 * Time:10:32 am
 */
int main()
{
	int transpose[2][4],i,j;

	printf("enter values of matrix:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d",&transpose[i][j]);
		}
	}
	/**
	 * to transpose the matrix; the rows will be interchanged with the columbs,
	 * i.e, i will now be < 4 and j will be < 2.
	 * this way, the row and columbs will be interchanged.
	 */
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t",transpose[j][i];
		}
		printf("\n");
	}

	return (0);

}
