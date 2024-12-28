#include<stdio.h>
float MOYENNE(float m){
	float a,b,i,s;
	printf("entrer la valeur de a :");
	scanf("%f",&a);
	printf("entrer la valeur de b :");
	scanf("%f",&b);
		s = a + b;
		m = s/2;
	return m;
}
main(){
	float m;
	m = MOYENNE(m);
	printf("LA MOYENNE EST : %.2f",m);
}
