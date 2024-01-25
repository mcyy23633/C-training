#include <stdio.h>
main()
{
	int score;
	char IfPass;

	printf("Please input your score:");
	scanf("%d", &score);
	IfPass = (score>=60) ? 'Y':'N';
	printf("You get %c.", IfPass);
}

