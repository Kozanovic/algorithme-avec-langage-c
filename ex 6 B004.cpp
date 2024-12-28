#include<stdio.h>
int a,max;
main(){
	printf("saisir un nombre : ");
	scanf("%d",&a);
	max=a;
	do{
	printf("saisir un nombre : ");
	scanf("%d",&a);
	if(a>max)
		max=a;
	}
	while (a!=0);
	printf("%d",max);
}
