#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <cmath>
/*----------------------------------------------------------------------------------------------------------------------------*/
void gotoxy (int x, int y)	//Método que manipula o console.
{
	COORD coord;
	coord.X = (short)x;		// Cria duas variveis compostas X, vinculadas a um tipo cord e seta.
	coord.Y = (short)y;		// Cria duas variveis compostas Y, vinculadas a um tipo cord e seta.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // Seta o cosole nessas cordenadas.
}

int main (){
	int i,opcao;
	
	for (i=0; i<32; i++){
		printf("=");
	}
	printf("\n|\t      MENU             |\n");
	for (i=0; i<32; i++){
		printf("=");
	}
	printf("\n");
	for (i=1 ; i < 8 ; i++){
		printf("%d - \n", i);
	}
	gotoxy(4,3); printf("Digite o Vetor A:\n");
	gotoxy(4,4); printf("Digite o Vetor B:\n");
	gotoxy(4,5); printf("Digite o Vetor C:\n");
	gotoxy(4,6); printf("Move A e B para C:\n");
	gotoxy(4,7); printf("Move C para B e A:\n");
	gotoxy(4,8); printf("Zera vetores");
	gotoxy(4,9); printf("FIM!");
	gotoxy(50,1); printf("A");
	gotoxy(70,1); printf("B");
	gotoxy(90,1); printf("C");
	
	gotoxy(0,10); printf("Opcao:");
	scanf("%d", &opcao); 
	gotoxy(0,12);
	
//	for (i=0; i<32; i++){
//		printf("=");
//	}
//	getch();
}

