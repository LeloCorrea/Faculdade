#include <stdio.h>

float n1, n2; // Declaração de variáveis.

void lerN1 () //Função
{
	printf ("\nDigite o primeiro valor: \n");
	scanf ("%f", &n1);
}//-----------------------------------------Final mostra n1.

void lerN2 () //Função
{
	printf ("\nDigite o segundo valor: \n");
	scanf ("%f", &n2);
}//-----------------------------------------Final mostra n2.

void mostraMaiorNumero () //Função
{
	if (n1 > n2)
		printf ("\nO maior valor digitado e: %f",n1);
	if (n2 > n1)
		printf ("\nO maior valor digitado e: %.2f",n2);
	if(n1==n2)
		printf ("\nOs valores são iguais.!");	
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
	
	//verificar qual é a maior variavel
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
		// Verificar qual é a maior variavel.
		// Mostrar em forma de pensagem (print) qual variavel é maior
		mostraMaiorNumero();
	}
}//-----------------------------------------Final main.*/
