#include <stdio.h>
/*
28/Maio
Olá Pessoal, Devido a greve dos caminhoneiros, não tivemos aula presencial no dia de hoje.
Portanto, estou passando um exercício para que seja desenvolvido utilizando matrizes.
Esta atividade deve ser enviada para o seguinte e-mail:
ivoneimarques@gamil.com
No assunto coloque: ULBRA_Gravatai_Algoritmos_I_[Atividade_Aula_28/Maio]
Enviar até dia 3/Junho.
Exercício 01
Faça um algoritmo onde o usuário entre com as dimenções de uma matriz, e o algoritmo crie a matriz com o desenho de um chadrez, conforme exemplo.
Tu deves utilizar uma matriz boleana e utilizar o máximo de métodos que conseguires.
Exemplo:
Qt. linhas:  4
Qt. colunas: 5
[x][ ][x][ ][x]
[ ][x][ ][x][ ]
[x][ ][x][ ][x]
[ ][x][ ][x][ ]
*/

int main (){
	int linha, coluna, l, c, i;
	
	printf("Digite o numero de linhas: ");
	scanf("%d", &linha);
	
	printf("Digite o numero de colunas: ");
	scanf("%d", &coluna);
	
	int matriz[linha][coluna];					// A matriz tem que estar depois de solicitar os valores.
		
	for (l = 0; l < linha; l++){				// O L inicia em 0, Se o L for menor que linha, incrementa 1.
		for (c = 0; c < coluna; c++){			// O C inicia em 0, Se o C for menor que a coluna, incrementa 1.
			matriz[l][c] = 1;				// Informo que todas as posições da matriz são iguais a 1.
			if ((( l % 2 == 0) && (c % 2 == 0)) || ((l % 2 == 1) && (c % 2 == 1))) // Condição de l && C par || l && C impar.
				matriz[l][c] = 0;			
			}
	}

	for(l = 0; l < linha; l++){
		for(c = 0; c < coluna; c++)
			printf("%d",matriz[l][c]);
		
		printf("\n");
	}
}

