#include <stdio.h>
int main()
{
	int score;
	printf("Please enter your score:");
	scanf("%d", &score);
	if (score >= 60)
		printf("Congratulations, you passed!");
	return 0;
}
