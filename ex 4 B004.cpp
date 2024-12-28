#include<stdio.h>
int a,c,max;
main()
{
	printf("saisir un nombre :");
	scanf("%d",&a);
	max=a;
	c=0;
	do
	{
	printf("saisir un nombre :");
	scanf("%d",&a);
    if(a>max)
    {
    	max=a;
	}
	    c++;
	}
	while(c<9);
}
