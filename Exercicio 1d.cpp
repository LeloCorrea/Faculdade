#include <stdio.h>
#define TAM 1000

int main (){
	int i=0, nro=0; 	// variaveis i+inicializada em 0 e numero inicializado em 0
	printf("1000 primeiros numeros valores multiplos de 5: \t");	// mostra na tela o enunciado os 1000 primeiros numeros
	while (i < TAM){	// enquanto i for menor que o meu tamanho que � 1000
		if (nro % 5 == 0){	//se o resto da divis�od o meu numero por 5 for igual a 0
			printf("%i \t", nro);	// mostra na tela os numeros
			i++;	// i que inicializou em 0 incrementa 1 toda a vez que entrar no meu la�o se a condi��o for % 5 == 0
		}
		nro++;	// meu numero que inicializou em 0 incrementa mais 1
	}
}

/*
TESTE DE MESA:
PRIMEIRO (WHILE): ENQUANTO O MEU I QUE INICIALIZOU EM 0 FOR MENOR QUE O MEU TAM QUE � 1000 ENTRA NO MEU LA�O
SEGUNDO (IF): PARA ENTRAR NA CONDI��O SE O RESTO DA DIVIS�O ENTRE O MEU NUMERO E O VALOR 5 TEM QUE SER IGUAL A 0.
CUMPRINDO-SE ISSO PRINTA NA TELA O RESTO DA MINHA DIVIS�O.
O MEU I QUE ANTES ERA 0 INCREMENTA

ENTRA NO WHILE MEU I QUE � 0 � MENOR QUE O MEU TAM QUE � MIL
SE O RESTO DO MEU NUMERO QUE � ZERO DIVIDIDO POR 5 FOR IGUAL A 0 PRINTA NA TELA O NUMERO
INCREMENTA 1 NO MEU I
E INCREMENTA 2 NO MEU NUMERO

I=1
NRO=1

MEU I QUE � 1 � MENOR QUE O MEU TAM QUE � MIL? SIM
ENT�O ENTRA NO MEU IF
SE O RESTO DA DIVIS�O DO MEU NUMERO POR 5 FOR IGUAL A 0 PRINTA NA TELA
SE MEU NUMERO QUE � 2 DIVIDIDO POR 5 FOR IGUAL A 0 PRINTA, COMO N�O �
MEU I INCREMENTA MAIS UM
MEU NUMERO INCREMENTA MAIS UM

I=2
NRO=2

E ASSIM POR DIANTE.
