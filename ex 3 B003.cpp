#include<stdio.h>
float a,b;
main()
{
	printf("saisir un nombre : ");
	scanf("%f",&a);
	if(a<=10)
	{
		b=a*0.50;
	}
	else
	{
		if(a<=20)
		{
			b=(10*0.50)+(a-10)*0.30;
		}
		else
		{
			b=(10*0.50)+(20*0.30)+(a-30)*0.25;
		}
	}
	printf("la facture est : %.2f",b);
}
