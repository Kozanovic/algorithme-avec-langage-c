#include<stdio.h>
int n,a,cd;
main(){
	printf("saisir un nombre:");
    scanf("%d",&n);
    a=1;
    for(a=1;a<=n;a++){
    	if(n%a==0)
    		cd++;
	}
	if(cd<=2){
		printf("premier");
	}
	else{
		printf("non premier");
	}
}
