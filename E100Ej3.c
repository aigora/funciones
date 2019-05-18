#include<stdio.h>
struct Tdepartamento
{
	char nombre[50];
	float numeroProfesores;
	float totalECTS;
};
float ratioDepartamento (struct Tdepartamento ficha);
int main()
{
	struct Tdepartamento ficha;
	float resultado;
	printf("Nombre \n");
	gets(ficha.nombre);
	printf("Numero de profesores \n");
	scanf("%f",&ficha.numeroProfesores);
	printf("Total de creditos \n");
	scanf("%f",&ficha.totalECTS);
	resultado=ratioDepartamento (ficha);
	printf("El ratio es %f \n",resultado);
}
float ratioDepartamento (struct Tdepartamento ficha)
{
	float ratio;
	ratio=ficha.numeroProfesores/ficha.totalECTS;
	return ratio;
}
