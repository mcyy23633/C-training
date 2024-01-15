#include <stdio.h>
#include <string.h>
void main()
{	int i, urid;
	char urps[10];
	char id[5][10]={"Bill","Carl","Mary","Joan","Joe"};
	char ps[][10]={"3cats","super","123","xxx","1985"};
	for(i=0; i<5; i++)
		printf("%d)%s\t", i, id[i]);
	printf("\nSelect a ID:");
	scanf("%d", &urid);
	printf("Input your password:");
	scanf("%s", urps);
	if(scmp(ps[urid], urps)==1)
		printf("Hello, %s!", id[urid]);
	else
		printf("Incorrect password!");
}
scmp(char a[], char b[])
{
	int i=0;
	while((a[i]!=0 && b[i]!=0))
	{
		if(a[i]==b[i])
			i++;
		else
		    return 0;
	}
	if (strlen(a)==strlen(b))
	    return 1;
	else
	    return 0;
}

