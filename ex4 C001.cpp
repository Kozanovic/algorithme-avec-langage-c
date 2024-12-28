#include<stdio.h>

float MAX(){
	float max,i,n;
	max = n;
	for(i=0 ; i<4 ; i++){
		printf("entrer un nombre : ");
		scanf("%f",&n);
		if(n>max)
		max = n;
	}
	printf("%.2f",max);
}
main(){
	MAX();
}
