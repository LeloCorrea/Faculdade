#include <stdio.h>   // Inclus�o da biblioteca de entradas e sa�das

int main (){ //int=inteiro e main
	char nome;
	int idade,anoN,anoA;
    string txt;
	printf("txt ");
	scanf("%[A-Z a-z]",&nome);
	printf("Sua idade no final do ano: ");
	scanf("%i",&idade);
	printf("Ano atual: ");
	scanf("%i",&anoA);
	anoN=anoA-idade; //Cauculo do ano de nascimento
	printf("%i",anoN);
}
