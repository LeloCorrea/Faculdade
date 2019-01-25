#include <iostream>    // endl;
#include <stdlib.h>    // rand, atof
#include <stdio.h>     // printf, scanf,
#include <conio.h>     // getch   printf
#include <string.h>    // strlen,  strcat
#include <windows.h>   // COORD
#include <cmath>       // pow
void gotoxy( int x, int y )
{
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
/*------------------------------------------------------------------------------------------------------------------------*/
int vCod[10], vQt[10];
float vValor[10];

void inicializaCodigo()
{
	for (int i=0 ; i<10 ; i++)
	{
		vCod[i] = -1;
	}
}
/*------------------------------------------------------------------------------------------------------------------------*/
char menu() 																										//MENU!
{
	system("cls");
	printf("\n=========================");
	printf("\n|          MENU         |");
	printf("\n=========================");
	printf("\n|1- Cadastrar Produto   |");
	printf("\n|2- Listar Produtos     |");
	printf("\n|3- Localizar Produto   |");
	printf("\n|4- Total em Estoque    |");
	printf("\n|5- Reajustar           |");
	printf("\n|6- Vender              |");
	printf("\n|7- SAIR                |");
	printf("\n=========================");
	printf("\n   Escolha uma opção: ");
	char op;
	scanf("%c", &op);
	return op;	
}
/*------------------------------------------------------------------------------------------------------------------------*/
void cadastroProduto(int indice)																	//CADASTRO DE PRODUTO!
{
	gotoxy(30,7);printf("Digite o código do produto: ");
	scanf("%d", &vCod[indice]);
	gotoxy(30,8);printf("Digite o valor do produto:  ");
	scanf("%f", &vValor[indice]);
	gotoxy(30,9);printf("Digite a quantidade deste produto: ");
	scanf("%d", &vQt[indice]);
	
	gotoxy(30,11);printf(" Produto cadastrado com sucesso!");
	gotoxy(30,12);printf(" Pressione qualquer tecla para continuar");
}
/*------------------------------------------------------------------------------------------------------------------------*/
void confirmaVenda(int qtVendida, int indice)														//CONFIRMAÇÃO DE VENDA!
{
	char confirmaVenda; 
	fflush(stdin);
	gotoxy(30,9); printf(".... Confirmar venda?(s/n):  ");
	scanf("%c", &confirmaVenda);
							
	if(confirmaVenda == 's')
	{
		vQt[indice] = vQt[indice] - qtVendida;
		gotoxy(30,11); printf("Compra realizada com sucesso!!");							
	} 
	else 
	{
		gotoxy(30,11); printf("Compra cancelada :( ");
	}
	gotoxy(30,12); printf(" Pressione qualquer tecla para continuar");
}

/*------------------------------------------------------------------------------------------------------------------------*/
void leQuantidade(int indice)																//LENDO A QUANTIDADE DE PRODUTOS!
{
	gotoxy(30,7); printf("Digite a quantidade deste produto: ");
	int qtVenda;
	scanf("%d", &qtVenda);
					
	if(vQt[indice] >= qtVenda)
	{
		float totalVenda = vValor[indice] * qtVenda;					
		gotoxy(30,8); printf("Total: %2.f", totalVenda);
							
		confirmaVenda(qtVenda, indice);
	}
	else
	{
		gotoxy(30,11);printf(" Quantidade insuficiente em estoque. Existe em estoque apenas %d unidades deste produto.", vQt[indice]);
	}
		
}
/*------------------------------------------------------------------------------------------------------------------------*/
void realizaVenda()																		//CONFIRMANDO A REALIZAÇÃO DA VENDA!
{
	gotoxy(30,5); printf("===== Realiza Venda =====");
	int produtoProcurado = 0;
	bool produtoEncontrado = false;
	gotoxy(30,6); printf("....Digite o c?digo do produto: ");
	scanf("%d", &produtoProcurado);
				
	for(int i=0 ; i<10 ; i++)
	{
		if(vCod[i] == produtoProcurado)
		{//------produto encontrado. Solicita quantidade
			produtoEncontrado = true;
			leQuantidade(i);
			

		}
	} //---------------final do for
	if (!produtoEncontrado)
	{
		gotoxy(30,11); printf("....Produto n?o localizado no cadastro.");
	}
		
}
/*------------------------------------------------------------------------------------------------------------------------*/
void reajuste()																							//REAJUSTE DE PREÇO!
{
	gotoxy(30,5); printf("===== Calculo do reajuste =====");
	float aumento;
	gotoxy(30,6);printf("Digite quantos por cento deseja aumentar: ");
	scanf("%f", &aumento);
	for(int y=0 ; y<10 ; y++)
	{
		if (vCod[y] != -1)
			vValor[y] = (vValor[y]/100*aumento) + vValor[y];
	}
	gotoxy(30,7); printf("....Calculo realizado.");
	gotoxy(30,11); printf(" Pressione qualquer tecla para continuar");
}
/*------------------------------------------------------------------------------------------------------------------------*/
void calculaTotalEstoque()																//CALCULANDO VALOR TOTAL DO ESTOQUE!
{
	gotoxy(30,5); printf("===== Calculo do valor total em estoque ====="); 

	int soma = 0;
	for (int k = 0; k < 10; k++ )
		soma += vQt[k];

	if (soma > 0)
	{
		gotoxy(30,7); 	printf("....Total em estoque ?: %d", soma);
	}
	gotoxy(30,11); printf(" Pressione qualquer tecla para continuar");	
}
/*------------------------------------------------------------------------------------------------------------------------*/
void localizaProduto()																				//LOCALIZANDO PRODUTO!
{
	gotoxy(30,5); printf("===== Localiza Produtos =====");
	int produtoProcurado = 0;
	gotoxy(30,7);printf("Digite o c?digo do Produto: ");
	scanf("%d", &produtoProcurado);
	int i;
	bool produtoEncontrado = false;
	for(i=0 ; i<10 ; i++)
	{
		if(vCod[i] == produtoProcurado)
		{
			gotoxy(30,8);printf("....Produto Localizado: %d", vCod[i]);
			gotoxy(30,9);printf("    Valor do Produto: %.2f", vValor[i]);
			gotoxy(30,10);printf("    Quantidade em Estoque: %d", vQt[i]);
			produtoEncontrado = true;
			break;
		}
	}
	if (!produtoEncontrado)
	{
		gotoxy(30,11); printf("Produto n?o localizado. ");
	}
	gotoxy(30,12);printf(" Pressione qualquer tecla para continuar");
}
/*------------------------------------------------------------------------------------------------------------------------*/
void listaTudo()																				//LISTANDO TODOS OS PRODUTOS!
{
	int i=0;
	gotoxy(30,5); printf("===== Lista de Todos os Produtos =====");
	if (vCod[0] != -1) // verifica se existe pelo menos um produto cadastrado.
	{
		gotoxy(30,7); printf("Produtos\t\t\tValores\t\t\tQuantidade");
		for( ; i<10 ; i++)
		{
			if (vCod[i] != -1) // isto garante que s? ser? impresso os produtos cadastrados.
				{
					gotoxy(30,i+8);printf("%d\t\t\t%.2f\t\t\t%d", vCod[i],vValor[i],vQt[i]);
				}
		}
	}
	else 
	{
		gotoxy(30,i+1);
		printf("....N?o existe nenhum produto cadastrado.");

	}
	gotoxy(30,i+2); printf(" Pressione qualquer tecla para continuar");
}
/*------------------------------------------------------------------------------------------------------------------------*/
void cadastro()
{
	gotoxy(30,5); printf("===== Cadastro de Produtos =====");
	bool vetorCheio = true;
	for(int i=0 ; i<10 ; i++)
	{
		if (vCod[i] == -1)// garante uma posi??o no vetor que n?o esteja sendo utilizada
		{
			cadastroProduto(i);
			vetorCheio = false;
			break;
		}
	}
	if (vetorCheio) // exibe mensagem caso n?o haja mais espa?o para cadastrar novo produto
	{
		gotoxy(30,6); printf("\n....Cadastro j? completo. ");
	}
}
/*------------------------------------------------------------------------------------------------------------------------*/

int main()
{	setlocale(LC_ALL, "Portuguese");
	inicializaCodigo();
	
	while (true)
	{
		switch(menu())
		{
		case '1': //------------------------- cadastro de produtos. Um por vez
			{
				cadastro();				getch();     break;
			}//------------------------final case 1
			
		case '2': //------------------------- listar TODOS os produtos cadastrados
			{
				listaTudo();			getch();	break;
			}//----------------------final case 2
	
		case '3': //-------------------------- localiza um produto
			{
				localizaProduto();		getch();	break;
			}//----------------------final case 3
	
		case '4': // ---- Opção de calcular o total de produtos em estoque
			{
				calculaTotalEstoque();	getch();	break;
			}//----------------------final case 4
	
		case '5': //-------------------------- reajusta valores dos produtos
			{
				reajuste();				getch();	break;
			}//-------------------final case 5
	
		case '6': // ---- Opção de venda
			{
				realizaVenda();			getch();	break;
			
			} //------------------------final case 6
		
		case '7': // ---- Opção de sair do sistema
			{
				return 0;
			}
		
		}
	} 
}

