#include<stdio.h>
int a,p,v;
main()
{
	printf("saisir la valeur de p :");
	scanf("%d",&p);
	v=1;
	do
	{
		a=p*v;
		printf("%d * %d= %d \n" ,p,v,a);
		v+=1;
	}
	while(v<11);
}
