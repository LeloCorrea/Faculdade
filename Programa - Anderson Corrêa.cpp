//Anderson Corr�a da Cunha - Exercicio 1 - 18/10

#include <stdio.h>
#include <stdlib.h>
#include <iostream>		//Biblioteca para usar o idioma portugu�s!
#include <time.h>
//Fun��o com passagem por referencia, passado o endere�o da variavel usada como parametro, na chamada &nome na fun��o *nome.
void InverteMilhar( int *num, int *num1, int *num2, int *num3, int *num4 ){ 	//Fun��o.
	if(*num > 999 && *num < 9999){	//Se o meu numero for maior que 999 e menor do que 9999 � sinal que ele tem 4 digitos, portanto � um milhar.
		*num1  = *num %10;			//O meu numero1 vai ser igual ao resto da divis�o do meu numero por 10
		*num   = *num /10;			//O meu numero vai ser igual ao meu numero dividido por 10
		*num2  = *num %10;			//O meu numero2 vai ser igual ao resto da divis�o do meu numero por 10
		*num   = *num /10;			//O meu numero vai ser igual ao meu numero dividido por 10
		*num3  = *num %10;			//O meu numero3 vai ser igual ao resto da divis�o do meu numero por 10
		*num   = *num /10;			//O meu numero vai ser igual ao meu numero dividido por 10
		*num4  = *num %10;			//O meu numero3 vai ser igual ao resto da divis�o do meu numero por 10
		
		printf("\nOs numeros invertidos s�o: %d%d%d%d\n\n", *num1,*num2,*num3,*num4); //Printando meus numeros na tela.
    
	}else if(*num <= 999 || *num > 9999){	//Se o meu valor for menor ou igual a 999 ou maior do que 9999 entra no else com a inform��o de erro no valor digitado.
		printf("\nOs valores digitados s�o diferentes do que foi solicitado!\n\n");
	}	
		//	return valor;		Uma fun��o void com v�rios cauclos n�o tem retorno.
}

void lancaMoeda( int i){
	int contaCara = 0, contaCoroa = 0;
	srand(time(NULL));
	
	for( i = 0; i < 50; i++ ) {
		if (rand() % 2 == 0){
		 printf("Cara\t");
		 	contaCara = contaCara + 1;
			}else{
				printf("Coroa\t");
				contaCoroa = contaCoroa + 1;
			}
	}
	printf("\n\nN�meros de cara: %d\nN�meros de coroa: %d",contaCara, contaCoroa);
}

int adivinhaNumero( int varUser , int varSort, int *numero){
//	int  varSort = 0 ;
	if(varUser < varSort){
		*numero = 0;
		}if(varUser > varSort){
			*numero = 1;
			}else{
				*numero = 2;
			}
	return *numero;
}

int main (){												//Int main � uma fun��o, fun��o main.
	setlocale(LC_ALL, "Portuguese");
	int op;
	
	printf("Escolha uma das op��es do Menu:");
	printf("\n1 - A) Inverte Milhar");
	printf("\n2 - B) Lan�a Moeda");
	printf("\n3 - C) Adivinhar N�mero\n\nOp��o: ");
	scanf("%d",&op);
	
	switch (op){
		case 1:
			int num, num1, num2, num3, num4;						//Declara��o de variaveis.
			printf("Digite numero inteiro de 4 digitos: \n");		//Printando mensagem de solicita��o.
			scanf("%d", &num);								   		//Guardando o valor digitado na variavel valor.
	
    		InverteMilhar( &num, &num1, &num2, &num3, &num4 );		//	printf("\nMenor Incrementando: %d\nMaior Decrementado: %d \n", valor1, valor2);
		break;
		
		case 2:
			int i;	
    		lancaMoeda( i );
		break;
		
		case 3:
			int r, numero,varUser, varSort;
			srand(time(NULL));
			varSort = rand() % 1000;
	
			printf("\nTenho um N�mero de 0 a 1000. Voc� pode adivinhar? Por favor, digite seu palpite:\n");
		
		printf("\n\nDigite o numero:");
		scanf("%d", &numero);
    	
		adivinhaNumero( varUser , varSort, &numero);
    		
		while(numero != varSort){
			if(numero = 0 ){
		 	printf("Muito Baixo! Tente novamente.");
				}if(numero = 1 ){
		 			printf("Muito Alto! Tente novamente.");
				}else{
					printf("Excelente! Voc� adivinhou o n�mero!!!");
				}
		break;
}
}
}
