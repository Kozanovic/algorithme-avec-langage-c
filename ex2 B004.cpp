#include<stdio.h>
int a,s,v;
main()
{
	printf("saisir la valeur de a :");
	scanf("%d",&a);
	s=1;
	v=2;
	do
	{
		s+=v;
		v++;
	}
	while(v<=a);
	printf("la somme est : %d",s);
}
