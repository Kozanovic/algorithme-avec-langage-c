#include<stdio.h>
int l,i,j;
main(){
	printf("entrer le nombre de lignes : ");
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
