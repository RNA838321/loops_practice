#include <stdio.h>
#include <stdlib.h>

/**
 * write a program that writes a single character into a file
 *
 * Author:Akong,Rodney
 * Date:12/11/2022
 * Time:5:24 pm
 *
 */
int main()
{
	FILE *ptr;
	int ch;

	ptr = fopen("hellow.txt","w");

	ch = 'r';
	//putchar('\n');

	fputc(ch,ptr);
	putchar('\n');

	return (0);
}
