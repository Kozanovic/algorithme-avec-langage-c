/*d�claration
		var tab[10]<--{8,12,5,6,18,4,22,13,7,2},i,c:entier
DEBUT
		pour i<-- 0 jusqu'� 8 faire
			si(tab[i]>tab[i+1])alors
				c<-- tab[i];
				tab[i]<-- tab[i+1];
				tab[i+1]<-- c;
				i<-- -1;
			fsi
		fpour
		pour i<-- 0 jusqu'� 9 faire
		ecrire(tab[i])
		fpour
FIN*/
#include<stdio.h>
int tab[10]={8,12,5,6,18,4,22,13,7,2},i,c;
main()
{
	for(i=0;i<9;i++)
		{
			if(tab[i]>tab[i+1])
			{
			c=tab[i];
			tab[i]=tab[i+1];
			tab[i+1]=c;
			i=-1;
			}
		}
	for(i=0;i<10;i++)
	printf("%d\t",tab[i]);
}
