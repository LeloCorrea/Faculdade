#include <stdio.h>

//Anderson Corr�a da Cunha - Exercicio 2 switch-case - 18/09

//Implemente um programa em C, que simule uma calculadora com as opera��es b�sicas (adi��o, subtra��o, multiplica��o e divis�o).
//Dica: os operadores matem�ticos s�o do tipo char, ent�o eles devem ser comparados com � � (aspas simples).
//E poder� ser efetuada apenas uma opera��o por execu��o.

int main (){
	char op;
	float val1, val2,result;
	
	printf("Escolha a opcao basica a ser utilizada na calculadora (adicao, subtracao, multiplicacao e divisao):\n");
	scanf("%c",&op);
	printf("\nDigite o valor 1 a ser calculado:\n");
	scanf("%f",&val1);
	printf("\nDigite o valor 2 a ser calculado:\n");
	scanf("%f",&val2);
	switch (op){
		case '+':{
			result=(val1+val2);
			printf("\nResultado: %.2f",result);
			break;
		}
			case '-':{
			result=(val1-val2);
			printf("\nResultado: %.2f",result);
			break;
		}
			case '*':{
			result=(val1*val2);
			printf("\nResultado: %.2f",result);
			break;
		}
			case '/':{
			result=(val1/val2);
			printf("\nResultado: %.2f",result);
			break;
		}
		default:{printf("Operacao Invalida!");}
	}
}
