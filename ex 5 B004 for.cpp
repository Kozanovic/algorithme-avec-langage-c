#include<stdio.h>
int a,c=0;
main(){
	printf("saisir un nombre : ");
	scanf("%d",&a);
	for (c = 0; c < 10; c++){
		a++;
		printf("les resultats : %d \n",a);
	}
}
