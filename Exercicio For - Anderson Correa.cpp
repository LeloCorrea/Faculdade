//Anderson Corrêa da Cunha

/*Implemente um Programa em C, que apresente o calculo do Fatorial dos 10 primeiros valores existentes (iniciando em zero).
A mensagem para o usuário deve ser: n! = Fatorial, onde n é o número que e o Fatorial é o respectivo calculo do fatorial do número.*/

// Comando For(variavel de inicialização, condição, controle) -> for (i=0;i<5;i++)

#include <stdio.h>

int main (){
	int fatorial, j, i;
	
	for(i = 0; i < 10; i++){
		fatorial = i;
		for(j = i-1; j >= 1; j--){
			fatorial = fatorial * j;
		}
		printf("O fatorial de %i é : %i.\n", i, fatorial);
	}
}

