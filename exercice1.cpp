/*
DECLARATION
		variables a,b:entier
DEBUT
	ecrire("saisir la valeur de a :")
	lire(a)
	ecrire("saisir la valeur de b :")
	lire(b)
	si(a>b)alors
		ecrire("a est le plus grand ")
	fsi
	si(b>a)
		ecrire("'b' est le plus grand ")
	fsi
FIN*/


#include<stdio.h>
int a,b;
main(){
	printf("saisir la valeur de a :");
	scanf("%d",&a);
	printf("saisir la valeur de b :");
	scanf("%d",&b);
	if(a>b)
		printf("%d est le plus grand ",a);
	if(b>a)
		printf("%d est le plus grand ",b);
}
