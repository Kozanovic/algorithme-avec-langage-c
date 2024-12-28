#include<stdio.h>
int n,a,cd;
main(){
	printf("saisir un nombre:");
    scanf("%d",&n);
    a=1;
    do{
    	if(n%a==0){
    		cd++;
		}
		a++;
	}
	while(a<=n);
	if(cd<=2)
		printf("premier");
	else
		printf("non premier");
}
