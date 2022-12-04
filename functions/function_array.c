#include <stdio.h>

/**
 * program that passes an array (marks of students) to a function and calculates its sum.
 *
 * Author:Akong Rodney
 * Date:12/4/2022;
 * Time:11:57pm
 *
 */
int avg(int [], int);

int main()
{
	int marks[] = {7,8,9,3,4,6,3}
	int average,size;

	size = sizeof(marks)/sizeof(marks[0]);
	/**
	 * when passing an array to a function,
	 * the array name is need and the size of the array
	 */

	average = avg(marks,size);

	printf("the average = %d",average);

	return (0);
}
int avg(int marks[], int b)
{
	int i, sum = 0,aveg;

	for (i = 0; i < size; i++)
	{
		sum = sum + marks[i];

	}
	aveg = sum/b;

	return (aveg);
}
