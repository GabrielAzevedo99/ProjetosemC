#include <stdio.h>
#include <stdlib.h>

void main()
{
	int delta, a, b, c;
	float x1, x2;
	
	
	printf("Primeiro valor = ");
	scanf("%d", &a);
	printf("Segundo valor = ");
	scanf("%d", &b);
	printf("Terceiro valor = ");
	scanf("%d", &c);
	
	delta=(float)pow(b,2)-4*a*c;
	
	printf("\n");
	printf("Delta = %d", delta);
	
	if (delta>0){
	x1 = (-b+pow(delta,0.5)/2*a);
	x2 = (-b-pow(delta,0.5)/2*a);	
	
	printf("\n");
	printf("%f", x1);
	printf("%f", x2);
	
	}
	
	else {
	
	printf("\n");
	printf("nao pode ser calculado");
}
}
