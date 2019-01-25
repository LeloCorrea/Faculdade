#include <string.h>
#include <windows.h>
#include <cmath>

char texto [100]; //A variavel texto é uma string que aceita 100 caractéres
int numero;

int main ()
{ //setlocale(LC_ALL, "Portuguese");
	
	while(true)
	{
		printf("Digite um texto:");
		gets(texto);
		//scanf("%s", &texto);
		
		printf("Digite um numero:",&numero);
		scanf("d",&numero);
		
		printf("\n Texto digitado: <%s>", texto);
		printf("\n Numero digitado: <%d>", numero);
	}
}

