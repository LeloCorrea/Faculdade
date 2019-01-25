/*Faça um algoritmo que leia um número entre 5 e 15.
Após, imprima a quantidade de asteriscos referentes ao número lido um ao lado do outro conforme o exemplo.
Caso o número não esteja no intervalo imprimir a seguinte mensagem de erro "Erro. Número fora do intervalo permitido."

Exemplo:
numerolido = 8
******** 

->Altere o exercicio anterior para que a impressão siga o seguinte padrão.
Ex.:
*
**
***
****
*****
******
*******
********
*/

#include <stdio.h>

int main (){
	int numero, i, k;
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
		for (int k = 0 ; k < numero ; k++){
			for(int i = 0; i < k; i++)// K esta sendo usado como teste para controlar o limite do for.
			printf("*");
		printf("\n");
	}
}
		

