/*déclaration
	var x,tab[10],s,m:entier
DEBUT
	pour x<--0 jusqu'à 9 faire
		ecrire("saisir une valeur tab[x]:")
		lire(tab[x])
		s<--s+tab[x]
	fpour
		m<--s/10
	ecrire(la somme des valeurs est ",s)
	ecrire(la moyenne des valeurs est ",m)
FIN*/
#include<stdio.h>
int i,tab[10],s,m;
main()
{
	for(i=0;i<10;i++)
	{
		printf("entrer la valeur de tab[%d] :",i+1);
		scanf("%d",&tab[i]);
		s+=tab[i];/* s=s+tab[i] */
	}
	m=s/10;
	printf("la somme des valeurs est : %d\n",s);
	printf("la moyenne des valeurs est : %d",m);
}
