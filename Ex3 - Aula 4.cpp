#include <stdio.h>

float n1, n2; // Declaração de variáveis.

int main (){
	// Ler as variaveis
	printf ("Digite o primeiro valor: ");
	scanf ("%f", &n1);
	
	printf ("\nDigite o segundo valor: ");
	scanf ("%f", &n2);
	
	// Verificar qual é a maior variavel.
	// Mostrar em forma de pensagem (print) qual variavel é maior
	if (n1 > n2)
		printf ("\nO maior valor digitado e: %f",n1);
	if (n2 > n1)
		printf ("\nO maior valor digitado e: %.2f",n2);
	if(n1==n2)
		printf ("\nOs valores são iguais.!");
}
