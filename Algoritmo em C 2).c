#include <stdio.h>
#include <stdlib.h>

void main()
{
	int base, altura;
	float area;
	
	
	printf("Informe a base = ");
	scanf("%d", &base);
	printf("Informe a altura = ");
	scanf("%d", &altura);
	

	area=(float)base*altura/2;
	
	
	printf("\n");
	printf("area = %f", area);
	
}
