/* Anderson Corrêa da Cunha - Atividade Semipresencial: Ordenação de Vetores - Insertion sort

Um tipo de algoritmo muito usado na resolução de problemas computacionais são os algoritmos de ordenação, 
que servem para ordenar/organizar uma lista de números ou palavras de acordo com a sua necessidade. 
As linguagens de programação já possuem métodos de ordenação, mas é bom saber como funcionam os algoritmos,
pois há casos de problemas em que o algoritmo de ordenação genérico não resolve, às vezes é necessário modificá-lo.
Os mais populares algoritmos de ordenação são: Insertion sort, Selection sort, Bubble sort, Comb sort, Quick sort, Merge sort,
Heap sort e Shell sort. 
Esta atividade consiste em pesquisar dois métodos conhecidos de ordenação e testá-lo em um vetor de 10 elementos inteiros,
explicando o seu funcionamento.
Descrever o algoritmo (lista de instruções) e a referência (URL) na qual ele foi encontrado (Wikipedia não é uma fonte confiável)
Explicar textualmente como o algoritmo faz a ordenação (explicar a lógica de funcionamento do método) ? Utilizar suas palavras,
não fazer copy e paste da Internet)
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
O método de inserção (Insertion Sort funciona) o método serve para ordenação de pequenas listas de números, ordenando da esquerda para a direita a partir do segundo
elemento que esta no indice anterior, através de comparação se o numero da direita for menor que o número da esquerda o número da direita assume a posição da esquerda
e assim sucessivamente.

link: https://www.devmedia.com.br/algoritmos-de-ordenacao-analise-e-comparacao/28261
*/
