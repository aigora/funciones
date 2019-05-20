/*
Autor = JAVIER GARCÉS BRAVO
Curso Q103
Descripción: CONVERSIÓN DE TEMPERATURAS
*/

#include<stdio.h>

float centfahr(float );
float fahrcent(float );

int main()
{
	float valor;
	char letra;
	float f,c;
	do
	{
		printf("Introduce un valor y una letra: ");
		scanf("%f %c", &valor, &letra);
		switch(letra)
		{
			case'C':
			f=centfahr(valor);
			printf("El resultado de cent a fahr es: %f \n",f);
			break;
			case 'F':
			c=fahrcent(valor);
			printf("El resultado de fahr a cent es: %f \n",c);
			break;
			default:printf("Opcion desconocida\n");
			break;
		}
		
	}while(letra=='Z');

	
}
float centfahr(float a){
	float cambio;
	cambio=(a*1.8) +32;
	return cambio;
}
float fahrcent(float a){
	float cambio;
	cambio=(a-32)/1.8;
	return cambio;
}
