#include<stdio.h>
float a,b,c;
main()
{
	printf("saisir la valeur de a :");
	scanf("%f",&a);
	printf("saisir la valeur de b :");
	scanf("%f",&b);
	printf("saisir la valeur de c :");
	scanf("%f",&c);
	if(a && b && c >=10)
	{
		printf("le resultat est : reussite");
	}
	else
	{
		printf("le resultat est : echec");
	}
}
