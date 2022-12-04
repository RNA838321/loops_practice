#include <stdio.h>

/**
 * write a program that passes arguments to a function via call
 * by referenc
 *
 * Author:Akong Rodney
 * Date:12/4/2022
 * Time:11:47 am
 *
 */

void call_by_reference(int *, int *);

int main()
{
	int a =8, b = 12;

	printf("value of a = %d, value 0f b = %d\n",a,b);

	call_by_reference(&a,&b);

	printf("new value of a = %d\tnew nalue of b = %d\n",a,b);

	return (0);
}
void call_by_reference(int *x, int *y)
{
	*x = 20;

	printf("%d  %d\n",*x,*y);
}
