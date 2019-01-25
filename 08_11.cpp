#include <stdio.h>
typedef struct {
	char autor [30];
	char titulo[50];
	int paginas;
	float preco;
}TIPO_LIVRO;

main (){
	TIPO_LIVRO L;
	strcpy(L.autor,"Deitel e Deitel");
}

