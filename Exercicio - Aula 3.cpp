#include <stdio.h>
#include <conio.h>

int main (){

int n1,n2, troca;	// Variavel troca foi utilizada como auxiliar para receber um valor.

	printf("Digite um numero:");	// Estou solicitando ao Usuário o 1 Numero.
	scanf("%d",&n1);				// Estou 
	
	printf("\n\nDigite outro numero:");
	scanf("%d",&n2);
 	printf("\nPrimeiro numero: %d \nSegundo numero: %d", n1, n2);
 	
 		troca = n1; // Troca recebe o valor de n1
 		n1 = n2;	// N1 recebe o valor de n2
 		n2 = troca;	// N2 recebe o valor de Troca que agora tem o valor de N1
 		
	printf("\n\nPrimeiro numero: %d \nSegundo numero: %d", n1, n2);
}
