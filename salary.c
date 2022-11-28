#include <stdio.h>

/**
 * write a programe to check the salaries of employees in an organisation
 * if the age is > 50 and salary < 60000; I++ by 10000
 * if age is > 50 and salary is greater than 60000; I++ by 5000
 * else I++ by 3000
 *
 * Author:Akong Rodney Ntol
 * Date:11/28/2022
 * Time:11:08 pm
 */
int main()
{
	int age,salary;
	printf("please enter age and salary:\n);
	scanf("%d",&age,&salary);
	/* using the if else conditional statement*/

	if (age > 50)
	{
		if (salary < 6000o)
		{
			salary = salary + 10000;
			printf("%d",salary);
		}
		else
		{
			salary = salary + 5000;
			printf("%d",salary);
		}
	else
	{
		salary = salary + 3000;
		printf("%d",salary);
	}
	return (0);
}
