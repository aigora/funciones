/* Autor: Wasima Simouh
   Grupo: Q103
   Descripción: Este programa nos permite calcular el área o perímetro de distintas
               figuras geométricas mediante funciones.
*/
#include<stdio.h>
#include<math.h>
#define PI 3.14

char menu();
float areaCirculo(float radio);
float perimetroCirculo(float r);  
float areaCuadrado(float lado);
float areaRectangulo(float base, float altura);

void main()
{
	char opcion1;
	
	opcion1=menu();
	
	switch(opcion1)
	{
		case 'A':
			{
			float r1, aCi;
			printf("Introduce el radio:\n");
			scanf("%f", &r1);
			aCi=areaCirculo(r1);
			printf("area circulo=%f\n", aCi);
			break;
	    	}
		case 'B':
			{
			float r2, pCi;
			printf("Introduce el radio\n");
			scanf("%f", &r2);
			pCi=perimetroCirculo(r2);
			printf("perimetro circulo=%f\n", pCi);
			break;
	    	}
		case 'C':
			{
			float l, aCua;
			printf("Introduce el lado:\n");
			scanf("%f", &l);
			aCua=areaCuadrado(l);
			printf("area cuadrado=%f\n", aCua);
			break;
	    	}
		case 'D':
			{
			float b, a, aRec;
			printf("Introduce la base y la altura:\n");
			scanf("%f %f", &b, &a);
			aRec=areaRectangulo(b, a);
			printf("area rectangulo=%f\n", aRec);
			break;
	    	}
		default:
			system ("cls");
			printf("\n");
			printf("Saliendo...\n");
			printf("\n");
			break;
	}
}

float areaCirculo(float radio) 
{
	float areaCi;
	areaCi=PI*pow(radio, 2);
	return areaCi; 
}
float perimetroCirculo(float Radio)
{
	float perimCi;
	perimCi=2*PI*Radio;
	return perimCi;
}
float areaCuadrado(float lado)
{
	float areaCuadr;
	areaCuadr=pow(lado, 2);
	return areaCuadr;
}
float areaRectangulo(float base, float altura)
{
	float areaRect;
	areaRect=base*altura;
	return areaRect;
}

char menu()
{
	char opcion;
	
	printf("A-Calcular el %crea de un c%crculo\n", 160, 161);
	printf("B-Calcular el per%cmetro de un c%crculo\n", 161, 161);
	printf("C-Calcular el %crea de un cuadrado\n", 160);
	printf("D-Calcular el %crea de un rect%cngulo\n", 160, 160);
	printf("E-Salir\n");
	
	printf("Introduce una de estas opciones\n");
	fflush(stdin);
	scanf("%c", &opcion);
	
	return opcion;
}

