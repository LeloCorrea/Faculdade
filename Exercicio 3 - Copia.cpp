#include<stdio.h>
#define TAM 10
int main(){
	int x,vet[TAM];
	
	for(x=0;x<TAM;x++){ // enquanto o meu x que inicializou em 0 for menor que o meu tamanho
	printf("Digite o %d valor: ",x+1);	// aparece na tela digite um valor inteiro usando o %d, e incrementa 1 no x
	scanf("%d",&vet[x]);	// permite a leitura de dados do print e insere no vetor X, e em seguida incrementa 1 no x
	}
	for(x=0;x<TAM;x++){		//enquanto o meu x que inicializou em 0 for menor que o meu tamanho
	vet[x]=vet[x]*2;	// meu vetor x informa que o meu vetor x multiplica por 2, logo em seguida x incrementa 1
	}
	for(x=0;x<TAM;x++){	//enquanto o meu x que inicializou em zero for menor que o meu tamanho
	printf("vet[%d] = %d\t",x+1,vet[x]);// printa na tela o meu vetor, %d pois é um nro real, x incremanta 1,
	// e aparece o vetor na posição x
	}
}
