#include <stdio.h> // Case sensitive (sensivel a caixa alta e baixa).
#include <conio.h>

int main () { // FUN��O OU PROGRAMA

int numero;
int numero2=7;	// O numero que foi digitado ocupa o espa�o de mem�ria.
int numero3;

 printf("Digite um numero: ");
 scanf("%d", &numero);
 
 printf("Digite outro numero: ");
 scanf("%d", &numero2);
 
 int soma = numero + numero2;
 
 printf("\nO numero digitado foi: %d:", soma);
 
}
