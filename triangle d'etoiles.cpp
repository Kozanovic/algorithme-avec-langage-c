#include<stdio.h>
int c,a,i,j;
main(){
	printf("entrer le nombre de colonnes : ");
	scanf("%d",&c);
	a=1;
	for(i=1;i<=2*c-1;i++){
		for(j=1;j<=a;j++){
			printf("* ");
		}
		if(i<c)
			a++;
		else
			a--;
		printf("\n");
	}
}
