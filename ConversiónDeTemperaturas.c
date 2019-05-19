/*
Autora= María Fermosel Álvarez
Curso Q103
Descripción: Conversión de temperaturas
*/

#include<stdio.h>
float cent2fahr(float tf);
float fahr2cent(float tg);

int main()
{
	float ti;
	char letra;


	do
	{
		printf("introduce un numero real y una letra (c o f)");
		scanf("%f, %c", &ti, &letra);
		switch(letra)
		{
		
		case'c':
			printf("es cantidad en grados fahr son %f\n", cent2fahr(ti));
		break;
		case 'f':
			printf("esa cantidad en grados centigrados son %f\n", fahr2cent(ti));
		break;
		default:
		printf("opcion desconocida\n");
		break;
	}
		
	}
	while(letra=='c'|| letra=='f'); //hasta que introduzcan una letra distinta
return 0;
	
}
float cent2fahr(float tf)
{
	return (9/5 *tf)+32;
}
float fahr2cent(float tg)
{
	return (tg-32)* 5/9;
}
