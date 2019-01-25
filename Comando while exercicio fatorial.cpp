//Anderson Corrêa da cunha - Exercicio Comando While

//Implemente um Programa em C, que leia um valor inteiro e calcule o seu Fatorial. 
//Apresente ao usuário o valor e o seu respectivo Fatorial da seguinte forma: n! = Fatorial.
//Por exemplo, Fatorial de 5 é:
//5! = 5 * 4 * 3 * 2 * 1 = 120 (o processamento – não é para imprimir, apenas o valor final)
//Saída para o usuário (mensagem que deverá ser emitida): n! = ????, por exemplo, sendo o cálculo do fatorial de 5, ficaria: 5! = 120

#include <stdio.h>
int main (){
	int val,fatorial=1;
	
	printf("Digite o valor para saber o seu numero fatorial: ");
	scanf("%i",&val);
	
	while (val>0){														//Enquanto o valor digitado for maior que 0.
		fatorial=(fatorial*val);										//Fatorial é igual a fatorial vezes o valor digitado.
		val--;															//Decrementa um do valor.
	}
	printf("\nFatorial: %i\n", fatorial);								//Printa na tela o valor da fatorial.
}
