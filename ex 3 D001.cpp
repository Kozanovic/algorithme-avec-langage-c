/*déclaration
		var tab[10],i,a=0,x:entier
DEBUT
		pour i<-- 0 jusqu'à 9 faire
			ecrire("entrer un nombre")
			lire(tab[i])
		fpour
		ecrire("entrer la valeur rechercher")
		lire (x)
		pour i<-- 0 jusqu'à 9 faire
			si(tab[i]=x)alors
				a<--a+1
			fsi
		fpour
			ecrire(a)
FIN*/
#include<stdio.h>
int tab[10],i,x,C=0;
main()
{
	for(i=0;i<10;i++)
	{
	printf("entrer la valeur de tab[%d] :",i+1);
	scanf("%d",&tab[i]);
	}
	printf("entrer la valeur rechercher :");
	scanf("%d",&x);
	for(i=0;i<10;i++)
		if(tab[i]==x)
			C++;	
	printf("ce nombre est figuree %d fois ",C);
}
