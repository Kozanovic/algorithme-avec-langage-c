#include<stdio.h>
float x,y,s,so,p,d;
main()
{
	printf("saisir la valeur de x :");
	scanf("%f",&x);
	printf("saisir la valeur de y :");
	scanf("%f",&y);
	s = x+y;
	so = x-y;
	p = x*y;
	d = x/y;
	printf("%.2f + %.2f = %.2f \n",x,y,s);
	printf("%.2f - %.2f = %.2f \n",x,y,so);
	printf("%.2f * %.2f = %.2f \n",x,y,p);
	printf("%.2f / %.2f = %.2f \n",x,y,d);
	
}
