#include<stdio.h>
int a,b,fact=1;
main()
{
	printf("saisir la valeur de a : ");
	scanf("%d",&a);
	b=a;
	if(a>0)
	{
	while(fact!=a)
	{
		b*=fact;
		fact++;
	}
	}
	printf("la factorielle est %d",b);
}
