main()
{
	int i;
	int a[]= { 10, 20, 30, 40, 50, 60};
	int *p, *q;

	p=a;
	q=a+2;
	for(i=0; i<6; i++)
	{
		printf("p[%d]=%d\t\t", i, p[i]);
		printf("q[%d]=%d\n", i-2, q[i-2]);
	}
}

