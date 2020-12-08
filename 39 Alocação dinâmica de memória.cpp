// aula39.cpp
// Alocação dinâmica de memória
// Função malloc()
//Função free()

#include <iostream>
#include <stdlib.h> //para a função malloc, memory allocation
using namespace std;

#define LIM 50

int main()
{
	char vnome[LIM];

	cout << "Digite um nome: ";
	cin.getline(vnome, LIM);

	cout << vnome << "\n";

	//Alocação dinâmica com a função malloc()
	char* vnome2;

	//malloc() retorna void, por isso precisa converter para ponteiro do tipo char
	//para converter, usamos o type cast '(char *)'
	
	vnome2 = (char*)malloc(sizeof(char));

	cout << "\nDigite um nome: ";
	cin.getline(vnome2, LIM);
	
	cout << vnome2 << "\n";

	cout << "\nValor alocado para " << vnome << " " << sizeof(*vnome); //Mostra o nome todo
	// cout << "\nValor alocado para " << *vnome << " " << sizeof(*vnome); Só mostra o primeiro caracter
	cout << "\nValor alocado para " << vnome2 << " " << sizeof(*vnome2);
	// cout << "\nValor alocado para " << *vnome2 << " " << sizeof(*vnome2); Só mostra o primeiro caracter
	
	//Libera memória
	free(vnome);
	free(vnome2);

	return 0;
}