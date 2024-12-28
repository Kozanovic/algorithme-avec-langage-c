#include<stdio.h>
int a,b,fact;
main()
{
	printf("saisir un nombre :");
	scanf("%d",&a);
	fact=1;
	for(fact=1;fact<=a;fact++)
	{
		fact*=b;
	}
	printf("la factorielle est %d",b);
}
