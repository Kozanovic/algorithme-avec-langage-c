#include<stdio.h>
int a, p, v;
main()
{
	printf("saisir un nombre :");
    scanf("%d",&p);
    v=1;
    for(v==1;v<11;v++)
    {
    	a=p*v;
    	printf("%d * %d = %d\n",p,v,a);
	}
}
