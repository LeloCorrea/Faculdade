#include <stdio.h>
//Anderson Corrêa da Cunha

//1. (5.0 Pontos) Um usuário deseja um programa, em que ele possa escolher o tipo de média a ser aplicada, em suas três notas.
//Implemente um programa em C, que leia as notas, a opção escolhida pelo usuário e calcule e escreve a média por ele escolhida.
//As opções de média são: Média Aritmética e Média Ponderada (pesos: 3, 3, 4).
//Obs.: Lembre-se que se for digitado um valor para opção incorreto, o usuário deverá ser informado.

int main (){	
	float MediaArit,MediaPond,n1,n2,n3; 		// mediaarit= Média aritmética, mediapond= Média ponderada, n1= Nota 1, n2= Nota 2 e n3= Nota 3
	int TipoMedia;
	
	printf("Digite a nota 1:\n");
	scanf("%f",&n1);
	printf("Digite a nota 2:\n");
	scanf("%f",&n2);
	printf("Digite a nota 3:\n");
	scanf("%f",&n3);
	printf("\nDigite o tipo de media a ser calculada:\n\nTipo 1= Media Aritmetica\nTipo 2= Media Ponderada\n");
	scanf("%i",&TipoMedia);
	
	if(TipoMedia==1){
	  MediaArit=((n1+n2+n3)/3.0);
	  printf("\nMedia Aritmetica: %.2f", MediaArit);
	  }else{
	  	if(TipoMedia==2){
		  MediaPond=(((n1*3)+(n2*3)+(n3*4))/10.0);
	  	  printf("\nMedia Ponderada: %.2f", MediaPond);
		  }else printf("\n Digite apenas 1 ou 2 para escolher o tipo de media!");
	    } 

}
