#include <stdio.h>

float n1, n2; // Declara��o de vari�veis.

void lerN1 () //Fun��o
{
	printf ("\nDigite o primeiro valor: \n");
	scanf ("%f", &n1);
}//-----------------------------------------Final mostra n1.

void lerN2 () //Fun��o
{
	printf ("\nDigite o segundo valor: \n");
	scanf ("%f", &n2);
}//-----------------------------------------Final mostra n2.

void mostraMaiorNumero () //Fun��o
{
	if (n1 > n2)
		printf ("\nO maior valor digitado e: %f",n1);
	if (n2 > n1)
		printf ("\nO maior valor digitado e: %.2f",n2);
	if(n1==n2)
		printf ("\nOs valores s�o iguais.!");	
}//-----------------------------------------Final Mostra maior numero.

bool continuar(){
	char k 's';
	fflush(stdin);
	print ("Continuar no laco? s/n:");
	scanf("%c",&k);
	if (k == 's')
		return true;
	return false;
}
	char k = 's';

int main(){
	do
	{	
	//ler as variaveis
	lerN1();
	lerN2();
	
	//verificar qual � a maior variavel
	//mostrar uma mensagem
	mostrarMaiorNumero();
	}while(continuar())
}

int main ()
{	int k;
	for (k=0 ; k<5 ; k++){
		printf("\n*");
	}
}
/*
	for(int k=0; k<5; k+1){
		// Ler as variaveis
		lerN1();
		lerN2();	
		// Verificar qual � a maior variavel.
		// Mostrar em forma de pensagem (print) qual variavel � maior
		mostraMaiorNumero();
	}
}//-----------------------------------------Final main.*/
