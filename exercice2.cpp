/*
DECLARAION
		variables a,i,s:entier
DEBUT
	ecrire("saisir la valeur de a :")
	lire(a)
	s <-- 0
	pour i <-- 1 jusqu'à a faire
		s <-- s + i
	fpour
	ecrire("s")
FIN*/

#include<stdio.h>
int a,i,s;
main(){
	printf("saisir la valeur de a :");
	scanf("%d",&a);
	for(i=1 ; i<=a ; i++)
		s += i;
	printf("la somme des entiers positifs de 1 a %d est : %d",a,s);
}
