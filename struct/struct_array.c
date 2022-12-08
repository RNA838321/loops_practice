#include <stdio.h>

/**
 * write a struct program to accept inputs for 3 students.
 *
 * Author:Akong Rodney
 * Date:12/8/2022
 * Time:12/8/2022
 *
 */
struct student
{
	int age;
	char name[18];
	char sex[10];
	float marks;
};

int main()
{
	struct student rodney[3];
	int i;
	
	printf("enter information of students");
	for (i = 0; i < 3; i++)
	{
		scanf("%d%s%s%f",&rodney.age,rodney.name,rodney.sex,&rodney.marks);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d%s%s%f\n",rodney[i].age,rodeny[i].name,rodney[i].sex,rodney[i].marks);
	}

	return (0);
}
