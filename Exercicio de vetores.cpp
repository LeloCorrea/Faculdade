//Anderson Corr�a da Cunha

/*Implemente um Programa em C que (� apenas um c�digo-fonte e deve ser implementado na ordem que aparece os itens):
a) (1.0 Ponto) Insira em um Vetor V, 20 valores inteiros;
b) (1.5 Pontos) Imprima apenas os elementos que est�o nas posi��es pares (indexadores) do vetor;
c) (1.5 Pontos) Imprima apenas os elementos que est�o nas posi��es m�ltiplas de 4 (indexadores) do vetor;
d) (2.0 Pontos) Imprima o vetor em ordem inversa.
e) (2.0 Pontos) Apresente a m�dia aritm�tica apenas dos valores pares;
f) (2.0 Pontos) Apresente a m�dia aritm�tica apenas dos valores �mpares.
Observa��o: As impress�es devem ser devidamente identificadas para o usu�rio, 
lembre-se que ele (o usu�rio) deve saber o que est� sendo impresso. Um �monte� de n�meros n�o significa nada!*/

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

