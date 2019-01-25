#include <stdio.h>

int main (){
	
	int num, num2, i=0;
	
	while (true){	
	printf("Digite um numero entre 5 e 20: ");	
	scanf("%d",&num);
	
		if(num < 5 || num > 20){	// Se o numero estiver dentro do intervalo entre 5 e 20.
		printf ("\nErro, o valor digitado esta fora do intervalo!\n\n");	// Apresenta a mensagem de erro!
			
			if(num % 2 == 0){		//Se o resto da divisão do numero por dois for igual a zero significa que ele é par.
			printf("%d",num);
			}
		}
	}
}

