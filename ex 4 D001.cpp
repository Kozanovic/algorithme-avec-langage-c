/*déclaration
		var tab[5],i:entier
DEBUT
		pour i<-- 0 jusqu'à 4 faire
			ecrire("entrer un nombre")
			lire(tab[i])
			tab[i]<-- tab[i]+1
		fpour
		pour i<-- 0 jusqu'à 4 faire
			ecrire(tab[i])
		fpour
FIN*/
#include<stdio.h>
int tab[5],i;
main()
{
	for(i=0;i<5;i++)
	{
		printf("entrer la valeur de tab[%d] :",i+1);
		scanf("%d",&tab[i]);
	}
	for(i=0;i<5;i++)
	printf("%d\t",tab[i]+1);
}
