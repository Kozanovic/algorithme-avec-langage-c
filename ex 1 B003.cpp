#include<stdio.h>
float a,b,c;
main()
{
	printf("saisir le montant : ");
	scanf("%f",&a);
	if (a>5000)
	{
		b=a*20/100;
		c=a-b;
	}
	if (a<=5000 && a>3000)
	{
		b=a*15/100;
		c=a-b;
	}
	if (a<=3000 && a>1000)
	{
		b=a*10/100;
		c=a-b;
	}
	else
	{
		printf("Aucune reduction \n");
	}
	printf("la reduction est : %.2f \n ",b);
	printf("le montant a payer est : %.2f",c);
}
