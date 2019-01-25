//Thiago Fonseca
/*(2.5 Pontos) Implemente um Programa em C, que escreve os 100
primeiros números primos existentes. Lembre-se que um número
primo é aquele que é divisível apenas por 1 e ele mesmo (use o
comando break para a implementação).*/
#include <stdio.h>

int main(){
  int valor, divisoes, i, contagem;
  for(valor = 1, contagem = 0; contagem < 100; valor++){
  	for(i = 1, divisoes = 0; i < valor; i++){
  		if(valor % i == 0){
  			divisoes++;
  			if(divisoes > 1) break;
  		}
  	}
  	if(divisoes == 1){
  	   printf("%i\t" , valor);
  	   contagem++;
  	 }  
  }
}
