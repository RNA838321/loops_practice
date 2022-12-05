#include <stdio.h>

/**
 * program on function pointer.
 *
 * a function pointer like every other pointer stores the address
 * of a point.
 *
 * Author:Akong Rodney
 * Date:12/5/2022;
 * Time:11:50pm
 */
int sum(int, int);

void main()
{
	int a,b;
	printf("please enter two integers a and b");

	scanf("%d%d",&a,&b);

	int s = 0;

	int (*ptr)(int , int) = &sum;

	s = (ptr)(int,int);
	printf("%d\n",s);

}
int sum(int a, int b)
{

	return (a + b);
}
