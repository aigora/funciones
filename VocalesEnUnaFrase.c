//Autor: JAVIER GARCÉS BRAVO
//Grupo Q103
//Descripción: De la frase "en semana santa programaré en lenguaje c" realice una funcion que permita contar la cantidad de vocales que tiene la frase

#include <stdio.h>

void vocales (char palabra[], int n);

int main(){
	char frase[50]="en semana santa programare en lenguaje C";
	palabra(frase,50);
}
void palabra (char palabra[],int n){
	int i;
	int cont=0;
	for(i=0;i<n;i++){
		if(palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='i' || palabra[i]=='o' || palabra[i]=='u'){
			cont++;
		}
	}
	printf("La frase tiene %d vocales \n",cont);
}
