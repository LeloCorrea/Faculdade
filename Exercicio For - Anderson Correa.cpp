//Anderson Corr�a da Cunha

/*Implemente um Programa em C, que apresente o calculo do Fatorial dos 10 primeiros valores existentes (iniciando em zero).
A mensagem para o usu�rio deve ser: n! = Fatorial, onde n � o n�mero que e o Fatorial � o respectivo calculo do fatorial do n�mero.*/

// Comando For(variavel de inicializa��o, condi��o, controle) -> for (i=0;i<5;i++)

#include <stdio.h>

int main (){
	int fatorial, j, i;
	
	for(i = 0; i < 10; i++){
		fatorial = i;
		for(j = i-1; j >= 1; j--){
			fatorial = fatorial * j;
		}
		printf("O fatorial de %i � : %i.\n", i, fatorial);
	}
}

