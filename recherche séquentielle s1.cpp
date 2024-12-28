#include<stdio.h>
int tab[10],i,x,c;
main()
{
	for(i=0;i<10;i++)
	{
	printf("entrer la valeur de tab[%d] :",i+1);
	scanf("%d",&tab[i]);
	}
	printf("entrer la valeur rechercher :");
	scanf("%d",&x);
	c=0;
	for(i=0;i<10;i++)
	{
		if(tab[i]=x)
		c++;
		break;
	}
		if(c=0)
		printf(" x inexistante ");
		else
		printf(" existante ");
}
