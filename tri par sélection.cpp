/*déclaration
		var tab[10]={8,12,5,6,18,4,22,13,7,2},i,max,p,v,c:entier
DEBUT
	pour v<-- 9 jusqu'à 0 pas=-1 faire
		max<-- tab[0]
		p<-- i
		pour i<-- 0 jusqu'à v faire
			si(tab[i]>max)alors
				max<-- tab[i]
				p=i+1
			fsi
		fpour
			c<-- tab[v]
			tab[v]<-- tab[p]
			tab[p]<-- c
		pour i<-- 0 jusqu'à 9 faire
			ecrire(tab[i])
		fpour
FIN*/
#include<stdio.h>
int tab[10]={8,12,5,6,18,4,22,13,7,2},i,max,p,v,c;
main(){
	for(v=9;v>=0;v--){
	max=tab[0];
	p=0;
	for(i=0;i<=v;i++){
		if(tab[i]>max){
			max=tab[i];
			p=i;
		}
	}
		c=tab[v];
		tab[v]=tab[p];
		tab[p]=c;
	}
	for(i=0;i<10;i++)
	printf("%d\t",tab[i]);
}
