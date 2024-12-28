#include<stdio.h>
int x,y,z;
main()
{
	printf("saisir la valeur de x :");
	scanf("%d",&x);
	printf("saisir la valeur de y :");
	scanf("%d",&y);
	printf("saisir la valeur de z :");
	scanf("%d",&z);
	if (x<y && y<z)
	{
		printf("les nombres sont : %d %d %d \n",x,y,z);
	}
	if (x<z && z<y)
	{
	    printf("les nombres sont : %d %d %d \n",x,z,y);
	}
	if (y<x && x<z)
	{
		printf("les nombres sont : %d %d %d \n",y,x,z);
	}
	if (y<z && z<x)
	{
		printf("les nombres sont : %d %d %d \n",y,z,x);
	}
	if (z<x && x<y)
	{
		printf("les nombres sont : %d %d %d \n",z,x,y);
	}
	if (z<y && z<x)
	{
		printf("les nombres sont : %d %d %d \n",z,y,x);
	}
}
