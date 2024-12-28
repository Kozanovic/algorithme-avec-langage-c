#include<stdio.h>
int l,i,j;
main(){
	printf("entrer le nombre de lignes : ");
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		for(j=1;j<=l-i;j++){
			printf("  ");
		}
		for(j=1;j<=l;j++){
			printf("* ");
		}
		printf("\n");
	}
}
