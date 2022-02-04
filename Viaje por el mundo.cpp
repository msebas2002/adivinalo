#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#define TAM 10
int m=0;
int main (int argc, char *argv[]){
while (m==0){
	char palabra [100], adiv [100],*ciudades[] = {"Bogota","Paris","Montevideo","Madrid","Brasilia","Quito","Lima","Caracas","Berlin","Roma"};
	int x,c,i,n,j,p;
	bool k;
	int repetir;
	
	srand(time(0));
	p= rand() % TAM;
	strcpy (palabra,ciudades[p]);
	c=strlen (palabra);
	
	for (i=0;i<c;i++)
	{
		adiv[i]='-';
	}
	
	puts("Bienvenido, adivina las capitales del mundo");
	puts("\nVamos, empecemos el Tour, tienes 5 tiquetes");
	
	n=5;
	while (n>0){
		printf("\nCapital del mundo: %s\n",adiv);
		printf("Tiquetes restantes: %d\n",n);
		printf("Introduzca una letra: ");
		x=getchar();
		getchar();
		k=true;
		for(i=0;i<c;i++)
		{
			if(palabra[i]==x)
			{
				adiv[i]=x;
				k=false;
			}
		}	
		
		if(k)
		{
			n--;
		}
		j=0;
		for(i=0;i<c;i++)
		{
			if(palabra[i]==adiv[i])
			{
				j++;
			}
		}
		if(j==c)
		{
			n=0;
		}
		
	}
	if(j==c)
	{
		puts("\n¡Felicitaciones, si que eres un viajero!");
	}
	else
	{
		puts("\nPerdiste :(, Empieza otro viaje");
	}
	
	printf ("si quieres volver a viajar presiona la letra 1, si quieres descansar presiona otra tecla\n");
	scanf("%d", &repetir);
	if(repetir==1){
		printf("H");
		n=5;
		system("cls");
		srand(time(0));
		p= rand() % TAM;
		strcpy (palabra, ciudades[p]);
		c=strlen(palabra);
	}
	else if (repetir!=1){
		return 0;
	}
}
	return 0;
}
