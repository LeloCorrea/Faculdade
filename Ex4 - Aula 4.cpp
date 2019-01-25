#include <stdio.h>

int main (){

float n1, n2, n3;

 printf("Digite um numero:");
 scanf("%f",&n1);
 
 printf("\nDigite um numero:");
 scanf("%f",&n2);
 
 printf("\nDigite um numero:");
 scanf("%f",&n3);
 
 if ((n1 > n2) && (n1 > n3))
 	printf ("\nO maior valor e: %.2f", n1);
 if ((n2 > n1) && (n2 > n3))
 	printf ("\nO maior valor e: %.2f", n2); 
 if ((n3 > n1) && (n3 > n2))
 	printf ("\nO maior valor e: %.2f", n3);
}
