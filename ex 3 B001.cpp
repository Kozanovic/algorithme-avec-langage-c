#include<stdio.h>
float PHT,QTE,TTVA,VTVA,PTTC,PTHT;
main()
{
	printf("saisir la valeur de PHT :");
	scanf("%f",&PHT);
	printf("saisir la valeur de QTE :");
	scanf("%f",&QTE);
	printf("saisir la valeur de TTVA :");
	scanf("%f",&TTVA);
	PTHT=PHT*QTE;
	VTVA=PTHT*TTVA/100;
	PTTC=PTHT+VTVA;
	printf("%.2f \n",PTTC);
	
}
