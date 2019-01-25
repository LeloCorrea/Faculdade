//Thiago Fonseca
/*S�o considerados primos g�meos os pares: 3 e 5, 5 e 7, 11 e 13, 17 e 19, ... ou seja, denomina-se um par de
n�meros primos g�meos cuja diferen�a � 2. Implemente um programa em Linguagem C, que escreve os 200
primeiros primos g�meos (use o \t para a impress�o � fica melhor organizado na tela, depois da segunda
linha).*/
#include <stdio.h>

int main(){
  int valor = 1, divisoes, i, pares = 0, ultimo = -1;
  while(pares < 200){
  	for(i = 1, divisoes = 0; i <= valor; i++){
  		if(valor % i == 0){
  			divisoes++;
  			if(divisoes > 2) break;
  		}
  	}
  	if(divisoes == 2){
  		if(ultimo != -1 && valor == ultimo + 2){
		    printf("%i-%i\t", ultimo, valor);
		    pares++;
      }
      ultimo = valor;
    }
    valor++;	
  }
}
