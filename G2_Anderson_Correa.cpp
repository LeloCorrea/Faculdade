/*
Prova de G2 - Algoritmos
Aluno: Anderson Corrêa da Cunha
Professor: Ivonei
*/
/*-------------------------------------------DECLARAÇÃO DAS BIBILIOTECAS A SEREM USADAS------------------------------------------------------------*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <cmath>
/*-------------------------------------------INÍCIO DA DECLARAÇÃO DOS MÉTODOS----------------------------------------------------------------------*/
void gotoxy( int x, int y ) // Método que manipula o console.
{
    COORD coord;
    coord.X = (short)x;		// Cria uma varivel X, vinculada a um tipo cord e seta.
    coord.Y = (short)y;		// Cria uma varivel Y, vinculada a um tipo cord e seta.
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int vCod[10], vQt[10];		// Declarei o vetor vCod (como um inteiro de 10 posições), Declarei o vetor vQt (como um inteiro de 10 posições). 
float vValor[10];			// Declarei a variavel vValor (como um float de 10 posições).
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
void inicializaCodigo()		// Método para inicializar o código.
{
	for (int i=0 ; i<10 ; i++)	// A variavel i inicializa em 0, enquanto o i for menor que 10 executa o vetor na posição i, em seguida incrementa.
	{
		vCod[i] = -1;			// vCod é um vetor na posição i,
	}							// Fim do for.
}								// Fim do método.
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
char menu() 																															//MENU
{
	system("cls");
	printf("\n==============================");
	printf("\n|             MENU           |");
	printf("\n==============================");
	printf("\n|1- Cadastrar o Produto      |");
	printf("\n|2- Listar todos os Produtos |");
	printf("\n|3- Listar por Loja   	     |");
	printf("\n|4- FIM	                     |");
	printf("\n==============================");
	printf("\nEscolha a opção do MENU: ");
	char opcao;											//Declaro que opcao é um char
	scanf("%c", &opcao);								//Leio o que foi digitado.
	return opcao;										// Retornando para o endereço que foi declarado.
}
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
void cadastroProduto(int indice)																						//CADASTRO DO PRODUTO
{
	gotoxy(30,7);printf("Digite o código do produto: ");
	scanf("%d", &vCod[indice]);
	gotoxy(0,15);printf("*Observação:\nO mesmo deve conter 3 dígitos.\n- Iniciar com 1 caso a origem seja a MATRIZ.\n- Iniciar com3 caso a origem seja a FILIAL 1.\n- Iniciar com 5 caso a origem seja a FILIAL 2. - Ou inicar com 7 caso a origem seja a FILIAL 3. ");
		if(vCod[indice] >= 100 && vCod[indice] <= 1000){
			switch(vCod[indice] % 100){
				case 10:
				case 20:
				case 30:
				case 40:
				case 42:
				case 44:
				case 50:
				case 70:
					switch(vCod[indice] / 100){
						case 1:
						case 3:
						case 5:
						case 7:
							printf("Tudo certo");
							break;
						default:
							printf("Erro primeiro numero");
							return;			
					}
					break;
				default:
					printf("Erro segundo e terceiro numero");
					return;
			}
		}
	gotoxy(30,8);printf("Digite o valor do produto:  ");	//Solicitei o valor do produto!
	scanf("%f", &vValor[indice]);							//Fiz a leitura do valor do produto e informei que ele esta endereçado ao indice i de vValor.
	gotoxy(30,9);printf("Quantidade deste produto: ");		//Solicitei a quantidade do produto!
	scanf("%d", &vQt[indice]);								//Fiz a leitura do valor do produto e informei que ele esta endereçado ao indice i de vValor. 
	
	gotoxy(30,11);printf(" Produto cadastrado com sucesso!");
	gotoxy(30,12);printf(" Pressione qualquer tecla para continuar");
}
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
void confirmaVenda(int qtVendida, int indice)	//Método para confirmar a venda do produto!
{
	char confirmaVenda; 	//DECLAREI A VARIAVEL DE CONFIRMAÇÃO DE VENDA
	fflush(stdin);			//FUNÇÃO PARA LIMPAR O BUFFER DO TECLADO!
	gotoxy(30,9); printf("Confirmar venda?(s para SIM OU n para NÃO):  ");
	scanf("%c", &confirmaVenda);	//LEITURA COM DA VARIAVEL DE CONFIRMAÇÃO DA VENDA
							
	if(confirmaVenda == 's')	// IF verificando a resposta da variavel
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
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
void leQuantidade(int indice)	//Método para ler a quantidade!
{
	gotoxy(30,7); printf("Digite a quantidade deste produto: ");
	int qtVenda;
	scanf("%d", &qtVenda);
					
	if(vQt[indice] >= qtVenda)	//If de comparação onde a a quantidade tem que ser maior ou igual a quantidade de venda
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
/*-------------------------------------------------------------------------------------------------------------------------------------------*/

void realizaVenda()
{
	gotoxy(30,5); printf("===== Realiza Venda =====");
	int produtoProcurado = 0;
	bool produtoEncontrado = false;
	gotoxy(30,6); printf("....Digite o código do produto: ");
	scanf("%d", &produtoProcurado);
				
	for(int i=0 ; i<10 ; i++)
	{
		if(vCod[i] == produtoProcurado)
		{
			produtoEncontrado = true;
			leQuantidade(i);
			

		}
	}
	if (!produtoEncontrado)
	{
		gotoxy(30,11); printf("....Produto não localizado no cadastro.");
	}
		
}
/*-------------------------------------------------------------------------------------------------------------------------------------------*/

void reajuste()
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
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
void calculaTotalEstoque()	//Método para calcular os produtos que tem em estoque
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
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
void localizaProdutoporloja()	//Método para localizar o produto por loja
{
	gotoxy(30,5); printf("===== Localiza Produtos por loja =====");
	int lojaProcurada = 0;
	gotoxy(30,7);printf("Digite o código da loja: ");
	scanf("%d", &lojaProcurada);
	for(int i = 0; i < sizeof(vCod); i++){
		if(vCod[i] / 100 == lojaProcurada) 
		gotoxy(50,7);printf("%i\n", vCod[i]);
	}
}
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
void listaTudo()																						//MÉTODO PARA LISTAR TODOS OS PRODUTOS	
{
	int i=0;
	gotoxy(30,5); printf("===== Lista de Todos os Produtos =====");
	if (vCod[0] != -1) 
	{
		gotoxy(30,7); printf("Produtos\t\tValores\t\tQuantidade");
		for( ; i<10 ; i++)
		{
			if (vCod[i] != -1) 
				{
					gotoxy(30,i+8);printf("%d\t\t%.2f\t\t%d", vCod[i],vValor[i],vQt[i]);
				}
		}
	}
	else 
	{
		gotoxy(30,i+1);
		printf("Nãoo existe nenhum produto cadastrado.");

	}
	gotoxy(30,i+2); printf(" Pressione qualquer tecla para continuar");
}
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
void cadastro()		//MÉTODO PARA INFORMAR CASO O CADASTRO DE PRODUTOS, JA TENHA ULTRAPASSADO O NUMERO DE VETORES DISPONIVEIS.
{
	gotoxy(30,5); printf("===== Cadastro de Produtos =====");
	bool vetorCheio = true;
	for(int i=0 ; i<10 ; i++)
	{
		if (vCod[i] == -1)
		{
			cadastroProduto(i);
			vetorCheio = false;
			break;
		}
	}
	if (vetorCheio) 
	{
		gotoxy(30,6); printf("\nCadastro já completo. ");
	}
}
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
int main()
{	setlocale(LC_ALL, "Portuguese");	// INFORMANDO AO PROGRAMA QUE O IDIOMA É O PORTUGUÊS
	inicializaCodigo();
	
	while (true)	//	WHILE SENDO IGUAL A TRUE MANTEM O MEU MENU SEMPRE VERDADEIRO, SOLICITANDO UM COMANDO
	{
		switch(menu())	//INICIO DO SWITCH CASE
		{
		case '1':	//COMANDO PARA CADASTRAR PRODUTOS
			{
				cadastro();				getch();     break;
			}
			
		case '2':	//COMANDO PARA LISTAR TODOS OS PRODUTOS
			{
				listaTudo();			getch();	break;
			}
	
		case '3':	//COMANDO PARA LISTAR POR LOJA
			{
				localizaProdutoporloja();		getch();	break;
			}
	
		case '4': 	//COMANDO PARA ENCERRAR O PROGRAMA, TERMINAR COM O LAÇO DO WHILE TRUE
			{
				return 0;
			}
		
		}	//FIM DO SWITCH CASE 
	}	//FIM DO WHILE
}	//FIM DO MAIN

