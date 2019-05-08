#include <stdio.h>
float potencia(float x, int i);
int factorial(int i);
float exponencial (float x, int n);

int main (){
	float x;
	int n;

	printf("Introduzca el argmento x de e^x:\n");
	scanf("%f", &x);
	printf("Introduzca el numero de iteraciones:\n");
	scanf("%d",&n);
	printf("La aproximacion para e^%.0f con %d iteraciones es %f", x, n, exponencial(x,n));
}
float potencia(float x, int i){
	int j;
	float resultado=1;
	for (j=1;j<=i;j++){
		resultado*=x;
	}
	return resultado;
}
int factorial(int i){
	int j;
	int resultado=1;
	for (j=1;j<=i;j++){
		resultado*=j;
	}
	return resultado;
}
float exponencial (float x, int n){
	int j;
	float sumatorio=0;
	for(j=0;j<=n;j++){
		sumatorio+=potencia(x,j)/factorial(j);
	}
	return sumatorio;
}
