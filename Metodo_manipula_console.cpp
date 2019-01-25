#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <cmath>
/*----------------------------------------------------------------------------------------------------------------------------------------------*/
void gotoxy (int x, int y)	//Método que manipula o console.
{
	COORD coord;
	coord.X = (short)x;		// Cria duas variveis compostas X, vinculadas a um tipo cord e seta.
	coord.Y = (short)y;		// Cria duas variveis compostas Y, vinculadas a um tipo cord e seta.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // Seta o cosole nessas cordenadas.
}

int main ()
{
	int coluna = 0;
for(int r=0 ; r<6 ; r++)
	{
	for (int linha=0; linha<9; linha++){
		gotoxy(coluna,linha); printf(">");
		coluna++;
	}
	
	for (int linha=9; linha>=0; linha--){
		gotoxy(coluna,linha); printf(">");
		coluna++;
	}
	coluna--;
}
	getch();
}

