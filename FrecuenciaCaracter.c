/*
Autora:  María Fermosel Álvarez
Curso Q103
Descripción: Calculo de las veces que aparece un caracter introducido 
			por el teclado en una frase introducida por teclado
*/

#include <stdio.h> 
  
int cuentoCaracter (char frase[100], char caracter);  
 
int main() 
{ 
	char frase[100], letra;
	int num;
	printf("introduce una frase\n");
	gets(frase);
	
	printf("que caracter de dicha frase quieres contar\n");
	scanf("%c", &letra);
	
	num=cuentoCaracter(frase, letra);
	printf("el caracter %c aparece %d veces", letra, num);
} 

int cuentoCaracter (char frase[100], char caracter)
{
	int contador, i;
	for(i=0; frase[i] != '\0';i++)
	{
		if(frase[i]==caracter)
			contador++;
	}
	return contador;
} 

