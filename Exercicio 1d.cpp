#include <stdio.h>
#define TAM 1000

int main (){
	int i=0, nro=0; 	// variaveis i+inicializada em 0 e numero inicializado em 0
	printf("1000 primeiros numeros valores multiplos de 5: \t");	// mostra na tela o enunciado os 1000 primeiros numeros
	while (i < TAM){	// enquanto i for menor que o meu tamanho que é 1000
		if (nro % 5 == 0){	//se o resto da divisãod o meu numero por 5 for igual a 0
			printf("%i \t", nro);	// mostra na tela os numeros
			i++;	// i que inicializou em 0 incrementa 1 toda a vez que entrar no meu laço se a condição for % 5 == 0
		}
		nro++;	// meu numero que inicializou em 0 incrementa mais 1
	}
}

/*
TESTE DE MESA:
PRIMEIRO (WHILE): ENQUANTO O MEU I QUE INICIALIZOU EM 0 FOR MENOR QUE O MEU TAM QUE É 1000 ENTRA NO MEU LAÇO
SEGUNDO (IF): PARA ENTRAR NA CONDIÇÃO SE O RESTO DA DIVISÃO ENTRE O MEU NUMERO E O VALOR 5 TEM QUE SER IGUAL A 0.
CUMPRINDO-SE ISSO PRINTA NA TELA O RESTO DA MINHA DIVISÃO.
O MEU I QUE ANTES ERA 0 INCREMENTA

ENTRA NO WHILE MEU I QUE É 0 É MENOR QUE O MEU TAM QUE É MIL
SE O RESTO DO MEU NUMERO QUE É ZERO DIVIDIDO POR 5 FOR IGUAL A 0 PRINTA NA TELA O NUMERO
INCREMENTA 1 NO MEU I
E INCREMENTA 2 NO MEU NUMERO

I=1
NRO=1

MEU I QUE É 1 É MENOR QUE O MEU TAM QUE É MIL? SIM
ENTÃO ENTRA NO MEU IF
SE O RESTO DA DIVISÃO DO MEU NUMERO POR 5 FOR IGUAL A 0 PRINTA NA TELA
SE MEU NUMERO QUE É 2 DIVIDIDO POR 5 FOR IGUAL A 0 PRINTA, COMO NÃO É
MEU I INCREMENTA MAIS UM
MEU NUMERO INCREMENTA MAIS UM

I=2
NRO=2

E ASSIM POR DIANTE.
