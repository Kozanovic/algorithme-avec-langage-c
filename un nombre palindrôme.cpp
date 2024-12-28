#include<stdio.h>
int n,a,inverse;
main(){
	printf("entrer un nombre : ");
	scanf("%d",&n);
	inverse=0;
	a=n;
	do{
		inverse = (inverse*10) + (n%10);
		n/=10;
	}while(n!=0);
	printf("l'inverse est : %d\n",inverse);
	if(a==inverse)
		printf("ce nombre est un palindrome");
	else
		printf("ce nombre n'est pas un palindrome");
}
