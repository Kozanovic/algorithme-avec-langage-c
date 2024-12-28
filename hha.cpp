#include<stdio.h>
int s,v;
main()
{
	 s=0;
     for(v=1;v<=5;v++)
     {
     	s+=v;
	 }
	 printf("La somme des 5 premiers entiers positifs est : %d",s);
}
