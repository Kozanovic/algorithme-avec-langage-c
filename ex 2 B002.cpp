#include<stdio.h>
float a,b;
main()
{
	printf("saisir la valeur de a :");
	scanf("%f",&a);
	printf("saisir la valeur de b :");
	scanf("%f",&b);
	if ((a>0 && b>0)||(a<0 && b<0))
	{
		printf("produit positif");
	 }
	 else
	 {
	 	if(a==0 || b==0)
	 	{
		 printf("produit nul");	
		 }
		 else
		 {
		 	printf("produit negatif");
		 }
	 }
}
