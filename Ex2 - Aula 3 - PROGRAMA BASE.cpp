#include <stdio.h>	// Case sensitive (sensivel a caixa alta e baixa).
#include <conio.h>	// Uma biblioteca tem fun��es que servem para 

// Coment�rio de linha 
/*Coment�rio
de
bloco*/

int main () {	// Programa ou fun��o principal.

int numero, numero2=7, numero3;

numero = 0;
numero = numero2*5;
numero3 = numero+10;

	printf("Conteudo das variaveis:"); // N�o esquecer o ponto e virgula ';'
	printf("\nnumero = ");
	printf("%d",numero);
	printf("\nnumero = ");
	printf("%d",numero2);
	printf("\nnumero = ");
	printf("%d",numero3);
	
	//ou
	
	printf("\n\nConteudo das variaveis:"); // N�o esquecer o ponto e virgula ';'
	printf("\nnumero =%d \tnumero2 = %d \tnumero3 %d",numero, numero2, numero3);
	
}
