
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <cmath>


/*
Faça um algolritmo que leia várias vezes o nome e a idade de várias pessoas
e no final mostre o nome e a idade da pessoa mais velha.
*/

bool querContinuar()
{
	printf("\nContinuar? s/n: \n");
	char sn;
	fflush (stdin); //Limpa o buffer do teclado
	scanf("%c",&sn);
	
	if (sn == 's' || sn == 'S')
		return true;
	return false;
}



int main (){
char nome[100], nomeVelho[100];
int idade, idadeVelho;

	while(true){
		printf("Digite o nome da pessoa: ");
		scanf("%s",&nome);

	printf("Digite a idade da pessoa: ");
	scanf("%d",&idade);
	
	if (idade>idadeVelho){
		idadeVelho = idade;
		strcpy(nomeVelho,nome);
	//	printf("%s e %d", nome,idade);
	}

	printf("\nNome: %s",nomeVelho);
	printf("\nIdade: %i\n\n",idadeVelho);

if (querContinuar() == false)
{
	break;
}
}

}

