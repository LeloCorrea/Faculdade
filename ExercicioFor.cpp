#include <stdio.h>
int main (){
	int i, valor,cont=0;		// Comando For(variavel de inicialização, condição, controle) -> for (i=0, i<5, i++)
	
	printf("Digite um valor:");
	scanf("%i",&valor);
	
	for(i=1;i<=valor;i++){
		if (valor%i==0){
			cont++;
			if(cont>2)break;
		}
		printf("Este valor é primo!");
	}
}
