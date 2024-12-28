/*
fonction premier(n:entier)
		var a,c,v,x:entier
debut
	pour a<-- 1 jusqu'à n faire
		c 0
		pour v<-- 1 jusqu'à a faire
			si(a mod v=0)alors
				c <-- c + 1
			fsi
		fpour
		si(c<=2)alors
			x <-- 1
		sinon
			x <-- 0
		fsi
	fpour
	retourner x

		var n:entier
DEBUT
	ecrire("saisir une valeur :")
	lire(n)
	ecrire(premier(n))
	pour n <-- 1 jusqu'à 50 faire
		si(premier(n))alors
			ecrire(n)
        fsi
	fpour		
FIN*/

#include<stdio.h>

int premier(int n){
	int a,c,v,x;
	for(a=1;a<=n;a++){
		c=0;
		for(v=1;v<=a;v++)
			if(a%v==0)
				c++;
		if(c<=2)
			x = 1;
		else
			x = 0;
	}
	return x;
}

main(){
	int n;
	printf("saisir une valeur :");
	scanf("%d",&n);
	printf("%d\n",premier(n));
	for(n=1;n<=50;n++){
		if(premier(n))
			printf("%d \t",n);
	}
}
