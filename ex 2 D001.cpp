/*déclaration
		var tab[10],i,max,min,p1,p2:entier
DEBUT
		ecrire("saisir un nomnbre")
		lire(tab[i])
			max=tab[0];
			min=tab[0];
			p1=i;
			p2=i;
	pour i <-- 0jusqu'à 9 faire
		ecrire("saisir un nomnbre")
		lire(tab[i])
	si(max<tab[i])alors
		max<-- tab[i]
		p1<-- i+1
	fsi
	si(min>=tab[i])alors
		min<-- tab[i]
		p2<-- i+1
	fsi
	fpour
		ecrire(max)
		ecrire(p1)
		ecrire(min)
		ecrire(p2)
FIN	*/
#include<stdio.h>
int max,min,i,tab[10],p1,p2;
main()
{
	printf("entrer le nombre de tab[%d] :",i);
	scanf("%d",&tab[i]);
	max=tab[0];
	min=tab[0];
	p1=0;
	p2=0;
	for (i=1;i<10;i++)
	{
		printf("entrer la valeur de tab[%d] :",i);
		scanf("%d",&tab[i]);
		if(max<tab[i])
		{
			max=tab[i];
			p1=i;
		}
		if(min>=tab[i])
		{
			min=tab[i];
			p2=i;
		}
	}
	printf("la valeur maximal est : %d\n",max);
	printf("sa position est : %d\n",p1);
	printf("la valeur minimal est : %d\n",min);
	printf("sa position est : %d\n",p2);
}
