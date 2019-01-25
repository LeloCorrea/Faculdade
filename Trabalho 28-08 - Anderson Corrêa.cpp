#include <stdio.h>

int main (){
	int val, val2,val3, val4,n1,n2,n3, n4;					//Declara as variaveis
	printf("Digite o valor:\n");					//Soliceita a digitação do valor
	scanf("%i",&val);								//Permite a leitura dos dados inteiros de val
	
	n1=val/100;										//n1 é igual ao valor digitado e divido por 100
	
	n2=val%50;										//n2 é igual ao mod de 50 sobre o valor que digitado
	val2=n2/20;										//val2 é igual ao n2 dividido por 20
	
	n3=n2%20;										//n3 é igual ao mod de n2 dividido por 20
	val3=n3/10;										//val3 é igual ao n3 dividido 10
	
	printf("\n%i Notas de 100\n", n1);				//Mostra na tela o valor do primeiro calculo
	printf("\n%i Notas de 50\n", val2);				//Mostra na tela o valor do segundo calculo
	printf("\n%i Notas de 20\n", val3);				//Mostra na tela o valor do terceiro calculo
	printf("\n%i Notas de 10\n", val3);
}

