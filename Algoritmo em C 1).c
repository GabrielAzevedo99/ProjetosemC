#include <stdio.h>
#include <stdlib.h>

void main()
{
	int lado;
	float area, peri;
	
	
	printf("Digite o lado do quadrado = ");
	scanf("%d", &lado);
	

	area=(float)lado*lado;
	peri=(float)lado*4;
	
	
	printf("\n");
	printf("area = %f", area);
	printf("\n");
	printf("perimetro = %f", peri);
	
}
