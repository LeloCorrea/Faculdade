
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
void adivinhaNumero( int varUser , int varSort, int *numero){
	int  varSort = 0 ;
	if(varUser < varSort){
		*numero = 0;
		}if(varUser > varSort){
			*numero = 1;
			}else(varUser == varSort){
				*numero = 2;
			}
		
	return *numero;
}
int main (){
	setlocale(LC_ALL, "Portuguese");
	int numero, varSort;
	srand(time(NULL));
	varSort = rand() % 1000;
	
	printf("Tenho um N�mero de 0 a 1000. Voc� pode adivinhar? Por favor, digite seu palpite:");
		
    adivinhaNumero( int i, int varUser , int varSort, int *numero);
	
	while(numero != r){
		if(&numero = 0 ){
		 print("Muito Baixo! Tente novamente.");
			}if(&numero = 1 ){
		 		print("Muito Alto! Tente novamente.");
			}else{
				printf("Excelente! Voc� adivinhou o n�mero!!!");
			}
}
}
