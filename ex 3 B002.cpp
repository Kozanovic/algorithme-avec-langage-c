#include<stdio.h>
float a,b,x;
main()
{
	printf("saisir la valeur de a :");
	scanf("%f",&a);
	printf("saisir la valeur de b :");
	scanf("%f",&b);
	if (a!=0)
	{
		x=-b/a;
		printf("%f",x);
	}
	else
	{
		printf("impossible");
	}
}
