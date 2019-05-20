//Dalila Martínez Báez
//Calcula el termino n-esimo de un sumatorio/factorial
#include<stdio.h>
int SumoN (int n);
int FactN (int n);
int main()
{
	int n;
	float a=0.0;
	do{
		printf("Escribe el valor de n \n");
		scanf("%i",&n);
	}while(n<=0);
	a=(float)SumoN(n)/FactN(n);
	printf("El resultado de la serie es: %f \n",a);
	return 0;
}
int FactN (int n)
{
	int i,res=1;
	for(i=1;i<=n;i++)
	{
		res*=i;
	}
return res;
}
int SumoN (int n)
{
	int i,suma=0;
	for(i=0;i<=n;i++)
	{
		suma+=i;
	}
	return suma;
}
