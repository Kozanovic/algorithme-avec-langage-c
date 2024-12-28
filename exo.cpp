#include<stdio.h>
int tab[10]={1,2,3,4,5,6,7,8,9,10},i,c=0;
main(){
	for(i=0;i<9;i++){
		if(tab[i]<tab[i+1]){
			c++;
		}
	}
	if(c>=9)
		printf("le tableau est triee en ordre croissant");
	else
		printf("le tableau n'est pas triee en ordre croissant");
}
