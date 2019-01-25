//Anderson Corrêa da Cunha

/*Exercícios:
1. (5.0 Pontos) Implemente um Programa em C, que insira em um Vetor chamado de VetA, 
os primeiros 100 valores inteiros pares. Um Vetor chamado de VetB deverá receber o somatório de cada elemento do Vetor VetA.
O somatório de um valor n corresponde ao resultado da soma de 1 + 2 + 3 + ... + n.
Ao final os dois vetores devem ser apresentados ao usuário devidamente identificados.
Por exemplo, o somatório de 6 é: 1 + 2 + 3 + 4 + 5 +6 = 21.
*/

#include <stdio.h>
#define TAM 100

int main (){
	
int num=0, vetA[TAM], vetB[TAM], somatorio, i=0, j;

while ( i < TAM){ 			// Enquanto o i for menor do que o tamanho.
	if ( num % 2 == 0){ 	// Se o resto da divisão do numero for igual a 0
		vetA[i]=num;
		i++;				//incrementa i
	}
	num++;					//Incrementa o numero
}
printf("Vetor A (com os 100 primeiros valores inteiros pares): "); //Saída de dados para mostrar os valores pares
	for (i = 0; i < TAM; i++){
 		printf("%i \t", vetA[i]); // Saída de dados
	}
printf("\n\nVetor B (com o somatorio de cada elemento do Vetor A):\n"); //Vetor de somatorias
	for (i = 0; i < TAM; i++){
 		num=vetA[i];
 		somatorio=0;
 			while ( num >= 0 ){
 				somatorio= somatorio + num;
 				num--;
	 }
	 vetB[i]=somatorio;
	 printf("Somatorio: %i = %i \t", vetA[i], vetB[i]); // Saída de dados para mostrar a somatoria
	}
}
//Só faltou um laço para a impressão do vetor VetB
//Nota: 4.5
