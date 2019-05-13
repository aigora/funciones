#include <stdio.h>

int buscaCaracter(char cadena[], char letra);

int main() {
	char frase[50];
	char letra;
	int posicion;
	
	printf("Introduce frase\n");
	gets(frase);
	printf("Introduce letra\n");
	scanf("%c", &letra);
	posicion = buscaCaracter(frase, letra);
	printf("Posicion: %d\n", posicion);
}

int buscaCaracter(char cadena[], char letra) {
	int i=0;
	while (cadena[i]!='\0'){
		if (cadena[i]==letra) {
			return i+1;
		}
		i++;
	}
	// Si llega al final es porque no ha encontrado el caracter
	return -1;
}

