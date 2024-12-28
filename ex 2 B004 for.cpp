#include<stdio.h>
int s,i,a;
main()
{
	printf("entrer un nombre : ");
   	scanf("%d",&a);
	s=0;
    for(i=1;i<=a;i++)
     	s+=i;
	printf("La somme des entiers positifs de 1 a %d est : %d",a,s);
}
