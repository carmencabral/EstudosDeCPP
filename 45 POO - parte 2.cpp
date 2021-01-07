//Carmen Cabral
// aula45.cpp : 06/01/2021
// POO; Classes
//Ficheiro/Arquivo externo Aviao.h

#include "Aviao.h"
#include <iostream>
using namespace std;

int main()
{
	Aviao *av1 = new Aviao(1);
	Aviao* av2 = new Aviao(2);
	Aviao* av3 = new Aviao(3);

	av1->imprimir(1);
	av2->imprimir(2);
	av3->imprimir(3);
}
