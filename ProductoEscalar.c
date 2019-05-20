/*
Autora= María Fermosel Álvarez
Curso Q103
Descripción: Calculo del producto escalar de dos vectores, con funciones
*/

#include<stdio.h>
#define N 5
float productoescalar (float vector1[], float vector2[], int dimension); 

int main()
{
	int i;
	float prod;
	float v1[N], v2[N];
	printf("introduc el primer vector\n");
	for(i=0;i<N;i++)
	{
		printf("dato %d", i+1);
		scanf("%f", &v1[i]);
	}

	printf("introduc el segundo vector\n");
	for(i=0;i<N;i++)
	{
		printf("dato %d", i+1);
		scanf("%f", &v2[i]);
	}
	prod=productoescalar(v1, v2, N);
	printf("el producto escalar es %f", prod);
}

float productoescalar (float vector1[], float vector2[], int dimension)
{
	int prod, i;
	for(i=0;i<dimension;i++)
		prod += vector1[i]*vector2[i];
	return prod;
}
