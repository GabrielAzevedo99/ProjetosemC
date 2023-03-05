#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num1, num2;
	
	printf("Digite um valor = ");
	scanf("%d", &num1);
	printf("Digite outro valor = ");
	scanf("%d", &num2);
	
	
	printf("\n");
	printf("primeiro valor elevado ao segundo = %f",(double) pow(num1,num2));
	printf("\n");
	printf("primeiro valor vezes o segundo = %d", num1*num2);
	printf("\n");
	printf("numero inverso do primeiro = %f",(float) 1/num1);
	printf("\n");
	printf("soma do segundo numero com a medade do primeiro = %d", num2+(num1/2));
	printf("\n");
	printf("valor oposto do segundo numero = %d", num2*-1);
	
	
}
