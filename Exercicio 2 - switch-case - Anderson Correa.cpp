#include <stdio.h>

//Anderson Corrêa da Cunha - Exercicio 2 switch-case - 18/09

//Implemente um programa em C, que simule uma calculadora com as operações básicas (adição, subtração, multiplicação e divisão).
//Dica: os operadores matemáticos são do tipo char, então eles devem ser comparados com ‘ ’ (aspas simples).
//E poderá ser efetuada apenas uma operação por execução.

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
