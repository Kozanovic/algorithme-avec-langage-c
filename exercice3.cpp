/*
DECLARATION
		variables tab[10]={1,2,3,4,5,6,7,8,9,10},i,c=0:entier
DEBUT
	pour i <-- 0 jusqu'à 8; faire
		si(tab[i]<tab[i+1])alors
			c <-- c + 1
		fsi
	fpour
	si(c>=9)alors
		ecrire("le tableau est trie de maniere croissant")
	sinon
		ecrire("le tableau n'est pas trie de maniere croissant")
	fsi
FIN*/

#include<stdio.h>
int tab[10]={1,2,3,4,5,6,7,8,9,10},i,c=0;
main(){
	for(i=0; i<=8; i++){
		if(tab[i]<tab[i+1])
			c++;
	}
	if(c>=9)
		printf("le tableau est trie de maniere croissant");
	else
		printf("le tableau n'est pas trie de maniere croissant");
}
