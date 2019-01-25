#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <cmath>

char texto [100]; //A variavel texto é uma string que aceita 100 caractéres
char texto2[100];

int numero, numero2;

int main ()
{ //setlocale(LC_ALL, "Portuguese");
	
	while(true)
	{
		printf("Digite um texto:");
		fflush(stdin);
		gets(texto);
		//scanf("%s", &texto);
		
		printf("\nDigite um numero:",&numero);
		scanf("d",&numero);
		
		numero2=numero;
		strcpy(texto2,texto);
		
		printf("\n Texto digitado: <%s>", texto);
		printf("\n Numero digitado: <%d>", numero);
		printf("\n Texto 2: <%s>", texto2);
		printf("\n Numero 2: <%d>", numero2 );
		
		for(int k=0; k<strlen(texto); k++) // função que conta a qtd de caracteres que foi digitado.
			printf("\n %d  %c\n",k,texto[k]);
	}
}

