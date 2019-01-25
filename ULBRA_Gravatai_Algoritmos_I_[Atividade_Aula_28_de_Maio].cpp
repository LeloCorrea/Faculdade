#include <stdio.h>
/*
28/Maio
Ol� Pessoal, Devido a greve dos caminhoneiros, n�o tivemos aula presencial no dia de hoje.
Portanto, estou passando um exerc�cio para que seja desenvolvido utilizando matrizes.
Esta atividade deve ser enviada para o seguinte e-mail:
ivoneimarques@gamil.com
No assunto coloque: ULBRA_Gravatai_Algoritmos_I_[Atividade_Aula_28/Maio]
Enviar at� dia 3/Junho.
Exerc�cio 01
Fa�a um algoritmo onde o usu�rio entre com as dimen��es de uma matriz, e o algoritmo crie a matriz com o desenho de um chadrez, conforme exemplo.
Tu deves utilizar uma matriz boleana e utilizar o m�ximo de m�todos que conseguires.
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
			matriz[l][c] = 1;				// Informo que todas as posi��es da matriz s�o iguais a 1.
			if ((( l % 2 == 0) && (c % 2 == 0)) || ((l % 2 == 1) && (c % 2 == 1))) // Condi��o de l && C par || l && C impar.
				matriz[l][c] = 0;			
			}
	}

	for(l = 0; l < linha; l++){
		for(c = 0; c < coluna; c++)
			printf("%d",matriz[l][c]);
		
		printf("\n");
	}
}

