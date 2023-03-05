#include <stdio.h>
#include <stdlib.h>

void main()
{
	int baseMaior, baseMenor, altura;
	float area;
	
	
	printf("Valor de uma base = ");
	scanf("%d", &baseMaior);
	printf("Valor da outra base = ");
	scanf("%d", &baseMenor);
	printf("Valor da altura = ");
	scanf("%d", &altura);
	

	area=(float)(baseMaior+baseMenor)*altura/2;
	
	
	
	printf("\n");
	printf("area = %f", area);
	
}
