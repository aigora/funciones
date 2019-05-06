#include <stdio.h>
#define PI 3.14159 
float areaCirculo(float r);
float perimetroCirculo(float r);
float areaCuadrado(float l);
float areaRectangulo(float a, float b);
char menu();
int main(){
	char op;
	float r,l,a,b,A,P;
	op=menu();
	switch(op){
		case 'A':
			printf("Introduzca el radio\n");
			scanf("%f",&r);
			A=areaCirculo(r);
			printf("El area de un circulo de r=%.2f es A=%.2f\n",r,A);
		case 'B':
			printf("Introduzca el radio\n");
			scanf("%f",&r);
			P=perimetroCirculo(r);
			printf("El perimetro de un circulo de r=%.2f es P=%.2f\n",r,P);
		case 'C':
			printf("Introduzca el lado\n");
			scanf("%f",&l);
			A=areaCuadrado(l);
			printf("El area de un cuadrado de l=%.2f es A=%.2f\n",l,A);
		case 'D':
			printf("Introduzca la base\n");
			scanf("%f",&b);
			printf("Introduzca la altura\n");
			scanf("%f",&a);
			A=areaRectangulo(a,b);
			printf("El area de un rectangulo de lados %.2f y %.2f es A=%.2f\n",a,b,A);
	}
}
float areaCirculo(float r){
	float area;
	area= PI*r*r;
	return area;
} 
float perimetroCirculo(float r){
	float perimetro;
	perimetro= 2*PI*r;
	return perimetro;
} 
float areaCuadrado(float l){
	float area;
	area= l*l;
	return area;
}
float areaRectangulo(float a, float b){
	float area;
	area=a*b;
	return area;
}
char menu(){
	char opcion;
	printf("A-Area circulo\n");
	printf("B-Perimetro circulo\n");
	printf("C-Area cuadrado\n");
	printf("D-Area rectangulo\n");
	fflush(stdin);
	scanf("%c",&opcion);
	return opcion;
} 
