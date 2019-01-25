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

int dividir(int vetor[], int esq, int dir){	//
	int aux;	// para a troca de posições
	int cont = esq;

	for(int i = esq + 1; i <= dir; i++){
		if (vetor[i] < vetor[esq]){	// teste a posição i é menor que a esquerda?
			cont++;
			aux = vetor[i];
			vetor[i] = vetor[cont];	// o cont serve para saber o numero de trocas, manipula a posição a ser trocada
			vetor[cont] = aux;
		}
	}
	aux = vetor[esq];
	vetor[esq] = vetor[cont];
	vetor[cont] = aux;

	return cont;

//Atraves da função
void quick( int vetor[], int esq, int dir) {
	int pos;	// qual a posição que ele parou de ordenar
	
	if(esq < dir){	// verifica se a esquerda é menor que a direita
		pos = dividir(vetor, esq, dir);	
		quick(vetor, esq, pos - 1);
		quick(vetor, pos + 1,dir);
		}
}

int main(){
	int quick, dividir;
	int vetor[] = {0,1,9,2,8,3,7,4,6,5};
	int n = 10;
	
	quick(vetor,0, n);

	printf("\n\n\n");
	
	for(int i = 0; i < n; i++ )
	
	printf("\n\n\n");
	
	system("pause");
	return 0;
}



/*
O método de ordenação de vetores Quick sort (ordenação rápida) escolhe um elemento que é chamado pivô e ordena atráves da comparação,
onde todos os números que forem menores que o pivô ficarão anteriores a ele e todos os que forem maiores ficaram posteriores a ele, separando o vetor
em duas partes, é um método recursivo.

link: https://www.devmedia.com.br/algoritmos-de-ordenacao-analise-e-comparacao/28261
*/
