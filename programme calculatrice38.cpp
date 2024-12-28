#include<stdio.h>
#include<math.h>
char reponse;
float a,b;
int operation;
main(){
	do{
		printf("____Calculatrice : MENU ____\n");
		printf("1-addition.\n");
		printf("2-soustraction.\n");
		printf("3-multiplication.\n");
		printf("4-division.\n");
		printf("5-reste d'un division.\n");
		printf("6-puissance.\n");
		printf("quel calcul veux-tu effectuer? ");
		scanf("%d",&operation);
		printf("saisir la première valeur : ");
		scanf("%f",&a);
		printf("saisir la deuxième valeur : ");
		scanf("%f",&b);
		switch(operation){
			case 1 : printf("le resultat est %.2f \n",a+b);
					break;
			case 2 : printf("le resultat est %.2f \n",a-b);
					break;
			case 3 : printf("le resultat est %.2f \n",a*b);
					break;
			case 4 : if(b!=0)
					printf("le resultat est %.2f \n",a/b);
					 else
					printf("impossible");
					break;
			case 5 : printf("le resultat est %d \n",(int)a % (int)b );
					break;
			case 6 : printf("le resultat est %.2f \n",pow(a,b) );
					break;
			default: printf("l,operation est incorrect \n");
					break;
		}
		printf("veux-tu faire un autre calcul (O/N) \n");
		scanf(" %c",&reponse);
	}while(reponse!='N');
}
