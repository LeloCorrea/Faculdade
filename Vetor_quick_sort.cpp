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

int dividir(int vetor[], int esq, int dir){	//
	int aux;	// para a troca de posi��es
	int cont = esq;

	for(int i = esq + 1; i <= dir; i++){
		if (vetor[i] < vetor[esq]){	// teste a posi��o i � menor que a esquerda?
			cont++;
			aux = vetor[i];
			vetor[i] = vetor[cont];	// o cont serve para saber o numero de trocas, manipula a posi��o a ser trocada
			vetor[cont] = aux;
		}
	}
	aux = vetor[esq];
	vetor[esq] = vetor[cont];
	vetor[cont] = aux;

	return cont;

//Atraves da fun��o
void quick( int vetor[], int esq, int dir) {
	int pos;	// qual a posi��o que ele parou de ordenar
	
	if(esq < dir){	// verifica se a esquerda � menor que a direita
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
O m�todo de ordena��o de vetores Quick sort (ordena��o r�pida) escolhe um elemento que � chamado piv� e ordena atr�ves da compara��o,
onde todos os n�meros que forem menores que o piv� ficar�o anteriores a ele e todos os que forem maiores ficaram posteriores a ele, separando o vetor
em duas partes, � um m�todo recursivo.

link: https://www.devmedia.com.br/algoritmos-de-ordenacao-analise-e-comparacao/28261
*/
