#include<stdio.h>
float a;
main()
{
	printf("saisir la valeur de a :");
	scanf("%f",&a);
	if (a==0)
	{
		printf("la valeur de a est positif");
	}
	else
	{
		if (a>0)
		{
		  printf("la valeur de a est positif");	
		}
		else
		{
		  printf("la valeur de a est negatif");	
		}
	}
}
