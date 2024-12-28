/*déclaration
		var tab1[5],tab2[5],i,tabs[5]:entier
DEBUT
	pouri<--0 jusqu'à 4 faire
		ecrire("entrer un nombre")
		lire(tab1[i])
	fpour
	pouri<--0 jusqu'à 4 faire
		ecrire("entrer un nombre")
		lire(tab2[i])
	fpour
	pouri<--0 jusqu'à 4 faire
		tabsomme[5]<--tab1[i]+tab2[i]
			ecrire(s)
	fpour
FIN*/
#include<stdio.h>
int tab1[5],tab2[5],i,tabsomme[5];
main(){
	for(i=0;i<5;i++){
		printf("entrer la valeur de tab1[%d] :",i+1);
		scanf("%d",&tab1[i]);
	}
	for(i=0;i<5;i++){
		printf("entrer la valeur de tab2[%d] :",i+1);
		scanf("%d",&tab2[i]);
	}
	for(i=0;i<5;i++){
		tabsomme[i]=tab1[i]+tab2[i];
		printf("%d\t",tabsomme[i]);
	}
}
