#include<stdio.h>
int a,b,c;
main()
{
	printf("saisir la valeur de a: ");
	scanf("%d",&a);
	printf("saisir la valeur de b: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("la nouvelle valeur de a est %d\n",a);
	printf("la nouvelle valeur de b est %d",b);
}
