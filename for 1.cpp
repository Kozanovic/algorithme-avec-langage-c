#include<stdio.h>
int a,np,nip;
main(){ 
    printf("ecrire un nombre :");
    scanf("%d",&a);
	np=0;
	nip=0;
	for( ;a!=0; ){
		printf("ecrire un nombre :");
	    scanf("%d",&a);
		if(a%2==0){
			np++;
		}
		else{
			nip++;
		}
	}
	printf("%d %d",np,nip);
}
