#include <stdio.h>
#define TAM 3450

int main (){
	int i=0, j;	//variaveis i inicializado em 0 e j 
	float maior, menor, vet[TAM];	// variaveis maior, menor e vetor com o tamanho de 3450
	
	do{		//enquanto
		if(vet[i]!=0.0){
		maior=vet[i];
		menor=vet[i];
	}
	i++;
	}while ((vet[i]==0.0) && (i<TAM));
	
	for (j=i; j<TAM ; j++){
		if (vet[j]!=0.0){
			if(vet[j]>maior) maior=vet[j];
			if(vet[j]<menor) menor=vet[j];
		}
		printf ("Maior = %2.f \n Menor = %2.f\n", maior, menor);
	}
}
	
