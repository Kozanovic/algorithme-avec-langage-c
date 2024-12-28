#include<stdio.h>
int abs(){
	int x,a,b;
	printf("saisir une valeur :");
	scanf("%d",&x);
	if(x<0)
		a = -x;
	else
		a = x;
	printf("%d",a);
	return b;
}
main(){
	int b;
	b = abs();
}
