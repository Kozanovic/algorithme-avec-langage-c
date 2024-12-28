/*déclaration
tab[10],i,n[10]:entier
DEBUT
	pour i<--0 jusqu'à 9 faire
	ecrire("entrer une valeur :")
	lire(tab[i])
	fpour
	pour i<--9 jusqu'à 0 pas=-1 faire
		n[i]<--tab[i]
	ecrire("n[i]")
	fpour
FIN*/
#include<stdio.h>
int tab[10],i,n[10];
main()
{
	for(i=0;i<10;i++){
	printf("entrer la valeur de tab[%d] :",i+1);
	scanf("%d",&tab[i]);
	}
	for(i=9;i>=0;i--){
		n[i]=tab[i];
	printf("%d\t",n[i]);
	}
}
