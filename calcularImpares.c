#include <stdio.h> 
int calcularImpares(int vector[], int longitud);

int main() {
	int longitud;
	int vector[50], i, impares;
	
	printf("Introduce cuantos elementos quieres en el vector\n");
	scanf("%d", &longitud);
	
	for (i=0; i<longitud; i++) {
		printf("Introduce elemento %d\n", i+1);
		scanf("%d", &vector[i]);
	}
	
	impares = calcularImpares(vector, longitud);
	printf("Hay %d numeros impares\n", impares);	
}

int calcularImpares(int vector[], int longitud) {
	int contador = 0, i;
	for (i=0; i<longitud; i++) {
		if (vector[i]%2!=0) 
			contador++;
	}
	return contador;
}

