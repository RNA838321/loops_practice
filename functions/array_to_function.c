#include <stdio.h>

/**
 * program that accepts and array
 * then returns a pointer
 *
 * Author:Akong Rodney
 * Date:12/5/2022
 * Time 10:45
 *
 *
 */
int * pointerarray(int []);

int main()
{
	int a[] = {2,4,3,5,6,5,8,79};
	int *p;

	p = pointerarray(a);

	printf("%d\n",*p);

	return (0);
}
int* pointerarray(int a[])
{
	a = a + 2;
	return a;
}
