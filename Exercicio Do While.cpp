// Anderson Corr�a da Cunha

/*
Uma Empresa fez uma pesquisa de mercado para saber se as pessoas gostam ou n�o do novo chocolate �Ulbra� lan�ado. 
Para isso, de cada entrevistado foram coletados os seguintes dados: sexo (F � Feminino ou M � Masculino), 
renda mensal e a resposta (S � Sim ou N � N�o) para o novo chocolate.
Sabendo que foram entrevistadas diversas pessoas nas cidades de Gravata�, Cachoeirinha e de Porto Alegre,
implemente um programa em Linguagem C que calcule e apresente ao usu�rio, ap�s a finaliza��o das entrevistas:
a) O n�mero de pessoas que responderam sim.
b) O n�mero de pessoas que responderam n�o.
c) O percentual de pessoas do sexo feminino que responderam sim.
d) O percentual de pessoas do sexo masculino que responderam n�o.
e) O percentual de pessoas pesquisadas por intervalo de renda 
(os intervalos devem ser analisados de acordo com o sal�rio m�nimo regional - R$ 1.175,15):

Entradas: Sexo, renda mensal, resposta.
Sa�das: Pessoas sim, Pessoas N�o, Sexo feminino sim, Sexo masculino n�o, Percentual de pessoas com at� dois sal�rios, de dois a seis sal�rios,
De seis a 10 sal�rios e pessoas acima de dez 10 sal�rios.
*/

#include <stdio.h>

int main (){
	char sexo, resposta;
	int  valido,fSim=0, mSim=0, fNao=0, mNao=0, renda2=0, renda3=0, renda4=0, renda5=0 ; //renda2=At� dois sal�rios, renda3=De dois sal�rios a seis sal�rios
	//renda4=De seis sal�rios a 10 sal�rios, renda5=Superior a 10 sal�rios. 
	float renda,salMin=1175.15; //salMin = sal�rio m�nimo regional - R$ 1.175,15.
		
	do{
		printf("Pesquisa: \n");
		do{
			printf("Digite o sexo do entrevistado, M para Masculino e F para feminino ou digite P para parar o programa: ");
			fflush(stdin);
			scanf("%c", &sexo);
			valido=1;
			switch(sexo){
				case 'P':
				case 'p':
					sexo='P';
					break;
				case 'M':
				case 'm':
					sexo='M';
					break;
				case 'F':
				case 'f':
					sexo='F';
					break;
				default:
					valido=0;
			}
		}while(valido == 0);
		
		if(sexo!='P'){
			do{
				printf("Gostou do chocolate Ulbra? (S/N): ");
				fflush(stdin);
				scanf("%c", &resposta);
				valido=1;
				switch(resposta){
					case 'S':
					case 's':
						if(sexo=='M') mSim++; else fSim++;
						break;
					case 'N':
					case 'n':
						if(sexo == 'M') mNao++; else fNao++;
						break;
					default:
						valido=0;
				}
			}while(valido == 0);
			
			do{
				printf("Sua renda mensal: R$ ");
				scanf("%f",&renda);
				if(renda>10*salMin)renda5++;
				else if(renda>=6*salMin)renda4++;
				else if(renda>=2*salMin)renda3++;
				else if(renda>=0)renda2++;
			}while(renda<0);
		}
	}while(sexo!='P');
	
	int nroPesquisados = fSim+mSim+fNao+mNao;
	printf("\nDe %i pessoas:\n%i disseram que gostaram\n%i disseram que nao gostaram\n", 
		nroPesquisados, fSim+mSim, fNao+mNao);
		
	printf("\n%.2f%% das mulheres disseram que gostaram\n%.2f%% dos homens disseram que nao gostaram\n", 
		fSim+fNao==0?0:(fSim/(float)(fSim+fNao)*100), 
		mSim+mNao==0?0:(mNao/(float)(mSim+mNao)*100));
	
printf("\n%.2f%% das pesseas ganham ate dois salarios", nroPesquisados==0?0: (renda2/(float)nroPesquisados*100));
printf("\n%.2f%% das pesseas ganham de dois a seis salarios", nroPesquisados==0?0: (renda3/(float)nroPesquisados*100));
printf("\n%.2f%% das pesseas ganham de seis a dez salarios", nroPesquisados==0?0: (renda4/(float)nroPesquisados*100));
printf("\n%.2f%% das pesseas ganham mais de dez salarios", nroPesquisados==0?0: (renda5/(float)nroPesquisados*100));
}
