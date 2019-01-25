#include <stdio.h>

int main (){
	float n1, n2, n3, soma;
	float media;
	
	printf ("Digite o primeiro valor: ");
	scanf ("%f", &n1);
	
	printf ("\nDigite o segundo valor: ");
	scanf ("%f", &n2);
	
	printf ("\nDigite o terceiro valor: ");
	scanf ("%f", &n3);
	
	soma = (n1+n2+n3);
	
	printf("\nResultado: %f", soma);
	
	media = soma/3;
	
	printf("\nResultado da media: %f", media);	
}
