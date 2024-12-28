/*déclaration
		var tab[10],i:entier
DEBUT
	pour i<-- 0 jusqu'à 9 faire
			ecrire("entrer un nombre")
			lire(tab[i])
	fpour
    pour i<--8 jusqu'à 0 pas -1 faire
    	tab[i-1]<--tab[i]
	fpour
    	tab[0]=0
    pour i<-- 0 jusqu'à 9 faire
			ecrire(i,tab[i])
	fpour
FIN*/
#include<stdio.h>
int tab[10],i;
main()
{
	for (i=0;i<9;i++)
	{
		printf("entrer la valeur de tab[%d] :",i+1);
		scanf("%d",&tab[i]);
    }
    for (i=8;i>=0;i--)
    	tab[i+1]=tab[i];
    tab[0]=0;
    for (i=0;i<10;i++)
    	printf("tab[%d] : %d\n",i,tab[i]);
}
