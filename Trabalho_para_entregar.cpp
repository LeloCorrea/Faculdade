#include <stdio.h>

int main (){
	int valor, notas100, notas50, notas20, notas10;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);	
	
	notas100 = valor / 100;
	notas50 = notas100%50;
	notas20 = notas50%20;
	notas10 = notas20%10;
	
	printf("\nNotas de 100: %d\n", notas100);
	printf("Notas de 50: %d\n", notas50);
	printf("Notas de 20: %d\n", notas20);
	printf("Notas de 10: %d\n", notas10);

}
