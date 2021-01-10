//Carmen Cabral
// aula47.cpp - 08/01/2021
//Herança

#include "classes.h"
#include <iostream>
using namespace std;

int main()
{
	Moto *v1 = new Moto();
	Carro *v2 = new Carro();
	Tanque* v3 = new Tanque();

	v1->imprimir();
	v2->imprimir();
	v3->imprimir();
	
}