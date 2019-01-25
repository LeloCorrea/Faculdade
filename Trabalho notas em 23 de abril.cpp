#include <stdio.h>

int main (){
	
	int valor, notas100, notas50, notas20, notas10;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	notas100 = valor / 100;								// Notas de 100 é igual ao valor digitado dividido por 100.
	
	notas50 = valor % 50;								// Notas de 50 é igual ao resto do valor que foi digitado dividido por 50.
	
	notas20 = notas50/20;
	
	notas10 = notas20 % 20;
	
	printf("\nNotas de 100: %d", notas100);
	printf("\nNotas de 50: %d", notas50);
	printf("\nNotas de 20: %d", notas20);
	printf("\nNotas de 10: %d", notas10);
}
