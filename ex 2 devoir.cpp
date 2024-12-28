#include<stdio.h>
float a;
main()
{
	printf("saisir la valeur de a :");
	scanf("%f",&a);
	if(a<18)
	{
		printf("Mineur");
	}
	else
	{
	    printf("Majeur");	
	}
}
