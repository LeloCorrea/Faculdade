#include <stdio.h>

int main (){
	
	int num, i=0, num2;
	
	while (true){
	printf("Digite um numero entre 5 e 20: ");	
	scanf("%d",&num);
	
		if(num < 5 || num > 20){	// Se o numero estiver dentro do intervalo entre 5 e 20.
			printf ("\nErro, o valor digitado esta fora do intervalo!\n\n");	// Apresenta a mensagem de erro!
		}
		else{
			if( num % 2 == 0 ){ 	// Se o numero for par.
				printf("Digite um segundo valor impar, menor que o digitado anteriormente: ");
				scanf("%d", &num2);
					if (( num2 % 2 == 1 && num2 < num)){	// Se o numero for impar e menor do que o primeiro numero digitado
						for (num2 = num2; num2 <= num; num2++){		//Entra no for para imprimir os valores
							printf("Valores: %d\n", num2);
						}
					}else{
						printf("Digite um numero que seja impar e menor do que o valor digitado anteriormente!");	
					}
			}else{ // Se o numero for impar
				printf("Digite um segundo valor par, maior que o digitado anteriormente: ");
				scanf("%d", &num2);
					if (( num2 % 2 == 0 && num2 > num)){	// Se o numero for par e maior do que o primeiro numero digitado
						for (num2 = num2; num2 >= num; num2--){		//Entra no for para imprimir os valores
							printf("Valores: %d\n", num2);
						}
					}else{
						printf("Digite um numero que seja par e maior do que o valor digitado anteriormente!");	
					}
			}
		}break;
	}
}
