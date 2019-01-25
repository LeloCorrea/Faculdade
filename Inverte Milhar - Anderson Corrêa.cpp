//Anderson Corrêa da Cunha - Exercicio 1 - 18/10
/*Observações:
- Implemente um Programa em C com Funções descritas abaixo, através de um menu (Função main) de escolha.
 a)Função que receba um valor inteiro (milhar) como parâmetro e retorna o número com seus dígitos invertidos. Por exemplo, dado o valor 7631,
  a Função deve retornar 1367.
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>		//Biblioteca para usar o idioma português!
//Função com passagem por referencia, passado o endereço da variavel usada como parametro, na chamada &nome na função *nome.
void InverteMilhar( int *num, int *num1, int *num2, int *num3, int *num4 ){ 	//Função.
	if(*num > 999 && *num < 9999){	//Se o meu numero for maior que 999 e menor do que 9999 é sinal que ele tem 4 digitos, portanto é um milhar.
		*num1  = *num %10;			//O meu numero1 vai ser igual ao resto da divisão do meu numero por 10
		*num   = *num /10;			//O meu numero vai ser igual ao meu numero dividido por 10
		*num2  = *num %10;			//O meu numero2 vai ser igual ao resto da divisão do meu numero por 10
		*num   = *num /10;			//O meu numero vai ser igual ao meu numero dividido por 10
		*num3  = *num %10;			//O meu numero3 vai ser igual ao resto da divisão do meu numero por 10
		*num   = *num /10;			//O meu numero vai ser igual ao meu numero dividido por 10
		*num4  = *num %10;			//O meu numero3 vai ser igual ao resto da divisão do meu numero por 10
		
		printf("\nOs numeros invertidos são: %d%d%d%d\n\n", *num1,*num2,*num3,*num4); //Printando meus numeros na tela.
    
	}else if(*num <= 999 || *num > 9999){	//Se o meu valor for menor ou igual a 999 ou maior do que 9999 entra no else com a informção de erro no valor digitado.
		printf("\nOs valores digitados são diferentes do que foi solicitado!\n\n");
	}	
		//	return valor;		Uma função void com vários cauclos não tem retorno.
}

int main (){								//Int main é uma função, função main.
	setlocale(LC_ALL, "Portuguese");
	
	int num, num1, num2, num3, num4;						//Declaração de variaveis.
	printf("Digite numero inteiro de 4 digitos: \n");		//Printando mensagem de solicitação.
	scanf("%d", &num);								   		//Guardando o valor digitado na variavel valor.
	
    InverteMilhar( &num, &num1, &num2, &num3, &num4 );		//	printf("\nMenor Incrementando: %d\nMaior Decrementado: %d \n", valor1, valor2);
	
	system("pause");										//Informo o fim do programa.
	return 0;												//Função tem que retornar alguma coisa, variavel de controle ou resultado.
}
