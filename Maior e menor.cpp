//Anderson Corr�a da Cunha - Aula 9 - Estruturas de comando de fluxo - Comando While.

//Implemente um Programa em C, que receba um conjunto de valores inteiros. 
//Ao final apresente ao usu�rio o maior e o menor valor lido. 
//Considere que para encerrar a entrada de dados deve ser digitado o neutro (zero);
//para os valores negativos deve ser enviada uma mensagem de erro solicitando um novo valor; os valores negativos n�o entrar�o no c�lculo (compara��o).

#include <stdio.h>
int main (){
	int i=0, maior=0, menor=0, aux=0;
	while(1){
		printf("Digite um conjunto de valores, para saber o maior e o menor valor dentre eles: ");
		scanf("%i", &aux);
		if(i==0){
		maior=aux;
		menor=aux;
		i++;
		}else if(aux==0){
		break;
		}else if(aux<0){
		printf ("Erro, por favor insira um novo valor\n");
		}else if(aux>maior){
		maior = aux;
		}else if(aux<menor){
		menor = aux;
		}
	}
	printf ("\n\nMaior numero: %i \nMenor numero: %i", maior, menor);
}
	
