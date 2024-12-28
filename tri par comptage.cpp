#include<stdio.h>
int tab[10]={8,12,5,6,18,4,22,13,7,2},n[10],i,j,nbi;
main(){
	for(i=0;i<10;i++){
		nbi=0;
		for(j=0;j<10;j++){
			if(tab[j]<tab[i])
			nbi++;
		}
		n[nbi]=tab[i];
	}
	for(i=0;i<10;i++)
	printf("%d\t",n[i]);
}
