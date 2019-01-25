#include <stdio.h>

int main (){
	int a, b, k, i, alt, larg;
	printf("Digite a altura: ");
	scanf("\n %d", &alt);
	printf("Digite a largura: ");
	scanf("\n %d", &larg);
	
	for (int k=0 ; k<alt; k++){
		for( i=0; i<larg; i++){
			if (i <= k)
				printf("*");
			else
				printf("-");
			}
			printf("\n");
		}
}

