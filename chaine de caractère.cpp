/*#include<stdio.h>
char nom[20];
int i,c=0;
main(){
	printf("saisir : ");
	gets(nom);
	for(i=0;nom[i]!='\0';i++)
		c++;
		printf("%d",c);
}*/

/*#include<stdio.h>
#include<string.h>
char nom[20];
main(){
	printf("saisir : ");
	gets(nom);
		printf("%d",strlen(nom));
}*/
#include<stdio.h>
#include<string.h>
char nom[20];
int i,c=0;
main(){
	printf("saisir : ");
	gets(nom);
	for(i=0;i<strlen(nom);i++)
		c++;
		printf("%d",c);
}
