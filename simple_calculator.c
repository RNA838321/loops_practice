#include <stdio.h>

/**
 * write a simple calculator using the switch statement
 * Author:Akong Rodney Ntol
 * Date:11/29/2022
 * Time:4:24 pm
 */
int main()
{
	int a,b,div,add,sub,mod,mul;
	char operator;
	printf("enter the operator:\n");
	scanf("%d",&operator);
	printf("enter two values a and b for the operants");
	scanf("%d%d",&a,&b);

	switch(operator)
	{
		case '+':
			add = a + b;
			printf("%d",add);
			break;
		case '/':
			div = a / b;
			printf("%d",div);
			break;
		case '*':
			mul = a * b;
			printf("%d",mul);
			break;
		case '%':
			mod = a % b;
			printf("%d",mod);
			break;
		case '-':
			sub = a - b;
			printf("%d",sub);
			break;
		default:
			printf("enter a valid operator");
	}
	return (0);
}
