/*
procédure fact()
	variables a,f,i:entier
début
	ecrire("saisir la valeur de a :")
	lire(a)
	f <-- 1;
	si(a>0)alors
		pour i <--1 jusqu'à a faire
			f <-- f * i;
		fpour
	fsi
	ecrire("f")
fin
DEBUT
	fact()
FIN*/

#include<stdio.h>

void fact(){
	int a,f,i;
	printf("saisir la valeur de a :");
	scanf("%d",&a);
	f = 1;
	if(a>0){
		for(i=1; i<=a; i++)
			f *= i;
	}
	printf("%d! = %d",a,f);
}
main(){
	fact();
}
