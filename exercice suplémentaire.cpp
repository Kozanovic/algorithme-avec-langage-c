#include<stdio.h>
int a,n,c,v;
main()
{
	printf("saisir un nombre :");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		c=0;
		for(v=1;v<=a;v++)
			if(a%v==0)
				c++;
		if(c<=2)
			printf("%d \t",a);
	}
}
