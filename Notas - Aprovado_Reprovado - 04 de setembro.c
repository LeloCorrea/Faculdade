#include <stdio.h>
int main(){
	char nome [10];
	float g1,g2,media;
	printf("Digite seu nome:\n");
	scanf("%s",&nome);
	printf("\nDigite a nota de g1:\n");
	scanf("%f",&g1);
	printf("\nDigite a nota de g2:\n");
	scanf("%f",&g2);
	media=(g1+(2*g2))/3.0;
	printf("\n\nmedia=%.2f\n",media);
	printf("%s",nome);
	
	if(media>=6.0){
	  printf("\nAprovado!\n");
	  }else{
	     printf("\nG3!");
		 }
	}

