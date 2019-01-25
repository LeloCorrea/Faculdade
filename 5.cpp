#include <stdio.h>

int main (){
	int num, coluna, i, k;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	printf("Digite a coluna inicial: ");
	scanf("%d",&coluna);
	
	for ( k = num; k>0 ; k--)
	{
		for (i = 0; i < coluna; i++)
			printf(" ");
		for(i = 0 ;i < k ; i++)
			printf("*");
		printf("\n");
	}

}

