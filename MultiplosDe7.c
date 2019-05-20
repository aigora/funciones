//Autor: JAVIER GARCÉS BRAVO
//Grupo Q103
//Descripción: Calcular los multiplos de 7 que hay entre dos numeros introducidos por el usuario.




#include <stdio.h>

int funcion (int,int);

int main(){
	int n,m,mult;
	printf("Introduzca dos numeros (n y m) \n  Ambos numeros deben ser positivos \n");
	printf("m debe ser mayor que n \n");
	scanf("%d %d",&n,&m);
	mult=funcion(n,m);
	printf("Los multiplos de 7 que hay son %d \n",mult);
}
int funcion(int x,int y){
	int i,c;
	int cont=0;
	for(i=x;i<=y;i++){
		c=i%7;
		if(c==0){
			cont++;
		}
	}
	return cont;
}
