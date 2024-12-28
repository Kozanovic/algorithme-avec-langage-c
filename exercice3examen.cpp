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
	}
	if(mot2[i]==c)
		printf("ce mot est un palindrome");
	elsezzzzz
		printf("ce mot est non palindrome");
}
