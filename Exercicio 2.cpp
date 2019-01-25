#include <stdio.h>
#define TAM 1500

int main(){
	int vet[TAM], i, valor;
	
	printf("Digite um valor:");
	scanf ("%i", &valor);
	
	for(i=0; i<TAM; valor++){
		vet[i]=valor;
		}
	printf("	Vetor:	\n");
	for (i=0; i<TAM; i++){
		printf("%i \t", vet[i]);
	}
	
}
