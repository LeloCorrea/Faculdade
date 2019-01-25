#include <stdio.h>

int main (){
	float n1, n2, n3,n4,n5, soma, media;
	
	printf ("Digite o primeiro valor: ");
	scanf ("%f", &n1);
	
	printf ("\nDigite o segundo valor: ");
	scanf ("%f", &n2);
	
	printf ("\nDigite o terceiro valor: ");
	scanf ("%f", &n3);
	
	printf ("\nDigite o quarto valor: ");
	scanf ("%f", &n4);
	
	printf ("\nDigite o quinto valor: ");
	scanf ("%f", &n5);
	
	soma = (n1+n2+n3+n4+n5);
	
	printf("\nResultado: %.2f", soma);
	
	media = soma/5;
	
	printf("\nResultado da media: %.2f", media);	
}
