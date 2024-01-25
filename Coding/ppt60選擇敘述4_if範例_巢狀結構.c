#include <stdio.h>
main()
{
	int age, sex;
	printf("Please input your age:");
	scanf("%d", &age);
	if(age>=12)
	{
		printf("Lady(0) or gentleman(1):");
		scanf("%d", &sex);
		if(sex)
			printf("You should pay $60 for the ticket.");
		else
			printf("You should pay $50 for the ticket.");
	}
	else
		printf("You are too young to see this movie.");
}

