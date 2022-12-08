#include <stdio.h>

/**
 * write a program to initialize structs at run time.
 *
 * Author: Akong,Rodney
 * Date: 12/8/2022
 * Time:2:49 AM
 *
 */
int main()
{
	struct student
	{
		int age;
		char name[20];
		float score;
		char sex[7];
	};
	struct student rodney;

	// above is the initialization of structs
	
	printf("please enter the information of the student");
	scanf("%d",&rodney.age);
	scanf("%s",&rodney.name);
	scanf("f",&rodney.score);
	scanf("%s",&rodney.sex);

	printf("the name of student is %s, he's %d years old, he score %.2f. he's a %s);

	return (0);
}
