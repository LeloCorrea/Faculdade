/*Anderson Corr�a da Cunha - Jogo da forca - 13/09/2018.*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <cmath>

#define TAM 101

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int tam;
	char string [TAM];
	
	printf("Digite uma palavra: ");
	gets(string); 				//gets (nome_string); Entrada e leitura biblioteca <string.h>
	printf("\nA palavra que foi digitade �: ");
	puts(string);				//puts (nome_string); Sa�da (Escrita) biblioteca <string.h>
	tam = strlen(string);		//strlen (nome_string); TAMANHO biblioteca <string.h>
	printf("A palavra digitada tem o seguinte tamanho: %d caracteres", tam);
	
}
