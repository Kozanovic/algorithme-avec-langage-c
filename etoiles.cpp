#include<stdio.h>
int l,c,i,j;
main(){
	printf("entrer le nombre de lignes : ");
	scanf("%d",&l);
	printf("entrer le nombre de colonnes : ");
	scanf("%d",&c);
	for(i=1;i<=l;i++){
		for(j=1;j<=c;j++){
			printf("* ");
		}
		printf("\n");
	}
}
