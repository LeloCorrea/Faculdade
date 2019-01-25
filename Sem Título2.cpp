#include <stdio.h>

int main (){
	int cont=0, i=100;
	while(i<=500){
		if(i%2==0)cont++;
	}
	printf("Valores %i",cont);
}
