#include <stdio.h>
#include <stdlib.h>

/**
 * write a program to write a string into a file
 *
 * Author:Akong,Rodney
 * Date:12/11/2022
 * Time:5:30pm
 */
int main()
{
	FILE *pointer;

	pointer = fopen("string.txt","w");

	fprintf(pointer,"i am experimenting how to use the fprintf function\n");

	return (0);
}
