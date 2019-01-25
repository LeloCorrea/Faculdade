//Anderson Corrêa da Cunha

//4. (2.5 Pontos) Implemente um Programa em C, que escreve os 100 primeiros números primos existentes.
//Lembre-se que um número primo é aquele que é divisível apenas por 1 e ele mesmo (use o comando break para a implementação).

#include <stdio.h>
int main(){
	int div = 0, i = 1, valor = 0, cont = 0;
	while ( cont < 100){
		i=1;
		valor++;
		div=0;
		while (i <= valor){
			if (valor % i == 0){
				div++;
			}
			if (div>2){
				break;
			}
			i++;
	}
	if (div == 2){
		printf("%i \t ",valor);
		cont++;
	}
}
}
