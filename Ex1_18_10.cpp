//Anderson Corr�a da Cunha - Exercicio 1 - 18/10
//1 - Escreva uma fun��o que receba 2 valores por par�metro, teste-os e decremente o maior e incremente o menor, retornando-os alterados. 
//Modulariza��o: Dividir problemas grandes em v�rios problemas menores.

#include <stdio.h>
#include <stdlib.h>
#include <iostream>		//Biblioteca para usar o idioma portugu�s!
//Fun��o com passagem por referencia, passado o endere�o da variavel usada como parametro, na chamada &nome na fun��o *nome.
void UmaFuncao( int *valor1, int *valor2){			//Essa fun��o � para varios calculos esta pegando o valor que foi digidato na variavel e incrementando 1. Minha fun��o F1 recebe um valor.

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
	printf("\nOs valores digitados s�o iguais, por favor digite novos valores!\n\n");
	}
//	return valor;		Uma fun��o void com v�rios cauclos n�o tem retorno.
}

int main (){								//Int main � uma fun��o, fun��o main.
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2;						//Declara��o de variaveis.
	printf("Digite 2 valores: \n");			//Printando mensagem de solicita��o.
	scanf("%d %d", &valor1, &valor2);		//Guardando o valor digitado na variavel valor.
	
	UmaFuncao( &valor1, &valor2);
//	printf("\nMenor Incrementando: %d\nMaior Decrementado: %d \n", valor1, valor2);
	
	system("pause");			//Informo o fim do programa.
	return 0;					//Fun��o tem que retornar alguma coisa, variavel de controle ou resultado.
}

