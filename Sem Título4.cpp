#include <stdio.h>

int main (){
	int val,val2,val3,n1,n2,n3;
	printf("Digite o valor:\n");
	scanf("%i",&val);
	n1=val/50;
	val2=val%(n1*50);
	printf("\n%i Notas de 50\n", n1);
	printf("\n%i\n", val2);

		
}
