#include <stdio.h>

//Anderson Corrêa da Cunha - Exercicio 1 (switch-case) - 18/-9

int main (){
int maior,n1,n2,n3,cont;
char op;

printf("Digite a opcao:\n");
scanf("%c",&op);

if((op=='M')||(op=='m')){
maior=n1;
	if(n2>maior) maior=n2;
	if(n3>maior) maior=n3;
		printf("\nMaior = %i\n",maior);}
		else{
	if((op=='P')||(op=='p')){
		cont=0;
	if(n1%2!=0) cont++;
	if(n2%2!=0) cont++;
	if(n3%2!=0) cont++;
		printf("\nQuantidade: %i\n",cont);
		}else printf("\nOpcao Invalida!\n");
}
}
