//Anderson Corrêa da Cunha

/*2. (5.0 Pontos) Implemente um Programa em C, que leia 20 valores quaisquer e os insere sempre no início de um vetor, 
chamado de VetA (não pode ser inserido do final para o início os valores, leia o enunciado, sempre no início do vetor). 
Ao final apresente o vetor VetA ao usuário.*/

#include <stdio.h>
#define TAM 20

int main(){
	int i, j, k;
	float vet[TAM];
	
	//Processamento
	
	for ( i = 0 ; i < TAM ; i++ ){
		for ( j = TAM-1 ; j > 0 ; j-- ){
			vet[j]=vet[j-1];
		}//quantas vezes esse vetor irá passar?
		//deveria ser apenas com valores válidos e não com lixo!
		k=0;
		printf ("%i Digite um valor:", i+1);	//entrada de dados
		scanf ("%f", &vet[k]);
	}
	printf("\nValores digitados em ordem invertida: "); //saida de dados
	for( k = 0 ; k < TAM; k++ ){
		printf("%2.f\t", vet[k]);	//saida de dados
	}
}
//Faça o teste de mesa e veja quantas vezes será executado o laço sem necessidade
//Nota: 3.0
