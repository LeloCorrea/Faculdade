/*Nome: Anderson Corrêa da Cunha - Semi Presencial 1 - Algoritmos II
"Seja bem-vindo à Burguer Lord! 
A Burguer Lord é uma inovadora hamburgueria de muito sucesso! A hamburgueria possui 4 lanches, cujos valores unitários são: 
1 – SandubaDeLuz = R$ 15,00 2 – JarJar Burguer = R$ 28,00 3 – Skywalker Burguer = R$ 30,00 4 – Bauru-Yoda = R$ 25,00 
 
Senhor Vader, dono da hamburgueria, está começando as atividades e estipulou que a hamburgueria pode atender apenas 20 pedidos,
ou seja, no máximo 20 atendimentos.
Cada pedido pode ter zero ou mais dos 4 lanches diferentes. 
Você foi contratado para fazer o programa que retorna algumas informações que Senhor Vader julga importantes. O que deve ser feito: 
Criar uma matriz que possua 20 linhas (para os atendimentos ou pedidos) e 4 colunas, correspondendo respectivamente 
aos lanches 1, 2, 3, e 4.  
Senhor Vader quer que o programa exiba informações que serão usadas para o planejamento estratégico da hamburgueria. São elas: ? 
Total de lanches vendidos na loja (soma da matriz); ? Lanche mais vendido (soma de cada coluna); ? Lanche menos vendido; ? 
A venda (pedido ou atendimento) onde mais lanches foram vendidos (soma de cada linha); ?
Um vetor de 20 posições contendo o valor a ser pago por cada pedido 
(somas os 4 tipos de lanche diferentes, multiplicados pelo seu valor unitário). ?
 A soma de todos os valores pagos nos 20 pedidos (soma do vetor)."
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <cmath>

int main (){
	int pedido[20][4];	//Número máximo de pedidos, MATRIZ DE 20 LINHAS E 4 COLUNAS
	int nrolanche, l1, l2 , l3 = 30, l4 = 25;	//Lanches = SandubaDeLuz = 15, JarJar = 28, Skywalker = 30, Yoda = 25
	int totLanches = 0, lancheTop, lancheDown, pedidotop, i, j, vendas, maior = 0, menor = 0, maisV, menosV;
	
	printf ("Bem vindo a BURGER LORD, que a fome esteja com voce!  ('.') \n\n");
	
	for(i = 0; i < 20 ; i++){
		for(j = 0; j < 4 ; j++){
			pedido[i][j] = rand()%5;
				if( pedido [i][j] > 0){
					totLanches++;
				}if(pedido[i][j] == 1){
					l1 += 15;			//SandubaDeLuz = 15
				}if(pedido[i][j] == 2){
					l2 += 28;			//JarJar = 28
				}if(pedido[i][j] == 3){
					l3 += 30;			//Skywalker = 30
				}if(pedido[i][j] == 4){
					l4 += 25;			//Yoda = 25
				}
			}
	}
//	for(i = 0; i < 4 ; i ++){
//		if( i == 0 ){
//			maior = pedido[i];
//			menor = pedido[i];
//			}
//			if( pedido[i] > maior){
//					maior  = pedido[i];				
//					maisV = i;
//			}else{
//				if(pedido[i] < menor){
//					menor = pedido[i];
//					menorV = i;
//				}
//			}
//		} Deixei cometado pois "parei" de fazer aqui.
	vendas = (l1+l2+l3+l4);
	
	for(i = 0; i < 20 ; i++){
		printf("\n\t\t");
		for(j = 0; j < 4 ; j++){
		printf("%d \t", pedido[i][j]);
		}
	}	
		printf("\n\nTotal de lanches: %d ", totLanches);
		printf("\n\nVendas do dia: R$ %d reais", vendas);
		printf("\n\nMais vendido: %d", maisV);printf("\n\nMenos vendido: %d", menosV);
}

