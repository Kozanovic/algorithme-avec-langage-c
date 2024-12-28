/*déclaration
	mot1[50],mot2[50]:caractère
	i,c=0:entier
DEBUT
	ecrire("saisir : ")
	lire(mot1)
	pour i<--0 jusqu'à '\0' faire
		c<--c+1
	fpour
	pour i<--c jusqu'à 0 faire
		mot2[i]<--mot1[i]
		ecrire("mot2[i]")
	fpour
FIN*/
#include<stdio.h>
char mot1[50],mot2[50];
int i,c=0;
main(){
	printf("saisir : ");
	gets(mot1);
	for(i=0;mot1[i]!='\0';i++){
		c++;
	}
	for(i=c;i>=0;i--){
		mot2[i]=mot1[i];
		printf("%c",mot2[i]);
	}
}
