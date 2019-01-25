#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <locale.h>

#define TAM 20//tamanho das palavras   (coluna)
#define Q 13//quantidade de palavras (linha)
#define C 10//quantidade de chances

int main(){
	setlocale(LC_ALL, "Portuguese");//seta idioma português para usarmos acentos :D
  	char palavras [Q][TAM] = {"BRASIL", "GREMIO", "FINANCEIRO","POLITICA","BOLSONARO","AMIGOS","AVENTURA","QUADRICICLO","CIDADE","CAMPO","BANGJUMP","PAINTBALL","DIVERSAO"},//matriz principal com palavras
		 letra,salva[TAM],//outras variaveis char
	     erros[C];//vetor que guarda os erros
  	srand(time(0));//renova a variável random do computador
	int i = rand()%Q,//variavel index da palavra usada ganha valor random
		cont=(strlen(palavras[i])), //variavel contadora de quantas letras recebe quantidade de letras da palavra
		j,l,e=0,chances=C,soma_acertos=0;//variaveis inteiras
	for(j=0;j<TAM;j++) salva[j]='\0';
	for(j=0;j<C;j++) erros[j]='\0';
  	while(chances>0||soma_acertos<cont){//laço de repetição principal do programa (sai quando chances acabam ou acertos==contadora de letras
  		int valida = 0;//variável de validação para acerto/erro não repetir numa rodada
		system("cls");//limpa tela
  		printf("******************************\n");//inicio cabeçalho (que eu queria fazer em funçaõ mas não rolou :( )
  		printf("|        JOGO DA FORCA       |\n");
  		printf("******************************\n");
  		printf("\nA palavra tem %i letras. ",cont);//dica: quantidade de letras da palavra
  		for(l=0;l<cont;l++){//laço para escrever a palavra enquanto é adivinhada
			if(salva[l]==NULL) printf("_ ");//variavel para salvar resposta certa do usuário. se espaço nulo da palavra printa _
			else printf("%c ",salva[l]);//se valor printa caracter
		}
		if(chances<C){//se perdeu chances mostra quais letras já foram erradas
			printf("\n\nLetras que não são: ");
  			for(j=0;j<C;j++) printf("%c ",erros[j]);//printa vetor com valores errados
		}
  		printf("\nCHANCES: %i\n",chances);//printa chances
		printf("\nDigite uma letra: ");//pede letra
  		letra = toupper(getchar());//recebe letra e transforma em maiuscula
  		fflush(stdin);//limpa buffer de teclado
  		while(1){//LAÇO DE TESTES
			int valida2=0;
			system("cls");//limpa tela
  			printf("******************************\n");//inicio cabeçalho (que eu queria fazer em funçaõ mas não rolou :( )
  			printf("|        JOGO DA FORCA       |\n");
  			printf("******************************\n");
  			printf("\nA palavra tem %i letras. ",cont);//dica: quantidade de letras da palavra
  			for(l=0;l<cont;l++){//laço para escrever a palavra enquanto é adivinhada
				if(salva[l]==NULL) printf("_ ");//variavel para salvar resposta certa do usuário. se espaço nulo da palavra printa _
				else printf("%c ",salva[l]);//se valor printa caracter
			}
			if(chances<C){//se perdeu chances mostra quais letras já foram erradas
				printf("\n\nLetras que não são: ");
  				for(j=0;j<TAM;j++) printf("%c ",erros[j]);//printa vetor com valores errados
			}
  			printf("\nCHANCES: %i\n",chances);//printa chances
			for(j=0;j<TAM;j++){
				if(isalpha(letra)&&salva[j]==letra){//TESTA SE JÁ ACERTOU A LETRA
					printf("ERRO! Letra repetida.\nPor favor digite uma letra diferente: ");//erro de repetição: pede nova letra
					letra = toupper(getchar());//recebe letra e transforma em maiuscula
					fflush(stdin);//limpa buffer de teclado
					valida2++;
					break;
				}
			//}
			//for(j=0;j<TAM;j++){
				if(isalpha(letra)&&erros[j]==letra){
					printf("ERRO! Já disse que não é essa letra.\nPor favor digite uma letra diferente: ");
					letra = toupper(getchar());
					fflush(stdin);
					valida2++;
					break;
				}
			//}
			//for(j=0;j<TAM;j++){
				if(isalpha(letra)==0){
					printf("ERRO! Não é uma caracter válido.\nPor favor digite uma letra: ");//printa erro pois não é um caracter válido
					letra = toupper(getchar());//recebe letra e transforma em maiuscula
					fflush(stdin);//limpa buffer de teclado
					valida2++;
					break;
				}
			}
			if(valida2==0) break;
		}
		for(j=0;j<cont;j++){
			if(letra==palavras[i][j]&&valida==0){//TESTA SE ACERTOU
				printf("VOCÊ ACERTOU!\n");
				for(l=0;l<cont;l++){
					if(letra==palavras[i][l]) salva[l]=letra;
					if(salva[l]==NULL) printf("_ ");
					else printf("%c ",salva[l]);
				}
				soma_acertos = strlen(salva);
				valida++;
				break;
			}
		}
		for(j=0;j<cont;j++){
			if(letra!=palavras[i][j]&&valida==0){//TESTA SE ERROU
				chances--;
				printf("VOCÊ ERROU!\nCHANCES: %i\n",chances);
  				erros[e]=letra;
  				e++;
				valida++;
				break;
			}
		}
		if(chances==0){
			printf("\nTODAS AS CHANCES ESGOTADAS!\nA PALAVRA ERA: ");
			puts(palavras[i]);
			break;
		}else if(soma_acertos==cont){
			printf("\nPARABÉNS VOCÊ ACERTOU A PALAVRA! ");			
			puts(palavras[i]);
			break;
		}
		getch();
  		system("cls");
	}
	return(0);
}

