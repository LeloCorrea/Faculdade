#include<stdio.h>
#define TAM 1450

int main (){
	int vetP[TAM], i;
	
	printf("Valores impares contidos no vetP:");
	for (i=0; i<TAM; i++){	//enquanto o i que inicializa em zero for menor que o tamanho que � 1450
		if(vetP[i]%2==0){	//se o resto da divis�o do vetor na posit�o i( que � 0) por 2 for igual a 0
			printf ("%i \t", vetP[i]);	// printa na tela o vetorp na posi��o i
			}
	}
}
