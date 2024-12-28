#include<stdio.h>
int l,c,i,j;
main(){
	printf("entrer le nombre des lignes : ");
	scanf("%d",&l);
	printf("entrer le nombre des colonnes : ");
	scanf("%d",&c);
	for(i=1;i<=l;i++){
		for(j=1;j<=c;j++){
			if(i==1 || i==l || j==1 || j==c)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}
