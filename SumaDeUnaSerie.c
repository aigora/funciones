//Autor: JAVIER GARCÉS BRAVO
//Grupo Q103
//Descripción: Calcular la suma de la siguiente serie con una función . suma = sumatorio(1/i^2)

#include <stdio.h>

float SumaSerie (float);

int main(){
	float n,suma;
	printf("cuantos terminos quieres que tenga la serie: \n");
	scanf("%f",&n);
	suma=SumaSerie(n);
	printf("la suma de la serie es %f \n",suma);
	
}
float SumaSerie (float a){
	int i;
	float s=0;
	float r=0;
	for(i=1;i<a;i++){
		r=1/pow(i,2);
		s=s+r;
	}
	return s;
}
