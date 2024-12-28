#include<stdio.h>

void f1(){
	printf("bonjour\n");
}

void f2(){
	int i,n;
	printf("saisir nombre de bonjour :");
	scanf("%d",&n);
	for(i=1 ; i<=n ;i++){
		printf("bonjour \n");
	}
}
int f3(int nb){
	int i;
	for(i=1 ; i<=nb ;i++){
		printf("bonjour \n");	
	}
	return 0;
}
main(){
	int n,x;
	f1();
	f2();
		printf("saisir nombre de bonjour :");
		scanf("%d",&n);
	x = f3(n);
		printf("%d",x);
}
