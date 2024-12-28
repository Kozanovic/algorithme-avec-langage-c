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
		si(c>5)alors
		ecrire("majoritaire")
		sinon
		ecrire("n'est pas majoritaire")
		fsi
FIN*/
#include<stdio.h>
int tab[10],s,i,m,c=0;
main()
{
	for(i=0;i<10;i++)
	{
		printf("entrer la valeur de tab[%d] :",i+1);
		scanf("%d",&tab[i]);
		s+=tab[i];
	}
	m=s/10;
	for(i=0;i<10;i++)
	{
		if(m<tab[i])
			c++;
	}
	printf("le nombre des valeurs superieur a la moyenne est :%d\n",c);
	if(c>=5)
	printf("majoritaire");
	else
	printf("n'est pas majoritaire");
}
