//Anderson Corrêa da Cunha - Exercicio 1 - 18/10
/*Observações:
- Implemente um Programa em C com Funções descritas abaixo, através de um menu (Função main) de escolha.
b)Função que simule o lançamento de uma moeda. Para cada lançamento da moeda a Função deve imprimir: Cara ou Coroa.
Deixe a Função lançar 50 vezes e conte o número de vezes que cada lado da moeda aparece. Imprima os resultados ao final.
*/
#include <stdlib.h>
#include <stdio.h>
#include <iostream>		//Biblioteca para usar o idioma português!
#include <time.h>
//Função com passagem por referencia, passado o endereço da variavel usada como parametro, na chamada &nome na função *nome.
void lancaMoeda( int i){
	int contaCara = 0, contaCoroa = 0;
	srand(time(NULL));
	for( i = 0; i < 50; i++ ) {
		if (rand() % 2 == 0){
		 printf("Cara\t");
		 	contaCara = contaCara + 1;
			}else{
				printf("Coroa\t");
				contaCoroa = contaCoroa + 1;
			}
	}
	printf("\n\nNúmeros de cara: %d\nNúmeros de coroa: %d",contaCara, contaCoroa);
}

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int i;	
    lancaMoeda( i );
}
