#include<stdio.h>
char mot[50];
int i,c=0;
main(){
	printf("saisir des mots : ");
	gets(mot);
	for(i=0;mot[i]!='\0';i++)
		if(mot[i]==' ' && mot[i+1]!=' ' && mot[i+1]!='\0')
			c++;
	printf("le nombre des mots est : %d ",c+1);
}
