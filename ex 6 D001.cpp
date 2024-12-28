/*déclaration
		var tab[10],s,i,m,c:entier
DEBUT
		pour i<-- 0 jusqu'à 9 faire
			ecrire("entrer un nombre")
			lire(tab[i])
			s<--s+tab[i]
		fpour
				m<--s/10
		pour i<-- 0 jusqu'à 9 faire
			si(m<tab[i])alors
				c=c+1
			fsi
			ecrire(c)
		fpour
FIN*/
#include<stdio.h>
int tab[10]={2,8,9,5,3,6,12,1,4,11},s,i,m,c=0;
main()
{
	for(i=0;i<10;i++)
		s+=tab[i];
	m=s/10;
	for(i=0;i<10;i++)
	{
		if(tab[i]>m)
			c++;
	}
	printf("le nombre des valeurs superieur a la moyenne est :%d\n",c);
}
