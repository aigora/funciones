#include <stdio.h>

// Devuelve el numero de caracteres que ha convertido
int pasarAMayusculas(char cadena[]);

int main() {
	char nombre[50], apellido[50];
	int resultado;
	
	printf("Introduce el nombre\n");
	gets(nombre);
	// LLAMAR A UNA FUNCION PARA PASAR A MAYUSCULAS
	resultado = pasarAMayusculas(nombre);
	printf("Nombre en mayusculas: %s\n", nombre);
	printf("Se han convertido %d minusculas\n", resultado);
	
	printf("Introduce el apellido\n");
	gets(apellido);
	// LLAMAR A UNA FUNCION PARA PASAR A MAYUSCULAS
	resultado = pasarAMayusculas(apellido);
	printf("Nombre en mayusculas: %s\n", apellido);
	printf("Se han convertido %d minusculas\n", resultado);
}

int pasarAMayusculas(char cadena[]) {
	int i  = 0, contador=0;
	
	while (cadena[i] != '\0') {
		if (cadena[i]>='a' && cadena[i]<='z') {
			cadena[i] = cadena[i] - 32; // lo pasa a mayusculas
			contador++;
		}
		i++;
	}	
	return contador;
}




