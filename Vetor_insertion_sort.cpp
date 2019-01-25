/* Anderson Corr�a da Cunha - Atividade Semipresencial: Ordena��o de Vetores - Insertion sort

Um tipo de algoritmo muito usado na resolu��o de problemas computacionais s�o os algoritmos de ordena��o, 
que servem para ordenar/organizar uma lista de n�meros ou palavras de acordo com a sua necessidade. 
As linguagens de programa��o j� possuem m�todos de ordena��o, mas � bom saber como funcionam os algoritmos,
pois h� casos de problemas em que o algoritmo de ordena��o gen�rico n�o resolve, �s vezes � necess�rio modific�-lo.
Os mais populares algoritmos de ordena��o s�o: Insertion sort, Selection sort, Bubble sort, Comb sort, Quick sort, Merge sort,
Heap sort e Shell sort. 
Esta atividade consiste em pesquisar dois m�todos conhecidos de ordena��o e test�-lo em um vetor de 10 elementos inteiros,
explicando o seu funcionamento.
Descrever o algoritmo (lista de instru��es) e a refer�ncia (URL) na qual ele foi encontrado (Wikipedia n�o � uma fonte confi�vel)
Explicar textualmente como o algoritmo faz a ordena��o (explicar a l�gica de funcionamento do m�todo) ? Utilizar suas palavras,
n�o fazer copy e paste da Internet)
*/

#include <stdio.h>
#define TAM 10

int main (){
	int i, j, num_atual;
	int num_vetor[TAM] = {0,1,9,2,8,3,7,4,6,5};
	
	for(i = 1 ; i < TAM ; i++ ){
		num_atual = num_vetor[i];
		j = i - 1 ;
		while ((j >=0) && (num_atual < num_vetor [j])){
			num_vetor[j+1] = num_vetor[j];
			j--;
		}
		num_vetor[j+1] = num_atual;
	}
	for(i = 1 ; i< TAM ; i++ ){
		printf("%d", num_vetor[i]);
	}
	return 0;
}

/*
O m�todo de inser��o (Insertion Sort funciona) o m�todo serve para ordena��o de pequenas listas de n�meros, ordenando da esquerda para a direita a partir do segundo
elemento que esta no indice anterior, atrav�s de compara��o se o numero da direita for menor que o n�mero da esquerda o n�mero da direita assume a posi��o da esquerda
e assim sucessivamente.

link: https://www.devmedia.com.br/algoritmos-de-ordenacao-analise-e-comparacao/28261
*/
