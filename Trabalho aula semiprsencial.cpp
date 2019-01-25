#include <stdio.h>

int main (){
	int quantpessoas,tempo;	//Quantidade de pessoas / Tempo de estadia.
	float valordiapessoa=98.78,taxaservipessoadia=valordiapessoa*0.05,taxatur=valordiapessoa*0.10+0.49,
	avista=valordiapessoa+taxaservipessoadia+taxatur,calc1,calc2,calc3,calc4,calc5,calc6;	// avistadescc = A vista com 5% de desconto / dvsemacre = Duas vezes sem acrescimo / cvcomacre = Cinco vezes com acrescimo 
	printf("Digite a quantidade de pessoas:\n");
	scanf("%i",&quantpessoas);
	printf("\nDigite o tempo de estadia:\n");
	scanf("%i",&tempo);
	
	calc1=(tempo*(quantpessoas*valordiapessoa));	// Valor total das diárias por pessoa.
	calc2=(calc1+taxaservipessoadia);				//Valor das diárias por pessoa mais a taxa de serviço por dia.
	calc3=(calc2+taxatur);							//Valor as diárias mais o valor da taxa de serviço por dia mais o valor da taxa de turismo.
	calc4=(calc3-avista*0.05);						//Valor total das diárias com as taxas menos o desconto de 5% a vista.
	calc5=(calc3);									//Valor (com as taxas) em duas vezes sem acréscimo de juros de pagamento.
	calc6=(calc3+avista*0.05);						//Valor (com as taxas) em cinco vezes com acréscimo de pagamento de 5% de juros.
	
	printf("\nValor total das diarias = %.2f\n",calc1);
	printf("\nValor total das diarias com a taxa de servico por dia = %.2f\n",calc2);
	printf("\nValor total das diarias com a taxa de servico por dia mais a taxa de turismo = %.2f\n",calc3);
	printf("\nValor a vista com 5 por cento de desconto = %.2f\n",calc4);
	printf("\nValor (com as taxas) em duas vezes sem acrescimo de juros no pagamento = %.2f\n",calc5);
	printf("\nValor (com as taxas) em cinco vezes com acrescimo 5 por cento de juros no pagamento = %.2f\n",calc6);
}
