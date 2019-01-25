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
	setlocale(LC_ALL, "Portuguese");//seta idioma portugu�s para usarmos acentos :D
  	char palavras [Q][TAM] = {"BRASIL", "GREMIO", "FINANCEIRO","POLITICA","BOLSONARO","AMIGOS","AVENTURA","QUADRICICLO","CIDADE","CAMPO","BANGJUMP","PAINTBALL","DIVERSAO"},//matriz principal com palavras
		 letra,salva[TAM],//outras variaveis char
	     erros[C];//vetor que guarda os erros
  	srand(time(0));//renova a vari�vel random do computador
	int i = rand()%Q,//variavel index da palavra usada ganha valor random
		cont=(strlen(palavras[i])), //variavel contadora de quantas letras recebe quantidade de letras da palavra
		j,l,e=0,chances=C,soma_acertos=0;//variaveis inteiras
	for(j=0;j<TAM;j++) salva[j]='\0';
	for(j=0;j<C;j++) erros[j]='\0';
  	while(chances>0||soma_acertos<cont){//la�o de repeti��o principal do programa (sai quando chances acabam ou acertos==contadora de letras
  		int valida = 0;//vari�vel de valida��o para acerto/erro n�o repetir numa rodada
		system("cls");//limpa tela
  		printf("******************************\n");//inicio cabe�alho (que eu queria fazer em fun�a� mas n�o rolou :( )
  		printf("|        JOGO DA FORCA       |\n");
  		printf("******************************\n");
  		printf("\nA palavra tem %i letras. ",cont);//dica: quantidade de letras da palavra
  		for(l=0;l<cont;l++){//la�o para escrever a palavra enquanto � adivinhada
			if(salva[l]==NULL) printf("_ ");//variavel para salvar resposta certa do usu�rio. se espa�o nulo da palavra printa _
			else printf("%c ",salva[l]);//se valor printa caracter
		}
		if(chances<C){//se perdeu chances mostra quais letras j� foram erradas
			printf("\n\nLetras que n�o s�o: ");
  			for(j=0;j<C;j++) printf("%c ",erros[j]);//printa vetor com valores errados
		}
  		printf("\nCHANCES: %i\n",chances);//printa chances
		printf("\nDigite uma letra: ");//pede letra
  		letra = toupper(getchar());//recebe letra e transforma em maiuscula
  		fflush(stdin);//limpa buffer de teclado
  		while(1){//LA�O DE TESTES
			int valida2=0;
			system("cls");//limpa tela
  			printf("******************************\n");//inicio cabe�alho (que eu queria fazer em fun�a� mas n�o rolou :( )
  			printf("|        JOGO DA FORCA       |\n");
  			printf("******************************\n");
  			printf("\nA palavra tem %i letras. ",cont);//dica: quantidade de letras da palavra
  			for(l=0;l<cont;l++){//la�o para escrever a palavra enquanto � adivinhada
				if(salva[l]==NULL) printf("_ ");//variavel para salvar resposta certa do usu�rio. se espa�o nulo da palavra printa _
				else printf("%c ",salva[l]);//se valor printa caracter
			}
			if(chances<C){//se perdeu chances mostra quais letras j� foram erradas
				printf("\n\nLetras que n�o s�o: ");
  				for(j=0;j<TAM;j++) printf("%c ",erros[j]);//printa vetor com valores errados
			}
  			printf("\nCHANCES: %i\n",chances);//printa chances
			for(j=0;j<TAM;j++){
				if(isalpha(letra)&&salva[j]==letra){//TESTA SE J� ACERTOU A LETRA
					printf("ERRO! Letra repetida.\nPor favor digite uma letra diferente: ");//erro de repeti��o: pede nova letra
					letra = toupper(getchar());//recebe letra e transforma em maiuscula
					fflush(stdin);//limpa buffer de teclado
					valida2++;
					break;
				}
			//}
			//for(j=0;j<TAM;j++){
				if(isalpha(letra)&&erros[j]==letra){
					printf("ERRO! J� disse que n�o � essa letra.\nPor favor digite uma letra diferente: ");
					letra = toupper(getchar());
					fflush(stdin);
					valida2++;
					break;
				}
			//}
			//for(j=0;j<TAM;j++){
				if(isalpha(letra)==0){
					printf("ERRO! N�o � uma caracter v�lido.\nPor favor digite uma letra: ");//printa erro pois n�o � um caracter v�lido
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
				printf("VOC� ACERTOU!\n");
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
				printf("VOC� ERROU!\nCHANCES: %i\n",chances);
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
			printf("\nPARAB�NS VOC� ACERTOU A PALAVRA! ");			
			puts(palavras[i]);
			break;
		}
		getch();
  		system("cls");
	}
	return(0);
}

