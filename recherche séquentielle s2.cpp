#include<stdio.h>
int tab[10],i,tr=0,x;
main()
{
	for(i=0;i<10;i++)
	{
	printf("entrer la valeur de tab[%d] :",i+1);
	scanf("%d",&tab[i]);
	}
	printf("entrer la valeur rechercher :");
	scanf("%d",&x);
		for(i=0;i<10;i++)
		{
			if(tab[i] == x){
			tr=1;
			printf(" existante ");
			break;
			}
		}
			if(tr=0)
			printf(" inexistante ");
}
