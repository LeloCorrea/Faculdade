/*Fa�a um algoritmo que leia um n�mero entre 5 e 15.
Ap�s, imprima a quantidade de asteriscos referentes ao n�mero lido um ao lado do outro conforme o exemplo.
Caso o n�mero n�o esteja no intervalo imprimir a seguinte mensagem de erro "Erro. N�mero fora do intervalo permitido."

Exemplo:
numerolido = 8
******** 

->Altere o exercicio anterior para que a impress�o siga o seguinte padr�o.
Ex.:
********
*******
******
*****
****
***
**
*

*/

#include <stdio.h>

int main (){
	int numero, i, k;
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
		for (int k = numero; k>0 ; k--){
			for(int i = 0; i < k; i++)
			printf("*");
		printf("\n");
	}
}
