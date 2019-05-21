/*
Autor: Manuel Dégano
Grupo: Q103
Descripción: Este programa imprime la ciudad mas poblada mas densa y con mas superficie
*/



#include<stdio.h>
#define N 5
struct ciudad
{
	char nombre[20];
	float area;
	float poblacion;
	float densidad;
};
 
 
 float maxArea(struct ciudad ciu[], int dimension);
 float maxPob(struct ciudad ciu[], int dimension); 
 float maxDensidad(struct ciudad ciu[], int dimension);

void main()
{
	int i=0;
	struct ciudad ciu[150]={{"Madrid", 605.77, 3165.5, 0},{"Berlin", 891.7, 3469.9, 0},{"París", 105.4, 2240.6, 0},{"Atenas", 412, 3158.4, 0},{"Roma", 1285, 2874.04, 0}};
	
	for(i=0;i<N; i++)
	{
		ciu[i].densidad= (ciu[i].poblacion)/(ciu[i].area);
	}
	
	maxArea(ciu, N);
	maxPob(ciu, N); 
	maxDensidad(ciu, N);
}


float maxArea(struct ciudad ciu[], int dimension)
{
	int i=0;
	float areamax;
		
		areamax=ciu[0].area;
		for(i=1;i<N;i++)
		{
			if(ciu[i].area>areamax)
			areamax=ciu[i].area;	
		}	
		
		for(i=0;i<dimension;i++)
		{
			if(ciu[i].area==areamax)
			{
			printf("la ciudad con area maxima es %s con un area de %.2f \n",ciu[i].nombre, ciu[i].area);
			}
		}
}



float maxPob(struct ciudad ciu[], int dimension)
{
	int i=0;
	float pobmax;
		
		pobmax=ciu[0].area;
		for(i=1;i<N;i++)
		{
			if(ciu[i].poblacion>pobmax)
			pobmax=ciu[i].poblacion;	
		}	
		
		for(i=0;i<dimension;i++)
		{
			if(ciu[i].poblacion==pobmax)
			{
			printf("la ciudad con poblacion maxima es %s con una poblacion de %.2f por mil habitantes\n",ciu[i].nombre, ciu[i].poblacion);
			}
		}
}
 float maxDensidad(struct ciudad ciu[], int dimension)
 {
 		int i=0;
	float densmax;
		
		densmax=ciu[0].densidad;
		for(i=1;i<N;i++)
		{
			if(ciu[i].densidad>densmax)
			densmax=ciu[i].densidad;	
		}	
		
		for(i=0;i<dimension;i++)
		{
			if(ciu[i].densidad==densmax)
			{
			printf("la ciudad con densidad maxima es %s con una densidad de %.2f \n",ciu[i].nombre, ciu[i].densidad);
			}
		}
 }
