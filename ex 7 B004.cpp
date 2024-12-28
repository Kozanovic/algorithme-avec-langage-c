#include<stdio.h>
int a,b,m;
main()
{
	printf("saisir un nombre : ");
	scanf("%d",&a);
	b=a;
	m=0;
	do 
	{
	printf("saisir un nombre : ");
	scanf("%d",&a);
		b=b+a;
		m++;
	}
	while (a!=0);
	    b=b/m;
	    printf("%d",b);
}
