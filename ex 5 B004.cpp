#include<stdio.h>
int a,c;
main()
{
	printf("saisir un nombre : ");
	scanf("%d",&a);
	c=0;
	do
	{
		a++;
		printf("les resultats : %d \n",a);
		c++;
	}
	while(c<10);
}
