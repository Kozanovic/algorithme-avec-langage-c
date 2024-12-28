#include<stdio.h>
float a,b,c,i;
main()
{
	printf("saisir l'age du cadre :");
	scanf("%f",&a);
	printf("saisir l'anciennete du cadre :");
	scanf("%f",&b);
	printf("saisir le dernier salaire du cadre :");
	scanf("%f",&c);
	if(b>1 && b<10)
	{
		i=(b*c)/2;
	}
	if(b>10)
	{
		i=b*c;
	}
	if(a>=46 && a<=49)
	{
		i=i+(2*c);
	}
	if(a>50)
	{
		i=i+(5*c);
	}
	printf("l’indemnite est : %f ",i);
}

