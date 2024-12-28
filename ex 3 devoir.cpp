#include<stdio.h>
float PTTC,TVA;
const float TTVA=0.2,PPr=3;
main()
{
	printf("saisir la valeur de PPr :");
	scanf("%f",&PPr);
	printf("saisir la valeur de TTVA :");
	scanf("%f",&TTVA);
	TVA=PPr*TTVA;
	PTTC=PPr+TVA;
	printf("la valeur de PTTC est %f ",PTTC);
}
