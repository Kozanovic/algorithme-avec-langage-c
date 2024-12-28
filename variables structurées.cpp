#include<stdio.h>
main(){
struct stagiaire{
	char nom[20],prenom[30];
	float n1,n2,M;
};
	
	stagiaire stag[5],c;
	for(int i=0; i<5; i++){
		printf("le stagiaire %d\n",i+1);
		printf("____________________________________\n");
		printf("entrer le nom de stagiaire %d :",i+1);
		scanf("%s",&stag[i].nom);
		printf("entrer le prenom de stagiaire %d :",i+1);
		scanf("%s",&stag[i].prenom);
		printf("entrer la premiere note de stagiaire %d :",i+1);
		scanf("%f",&stag[i].n1);
		printf("entrer la deuxieme note de stagiaire %d :",i+1);
		scanf("%f",&stag[i].n2);
		printf("____________________________________\n");
		stag[i].M = (stag[i].n1 + stag[i].n2)/2;
	}
	for(int i=0; i<4; i++){
		if(stag[i].M<stag[i+1].M){
			c = stag[i];
			stag[i] = stag[i+1];
			stag[i+1] = c;
			i = -1;
		}
	}
	for(int i=0; i<5; i++){
		printf("%s\t %s\t %.2f\t %.2f\t %.2f\t \n",stag[i].nom,stag[i].prenom,stag[i].n1,stag[i].n2,stag[i].M);
	}	
}
