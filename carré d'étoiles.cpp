#include<stdio.h>
int l,i,j;
main(){
	printf("entrer le nombre des lignes : ");
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		for(j=1;j<=l;j++){
			if(i==1 || i==l || j==1 || j==l || i==j || j==l-i+1)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}
