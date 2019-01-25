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

int vCod[10], vQt[10];
float vValor[10];

void inicializaCodigo()
{// este método garante que o conteúdo de vCod seja um valor não utilizado no cadastro.
	for (int i=0 ; i<10 ; i++)
	{
		vCod[i] = -1;  // pode ser qualquer valor considerado não valido no cadastro.
	}
}

void menu() // ---- Void para abrir menu
{
	system("cls");
	printf("\n\n=======================\nMENU\n=======================\n");
	printf("1- Cadastrar Produto\n");
	printf("2- Listar Produtos\n");
	printf("3- Localizar Produto\n");
	printf("4- Total em Estoque\n");
	printf("5- Reajustar\n");
	printf("6- Vender\n");
	printf("7- SAIR\n");
	printf("Escolha uma Op??o: ");
}

void cadastroProduto(int indice)
{
	printf("\nDigite o c?digo do produto: ");
	scanf("%d", &vCod[indice]);
	printf("\nDigite o valor do produto:  ");
	scanf("%f", &vValor[indice]);
	printf("\nQuantidade deste produto: ");
	scanf("%d", &vQt[indice]);
	
	printf("\n Produto cadastrado com sucesso!");
	printf("\n Pressione qualquer tecla para continuar");
}

int main()
{	setlocale(LC_ALL, "Portuguese");
	inicializaCodigo();
	
while (true){
	char op;
	
	menu(); // ---- Chama void para abrir menu
	scanf("%c", &op);
	
	switch(op)
	{// seria legal se todos os cases fossem colocados em m?todos. Mas vou deixar assim para n?o confundir.
		case '1': // ---- Op??o de cadastrar produto
			{
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
					printf("\n....Cadastro j? completo. ");
				}
				getch();
			    break;
			    
			}//------------------------final case 1
			
		case '2': // ---- Op??o de listar TODOS os produtos cadastrados
			{
				if (vCod[0] != -1) // verifica se existe pelo menos um produto cadastrado.
					for(int a=0 ; a<10 ; a++)
					{
						if (vCod[a] != -1) // isto garante que s? ser? impresso os produtos cadastrados.
							{
								printf("\nProdutos: %d", vCod[a]);
								printf("\nValores: %.2f", vValor[a]);
								printf("\nQuantidade: %d", vQt[a]);
								printf("\n");
							}
					}
				else printf("\n....N?o existe nenhum produto cadastrado.");
				printf("\n Pressione qualquer tecla para continuar");
				getch();
				break;
			}//----------------------final case 2
	
		case '3': // ---- Op??o de localizar um produto
			{
				int produtoProcurado = 0;
				printf("\nDigite o c?digo do Produto: ");
				scanf("%d", &produtoProcurado);
				for(int a=0 ; a<10 ; a++)
					{
						if(vCod[a] == produtoProcurado)
							{
								printf("\n....Produto Localizado: %d", vCod[a]);
								printf("\n    Valor do Produto: %.2f", vValor[a]);
								printf("\n    Quantidade em Estoque: %d", vQt[a]);
								break;
							}
					}
					printf("\n Pressione qualquer tecla para continuar");
					getch();
					break;
			}//----------------------final case 3
	
		case '4': // ---- Op??o de calcular o total de produtos em estoque
			{
				int soma = 0;
				for (int k = 0; k < 10; k++ ){
					soma += vQt[k];
				}
				printf("\n Total em estoque ?: %d", soma);
				printf("\n Pressione qualquer tecla para continuar");
				getch();
				break;
			}//----------------------final case 4
	
		case '5': // ---- Op??o de reajustar os valores dos produtos por porcentagem
			{
				float aumento;
				printf("\nDigite quantos por cento deseja aumentar: ");
				scanf("%f", &aumento);
				for(int y=0 ; y<10 ; y++)
				{
					if (vCod[y] != -1)
						vValor[y] = (vValor[y]/100*aumento) + vValor[y];
				}
				printf("\n Pressione qualquer tecla para continuar");
				getch();
				break;
			}//-------------------final case 5
	
		case '6': // ---- Op??o de venda
			{
				int produtoProcurado = 0;
				bool produtoEncontrado = false;
				printf("\nDigite o c?digo do produto: ");
				scanf("%d", &produtoProcurado);
				
				for(int a=0 ; a<10 ; a++)
				{
					if(vCod[a] == produtoProcurado)
						{
							produtoEncontrado = true;
							printf("\nDigite a quantidade deste produto: ");
							int qtVenda;
							scanf("%d", &qtVenda);
					
							if(vQt[a] >= qtVenda)
							{
								float totalVenda = vValor[a] * qtVenda;					
								printf("\nTotal: %2.f", totalVenda);
							
								char confirmaVenda; 
								fflush(stdin);
								printf("\n Confirmar venda?(s/n):  ");
								scanf("%c", &confirmaVenda);
							
								if(confirmaVenda == 's')
								{
									vQt[a] = vQt[a] - qtVenda;
									printf("\nCompra realizada com sucesso!!");
							
									printf("\n Pressione qualquer tecla para continuar");
								} 
								else 
								{
									printf("\nCompra cancelada :( ");
									printf("\n Pressione qualquer tecla para continuar");
								}
							}
							else
							{
								printf("\n Quantidade insuficiente em estoque. Existe em estoque apenas %d unidades deste produto.", vQt[a]);
							}
					}
				} //---------------final do for
				if (!produtoEncontrado)
				{
					printf("\n....Produto n?o localizado no cadastro.");
				}
				getch();				
				break;
			
			} //------------------------final case 6
		
		case '7': // ---- Op??o de sair do sistema
			{
				return 0;
			}
		
		} //----------------------------------------------------final switch
	} //--------------------------------------------------------final while
} //------------------------------------------------------------final main
