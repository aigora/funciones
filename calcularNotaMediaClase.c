#include <stdio.h>

struct TAlumno {
	char nombre[50];
	char apellido[50];
	float nota;
}; 

float calcularMedia(struct TAlumno clase[], int dimension);
void mejorAlumno(struct TAlumno clase[], int dimension);

int main() {
	struct TAlumno q103[150]={{"Luis", "Gomez", 8.75}, 
	{"Marta", "Rodriguez", 9.3}, {"Paula", "Garcia", 9.3}};
	float media;
	media = calcularMedia(q103, 3);
	printf("Nota media del Q103: %f\n", media);
	// Llamar a la funcion mejorAlumno
	mejorAlumno(q103, 3);
}

void mejorAlumno(struct TAlumno clase[], int dimension) {
	int i;
	float notaMax;
	notaMax = clase[0].nota; // la primera nota es la maxima
	
	for (i=1; i<dimension; i++) {
		if (clase[i].nota > notaMax)
			notaMax = clase[i].nota;
	}
	printf("Mejores alumnos con nota: %f\n", notaMax);
	for (i=0; i<dimension; i++) {
		if (clase[i].nota == notaMax)
			printf("%s %s\n", clase[i].nombre, clase[i].apellido);
	}
	return; // devuelve void, si es al final no haría falta ponerlo
}

float calcularMedia(struct TAlumno clase[], int dimension) {
	int i;
	float notaMedia = 0;
	for (i=0; i<dimension; i++) {
		notaMedia = notaMedia + clase[i].nota;
	}
	return notaMedia/dimension;
}

