#include <stdio.h>
//Anderson Corr�a da Cunha - Exercicio aula 6 - Comando if - 18/09/2017

//Um vendedor necessita de um programa que calcule o pre�o total devido por um cliente.
//A implementa��o deve receber o c�digo de um produto e a quantidade comprada e calcular o pre�o total, usando para isso a tabela abaixo:
//C�digo do Produto 	Pre�o Unit�rio (R$)
//1001					5,32
//1324					6,45
//6524					2,37
//1987					5,32
//7623					6,45

int main (){
	float total,codigo;													//Valor total como sa�da e c�digo como entrada
	int quantidade;														//Quantidade como entradas
	
	printf("Digite o codigo do produto:\n");
	scanf("%f",&codigo);
	printf("\nQuantidade:\n");
	scanf("%i",&quantidade);
	
	if((codigo==1001)){  
	  total=(quantidade*5.32); 
	  printf("\nValor total: %.2f",total); 
	    }else{
	  		  if(codigo==1324){
		      	total=(quantidade*6.45);
		      	printf("\nValor total: %.2f",total);
		      }else{
		      		if(codigo==6524){
						total=(quantidade*2.37);
						printf("\nValor total: %.2f",total);
				}else{
						if(codigo==1987){
							total=(quantidade*5.32);
							printf("\nValor total: %.2f",total);
					}else{
						if(codigo==7623){
							total=(quantidade*6.45);
							printf("\nValor total: %.2f",total);
						} else{
							printf("\nCodigo invalido! %.2f",total); 	//Caso o c�digo digitado seja invalido mostra para o vendedor!
					} 
				}
	    }
}
}
}
