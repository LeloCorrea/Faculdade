int main (){
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <cmath>
/*============================================================================*/


void gotoxy( int x, int y ){
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void escreveMenu(){
	system("cls");
	printf("=============MENU===========");
	gotoxy(0,1);printf("1-CADASTRAR PRODUTO");
	gotoxy(0,2);printf("2-LISTAR TODOS OS PRODUTOS");
	gotoxy(0,3);printf("3-LISTAR POR LOJA");
	gotoxy(0,4);printf("4-FIM");
	gotoxy(0,7);printf("ESCOLHA: ");
}

void zerarVetor (int vetor[],int tamanho){
	for(int i = 0;i< tamanho;i++){
		vetor[i] = 0;
	}
}

void copiaVetores(int vetorA[5],int vetorB[5], int vetorC[10]){

    for(int i = 0;i< 5;i++){	
	    vetorC[i] = vetorA[i]; 
	}
	
	for(int i = 0;i< 5;i++){	
	    vetorC[i+5] = vetorB[i]; 
	}
	
}

void printaFilial(int vCod[10],int vQt[10],int filial){
	switch(filial){
		case 1:
			printf("Filial Matriz \n");
			for(int i = 0; i < 10; i++){
				if(vCod[i] > 99 && vCod[i] < 200){
					printf("%d cod: %d Qtd: %d \n",i+1,vCod[i],vQt[i]);
				}
			}
		break;
		case 3:
			printf("Filial 1 \n");
			for(int i = 0; i < 10; i++){
				if(vCod[i] > 299 && vCod[i] < 400){
					printf("%d cod: %d Qtd: %d \n",i+1,vCod[i],vQt[i]);
				}
			}
		break;
		case 5:
			printf("Filial 2 \n");
			for(int i = 0; i < 10; i++){
				if(vCod[i] > 499 && vCod[i] < 600){
					printf("%d cod: %d Qtd: %d \n",i+1,vCod[i],vQt[i]);
				}
			}
		break;
		case 7:
			printf("Filial 3 \n");
			for(int i = 0; i < 10; i++){
				if(vCod[i] > 699 && vCod[i] < 800){
					printf("%d cod: %d Qtd: %d \n",i+1,vCod[i],vQt[i]);
				}
			}
		break;
	}
}

int vervalor(int valor){
	int val[] = {
		110,120,130,140,142,144,150,170,
		310,320,330,340,342,344,350,370,
		510,520,530,540,542,544,550,570,
		710,720,730,740,742,744,750,770
	};
	int resp = true;
	for(int i = 0; i < 32; i++){
		if(val[i] == valor){
			resp = false;
		}
	}
	return resp;
}
int main(){
	
	int opcao = 0;
	int valor = 0;
	
	int vCod[10];
	int indiceCod = 0;
	int vQt[10];
	int indiceQt = 0;
	int brk = 0;
	int filial = 0;

	zerarVetor(vCod, 10);
	zerarVetor(vQt, 10);
	
	escreveMenu();
	
	while(opcao < 4){
		scanf("%d",&opcao);
		if(opcao == 1){
			do{
				printf("Digite o cod do produto.");
				scanf("%d",&valor);
			}while(vervalor(valor));
			vCod[indiceCod] = valor;
			printf("Digite a quantidade do produto.");
			scanf("%d",&vQt[indiceQt]);
			indiceQt++;
			indiceCod++;
			printf("produto Adicionado.\n");
			system("PAUSE");
		}else if( opcao == 2){
			for(int i = 0; i < 10;i++){
				printf("%d cod: %d Qtd: %d \n",i+1,vCod[i],vQt[i]);
			}
			system("PAUSE");
		}else{
			printf("Digite o numero da filial que deseja ver o estoque.");
			scanf("%d",&filial);
			while(filial != 1 && filial != 3 && filial != 5 && filial != 7){
				printf("Digite o numero da filial valida.");
				scanf("%d",&filial);
			}
			printaFilial(vCod,vQt, filial);
			system("PAUSE");
		}
		escreveMenu();
	}
}



}

