#include <stdio.h>
#define TAM 2500

int main(){
	int cont=0, i, vet [TAM];	//o meu contador inicializa em 0, indice, vetor com o tamanho de 2500
	
	for (i=0 ; i<TAM ; i++){	//i inicializa em 0, a condi��o � o i ser menor que o tamanho (2500), i incrementa
		if (( vet[i] >= 100 ) && ( vet[i] <= 454)){	//Se o meu vetor na posi��o i for maior ou igual a 100 e menor ou igual a 470
			cont++;	// o meu contador incrementa
		}
	}
	printf("Valores: %i \n", cont);
}

/* TESTE DE MESA: 
PRIMEIRO (FOR): 
O MEU INDICE QUE INICIALIZOU EM 0, VE A CONDI��O QUE �: MEU I � MENOR QUE O MEU TAMANHO AI ENT�O ENTRA NO LA�O:
SEGUNDO (IF):
SE O MEU VETOR NA POSI��O I FOR MAIOR OU IGUAL A 100 E O MENOR OU IGUAL A 454, MEU CONTADOR INCREMANTA 1 AT� CHEGAR NO TAMANHO DE 3500
E PARAR DE ENTRAR NO MEU LA�O.

*/
