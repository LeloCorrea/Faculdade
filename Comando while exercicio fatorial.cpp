//Anderson Corr�a da cunha - Exercicio Comando While

//Implemente um Programa em C, que leia um valor inteiro e calcule o seu Fatorial. 
//Apresente ao usu�rio o valor e o seu respectivo Fatorial da seguinte forma: n! = Fatorial.
//Por exemplo, Fatorial de 5 �:
//5! = 5 * 4 * 3 * 2 * 1 = 120 (o processamento � n�o � para imprimir, apenas o valor final)
//Sa�da para o usu�rio (mensagem que dever� ser emitida): n! = ????, por exemplo, sendo o c�lculo do fatorial de 5, ficaria: 5! = 120

#include <stdio.h>
int main (){
	int val,fatorial=1;
	
	printf("Digite o valor para saber o seu numero fatorial: ");
	scanf("%i",&val);
	
	while (val>0){														//Enquanto o valor digitado for maior que 0.
		fatorial=(fatorial*val);										//Fatorial � igual a fatorial vezes o valor digitado.
		val--;															//Decrementa um do valor.
	}
	printf("\nFatorial: %i\n", fatorial);								//Printa na tela o valor da fatorial.
}
