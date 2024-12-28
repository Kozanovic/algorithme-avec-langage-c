#include<stdio.h>
int a,c,max;
main()
{
	printf("saisir un nombre :");
	scanf("%d",&a);
	max=a;
	c=0;
	for(a=0;a<=9;a++)
	{
	printf("saisir un nombre :");
	scanf("%d",&a);
    if(a>max)
    	max=a;
    	c++;
	}
	printf("%d",max);
}
