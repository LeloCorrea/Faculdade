//Anderson Corr�a da Cunha - Exercicio 1 - 18/10
/*Observa��es:
- Implemente um Programa em C com Fun��es descritas abaixo, atrav�s de um menu (Fun��o main) de escolha.
 a)Fun��o que receba um valor inteiro (milhar) como par�metro e retorna o n�mero com seus d�gitos invertidos. Por exemplo, dado o valor 7631,
  a Fun��o deve retornar 1367.
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>		//Biblioteca para usar o idioma portugu�s!
//Fun��o com passagem por referencia, passado o endere�o da variavel usada como parametro, na chamada &nome na fun��o *nome.
void InverteMilhar( int *num, int *num1, int *num2, int *num3, int *num4 ){ 	//Fun��o.
	if(*num > 999 && *num < 9999){	//Se o meu numero for maior que 999 e menor do que 9999 � sinal que ele tem 4 digitos, portanto � um milhar.
		*num1  = *num %10;			//O meu numero1 vai ser igual ao resto da divis�o do meu numero por 10
		*num   = *num /10;			//O meu numero vai ser igual ao meu numero dividido por 10
		*num2  = *num %10;			//O meu numero2 vai ser igual ao resto da divis�o do meu numero por 10
		*num   = *num /10;			//O meu numero vai ser igual ao meu numero dividido por 10
		*num3  = *num %10;			//O meu numero3 vai ser igual ao resto da divis�o do meu numero por 10
		*num   = *num /10;			//O meu numero vai ser igual ao meu numero dividido por 10
		*num4  = *num %10;			//O meu numero3 vai ser igual ao resto da divis�o do meu numero por 10
		
		printf("\nOs numeros invertidos s�o: %d%d%d%d\n\n", *num1,*num2,*num3,*num4); //Printando meus numeros na tela.
    
	}else if(*num <= 999 || *num > 9999){	//Se o meu valor for menor ou igual a 999 ou maior do que 9999 entra no else com a inform��o de erro no valor digitado.
		printf("\nOs valores digitados s�o diferentes do que foi solicitado!\n\n");
	}	
		//	return valor;		Uma fun��o void com v�rios cauclos n�o tem retorno.
}

int main (){								//Int main � uma fun��o, fun��o main.
	setlocale(LC_ALL, "Portuguese");
	
	int num, num1, num2, num3, num4;						//Declara��o de variaveis.
	printf("Digite numero inteiro de 4 digitos: \n");		//Printando mensagem de solicita��o.
	scanf("%d", &num);								   		//Guardando o valor digitado na variavel valor.
	
    InverteMilhar( &num, &num1, &num2, &num3, &num4 );		//	printf("\nMenor Incrementando: %d\nMaior Decrementado: %d \n", valor1, valor2);
	
	system("pause");										//Informo o fim do programa.
	return 0;												//Fun��o tem que retornar alguma coisa, variavel de controle ou resultado.
}
