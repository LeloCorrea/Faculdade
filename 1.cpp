/*Fa�a um algoritmo que leia um n�mero entre 5 e 15.
Ap�s, imprima a quantidade de asteriscos referentes ao n�mero lido um ao lado do outro conforme o exemplo.
Caso o n�mero n�o esteja no intervalo imprimir a seguinte mensagem de erro "Erro. N�mero fora do intervalo permitido."

Exemplo:
numerolido = 8
******** 
*/

#include <stdio.h>

int main (){
	int i = 0, numero;
	
	do{	
	printf("Digite um numero: ");
	scanf("%d",&numero);	
		if (numero > 5 && numero <15)	// Se o teste for verdadeiro!
		{
			for (i = 0; i < numero ; i++){
			printf("*\t");
			}	
		}
		else							// Se o teste for falso!
		{
		printf("\nErro. Numero fora do intervalo permitido!");
		}
		printf("\n");
	}while(numero > 15 && numero <5); // Final do DO.
}

