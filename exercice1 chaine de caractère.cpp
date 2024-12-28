#include<stdio.h>
char nom[50];
int i,c=0,l;
main(){
	printf("Entrez une chaine de caractere: ");
    gets(nom);
    printf("Entrez la lettre a rechercher : ");
    scanf("%c", &l);

    for(i=0;nom[i]!='\0';i++)
        if(nom[i]==l)
            c++;
    printf("Le nombre d'occurrences de la lettre %c est : %d\n",l,c);
}
