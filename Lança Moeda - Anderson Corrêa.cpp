//Anderson Corr�a da Cunha - Exercicio 1 - 18/10
/*Observa��es:
- Implemente um Programa em C com Fun��es descritas abaixo, atrav�s de um menu (Fun��o main) de escolha.
b)Fun��o que simule o lan�amento de uma moeda. Para cada lan�amento da moeda a Fun��o deve imprimir: Cara ou Coroa.
Deixe a Fun��o lan�ar 50 vezes e conte o n�mero de vezes que cada lado da moeda aparece. Imprima os resultados ao final.
*/
#include <stdlib.h>
#include <stdio.h>
#include <iostream>		//Biblioteca para usar o idioma portugu�s!
//Fun��o com passagem por referencia, passado o endere�o da variavel usada como parametro, na chamada &nome na fun��o *nome.
void lancaMoeda( int i){
	int contaCara = 0, contaCoroa = 0;
	for( i = 0; i <= 50; i++ ) {
		if (rand() % 2 == 0){
		 printf("Cara\t");
		 	contaCara = contaCara + 1;
			}else{
				printf("Coroa\t");
				contaCoroa = contaCoroa + 1;
			}
	}
	printf("\n\nN�meros de cara: %d\nN�meros de coroa: %d",contaCara, contaCoroa);
}

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int i;	
    lancaMoeda( i );
}
