#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <cmath>
#include <ctype.h>
#define HABI 2

//ESTRUTURA DE DADOS
	struct cadastroRedville {
	char nome[30];
	int  idade;
	char sexo;
	float salario;
	int  nFilhos;
	};

int main (){
	setlocale(LC_ALL,"Portuguese");		//Define o idioma portugu�s para o programa.
	int i;								//Variaveis inteiras
	float mediaSal = 0; 				//Variaveis float
	
	//VETOR QUE VAI SALVAR OS DADOS DA ESTRUTURA
	struct cadastroRedville Pesquisa [HABI];
	
	for(i = 0; i <HABI; i++){
	printf("Nome do habitante: ");		//Char nome usasse gets
	gets(Pesquisa[i].nome);				//Fun��o para receber um conjunto de caracteres (string)
	fflush(stdin);						//Fun��o para limpar o buffer de mem�ria
	printf("Idade: ");					//Inteiro idade usasse scaf com &
	scanf("%d", &Pesquisa[i].idade);	//Recebe a variavel
	fflush(stdin);						//Fun��o para limpar o buffer de mem�ria
	printf("Sexo: ");					//Char sexo usasse gets
	scanf("%c",&Pesquisa[i].sexo);		//Fun��o para receber um conjunto de caracteres (string)
	fflush(stdin);						//Fun��o para limpar o buffer de mem�ria
	printf("Salario: ");				//Float Sal�rio
	scanf("%f", &Pesquisa[i].salario);	//Recebe a variavel
	printf("Numero de filhos: ");		//Inteiro Sal�rio
	scanf("%d", &Pesquisa[i].nFilhos);	//Recebe a variavel
	fflush(stdin);						//Fun��o para limpar o buffer de mem�ria
	system("cls");						//Fun��o para limpar a tela.
	}
	//C�lculo da m�dia:
	for(i = 0; i< HABI; i++)
			mediaSal += Pesquisa[i].salario;	//Acumulativo (A variavel recebe ela mesmo + o valor que estou agregando a ela.
		mediaSal /= (float)HABI;
		printf("A m�dia do sal�rio �: %2.f\n",mediaSal);
	}
	
	
