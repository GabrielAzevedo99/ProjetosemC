#include <stdio.h>
#include <stdlib.h>

void main()
{
	int raio, altura;
	float litros, latas, custo, ab, al, at, area;
	
	
	printf("Informe o raio = ");
	scanf("%d", &raio);
	printf("Informe a altura = ");
	scanf("%d", &altura);
	
	area=2*3.14*raio*(altura+raio);
	
	printf("\n");
	printf("Area primeiro metodo = %.2f", area);
	
	ab=(float)3.14*pow(raio,2);
	al=(float)2*3.14*raio*altura;
	at=(float)2*ab+al;
	
	printf("\n");
	printf("Area segundo metodo = %.2f", at);
	
	
	litros=(float)area/3;
	latas=(float)litros/5;
	
	printf("\n");
	printf("Latas necessarias = %f", latas);
	
	custo=latas*50.0;
	printf("\n");
	printf("Custo total = %f", custo);
	
}
