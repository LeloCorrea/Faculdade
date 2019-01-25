#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctype.h>
using namespace std;
// A função percorre o vetor procurando duplicidades
bool verificaDuplicidade(vector < int > vet) {
	for (unsigned int i=0; i < vet.size();i++){
		unsigned int j = i +1;
		while (j<vet.size()){
			if (vet == vet[j])
				return true;
			j++;
		}
	}
	return false;
}

// Programação principal
int main() {
	vector<int> vet;
	vector<int>::iterator it;
	char op;
	// inicializa o gerador de números
    // randômicos para preenchermos o vetor com números aleatórios
	srand(time(NULL));
	for (int i=1;i<10;i++)
		vet.push_back( rand() % 100 + 1);
	
	if (verificaDuplicidade(vet))
		cout << "Duplicidade encontrada" << endl;
	else
		cout << "Não há duplicidade" << endl;
	cout << "Deseja ver o vetor inteiro? (S/N)" << endl;
	cin >> op;
	if (toupper(op)=='S'){
		cout << endl;
		for (it=vet.begin(); it!=vet.end(); it++)
			cout << *it << endl;
	}
	return 0;
}
