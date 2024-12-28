/*Déclaration
		var tab[10],i:entier
DEBUT
	pour i<--0 jusqu'à 9 faire
		ecrire("entrer un nombre")
		lire(tab[i])
	fpour
	pour i<--9 jusqu'à 0 faire 
		ecrire(tab[i])
	fpour
FIN*/
#include<stdio.h>
int tab[10],i;
main()
{
	for(i=0;i<10;i++)
	{
	printf("entrer la valeur de tab[%d] :",i+1);
	scanf("%d",&tab[i]);
	}
	for(i=9;i>=0;i--){
	printf("%d\t",tab[i]);
	}
}
