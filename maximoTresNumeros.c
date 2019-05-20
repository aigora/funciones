#include <stdio.h>

//Completar los prototipos de las funciones
int PedirNumero ();
int MaximodeTres (int n1, int n2, int n3);

void main() {
	int A, B, C, max;
	//Realizar las llamadas a las funciones:
	A = PedirNumero();
	B = PedirNumero();
	C = PedirNumero();
	
	max = MaximodeTres(A, B, C);
	
	printf("El maximo es %d\n", max);
	system("pause");
}
//Escribir las implementaciones de ambas funciones
int PedirNumero () {
	int numero;
	do {
		printf("Introduce numero:\n");
		scanf("%d", &numero);
	}while(numero<0);
	return numero;
}
int MaximodeTres (int n1, int n2, int n3){
	if (n1 > n2) {
		if (n1 > n3) {
			return n1;
		} else {
			return n3;
		}
	} else {
		if (n2 > n3) {
			return n2;
		} else {
			return n3;
		}
	}
}
