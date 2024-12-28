#include<stdio.h>
#include<math.h>
float a,b,c,delta,x1,x2,x;
main()
{
	printf("saisir la valeur de a :");
	scanf("%f",&a);
	printf("saisir la valeur de b :");
	scanf("%f",&b);
	printf("saisir la valeur de c :");
	scanf("%f",&c);
	delta=pow(b,2)-4*a*c;
	if (delta>0)
	{
		x1=-b+sqrt(delta)/2*a;
		x2=-b-sqrt(delta)/2*a;
		printf("les solutions sont %f et %f ",x1,x2);
	}
	else
	{
		if (delta==0)
		{
			x=-b/2*a;
			printf("la solution est %f ",x);
		}
		else
		{
			printf("il n'y a pas de solution");
		} 
		return 0;
	}
	
}
