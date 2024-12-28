#include<stdio.h>
int a,s,v;
main()
{
	printf("entrer un nombre :");
	scanf("%d",&a);
	 s=0;
     for(v=1;v<=a;v++)
     {
     	s+=v;
	 }
	 printf("La somme des 5 premiers entiers positifs est : %d",s);
}
