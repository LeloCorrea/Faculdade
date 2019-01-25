//Anderson Corrêa da Cunha

/*Implemente um Programa em C que (é apenas um código-fonte e deve ser implementado na ordem que aparece os itens):
a) (1.0 Ponto) Insira em um Vetor V, 20 valores inteiros;
b) (1.5 Pontos) Imprima apenas os elementos que estão nas posições pares (indexadores) do vetor;
c) (1.5 Pontos) Imprima apenas os elementos que estão nas posições múltiplas de 4 (indexadores) do vetor;
d) (2.0 Pontos) Imprima o vetor em ordem inversa.
e) (2.0 Pontos) Apresente a média aritmética apenas dos valores pares;
f) (2.0 Pontos) Apresente a média aritmética apenas dos valores ímpares.
Observação: As impressões devem ser devidamente identificadas para o usuário, 
lembre-se que ele (o usuário) deve saber o que está sendo impresso. Um “monte” de números não significa nada!*/

#include <stdio.h>
#define TAM 2

int main (){
	
	int v[TAM], i;
	
	for( i = 0; i < TAM; i++){
	printf ("Digite o valor : \n");
	scanf ("%i", & v[i]);
	}
	for( i = 0; i < TAM; i++){
		printf("%i \t",v[i]);
	}
}

