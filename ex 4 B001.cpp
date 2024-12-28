#include<stdio.h>
const float pr1=5,pr2=2.5,pr3=3,pr4=10,pr5=7,TTVA=0.2;
float Q1,Q2,Q3,Q4,Q5,PHT,TVA,PTTC;
main()
{
	printf("saisir la valeur de Q1 :");
	scanf("%f",&Q1);
	printf("saisir la valeur de Q2 :");
	scanf("%f",&Q2);
	printf("saisir la valeur de Q3 :");
	scanf("%f",&Q3);
	printf("saisir la valeur de Q4 :");
	scanf("%f",&Q4);
	printf("saisir la valeur de Q5 :");
	scanf("%f",&Q5);
	PHT=(pr1*Q1)+(pr2*Q2)+(pr3*Q3)+(pr4*Q4)+(pr5*Q5);
	TVA=PHT*TTVA;
	printf("%.2f \n",PHT);
	printf("%.2f \n",PTTC);
	printf("%.2f \n",TVA);
	
}
