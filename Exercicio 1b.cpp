#include <stdio.h>
#define TAM 3500

int main (){
	int i=0, v=0; 	// i inicializa em 0 e v inicializa em 0
	float valor, vet [TAM];	// valor, vetor com tamanho de 3500
	
	for ( i=0 ; i < TAM ; i++){ 		// i inicializa em 0, enquanto o meu i for menor que o meu tamanho executa a condição, i incrementa
		printf("Digite um valor: "); 	// solicita um valor ao usuário até os 3500 valores
		scanf ("%f", &valor);  	// permite a leitura dos dados digitados e insere em valor
		if ( valor >= 567 && valor < 786 ){	// se o meu valor for maior ou igual a 567 e menor ou igual a 786
			vet[v] = valor;	// o meu vetor vai ser igual ao meu valor
			valor++;	//valor incrementa
		}
	}
	printf("Valor: %.2f", valor);
}

/*
TESTE DE MESA:
PRIMEIRO (FOR):
ENQUANTO O MEU I QUE INICIALIZOU EM 0, VE A CONDIÇÃO QUE É: MEU I FOR MENOR QUE O TAMANHO (3500): ENTÃO ENTRA NO LAÇO: SOLICITANDO
QUE O USUÁRIO INSIRA OS 3500 VALORES.
SEGUNDO: 
*/
