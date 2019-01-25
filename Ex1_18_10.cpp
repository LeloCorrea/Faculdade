//Anderson Corrêa da Cunha - Exercicio 1 - 18/10
//1 - Escreva uma função que receba 2 valores por parâmetro, teste-os e decremente o maior e incremente o menor, retornando-os alterados. 
//Modularização: Dividir problemas grandes em vários problemas menores.

#include <stdio.h>
#include <stdlib.h>
#include <iostream>		//Biblioteca para usar o idioma português!
//Função com passagem por referencia, passado o endereço da variavel usada como parametro, na chamada &nome na função *nome.
void UmaFuncao( int *valor1, int *valor2){			//Essa função é para varios calculos esta pegando o valor que foi digidato na variavel e incrementando 1. Minha função F1 recebe um valor.

	if(*valor1 > *valor2){ 
		*valor1 = *valor1 - 1;
		*valor2 = *valor2 + 1;
		printf("\nMaior Decrementando: %d\nMenor Incrementando: %d \n", *valor1, *valor2);	
	}
	else if(*valor2 > *valor1){
		*valor2 = *valor2 - 1;
		*valor1 = *valor1 + 1;
		printf("\nMaior Decrementando: %d\nMenor Incrementando: %d \n", *valor2, *valor1);
	}else if (*valor1 = *valor2){
	printf("\nOs valores digitados são iguais, por favor digite novos valores!\n\n");
	}
//	return valor;		Uma função void com vários cauclos não tem retorno.
}

int main (){								//Int main é uma função, função main.
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2;						//Declaração de variaveis.
	printf("Digite 2 valores: \n");			//Printando mensagem de solicitação.
	scanf("%d %d", &valor1, &valor2);		//Guardando o valor digitado na variavel valor.
	
	UmaFuncao( &valor1, &valor2);
//	printf("\nMenor Incrementando: %d\nMaior Decrementado: %d \n", valor1, valor2);
	
	system("pause");			//Informo o fim do programa.
	return 0;					//Função tem que retornar alguma coisa, variavel de controle ou resultado.
}

