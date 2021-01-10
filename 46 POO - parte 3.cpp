//Carmen Cabral
// aula46.cpp
//POO / Classes
//Métodos get e set para manipular as propriedades privadas

#include "classes.h"
#include <iostream>

int main()
{
    Veiculo* v1 = new Veiculo(1);
    Veiculo* v2 = new Veiculo(2);
    Veiculo* v3 = new Veiculo(3);

    cout << v1->getNome() << " " << endl;
    if(!v1->getLigado())
        cout << "Delisgado!" << endl;
    cout << v2->getNome() << " " << endl;
    if (!v1->getLigado())
        cout << "Delisgado!" << endl;
    cout << v3->getNome() << " " << endl;
    if (!v1->getLigado())
        cout << "Delisgado!" << endl;

    cout << "---------------------" << endl;
    v1->setLigado(1);
    v2->setLigado(0);
    v3->setLigado(1);

    cout << v1->getNome() << endl << "Veloc.Max.: " << v1->getVelMax() << endl;
    if (v1->getLigado())
        cout << "Ligado!" << endl;
    else cout << "Desligado!" << endl;
    cout << "---------------------" << endl;
    cout << v2->getNome() << endl << "Veloc.Max.: " << v2->getVelMax() << endl;
    if (v2->getLigado())
        cout << "Ligado!" << endl;
    else cout << "Desligado!" << endl;
    cout << "---------------------" << endl;
    cout << v3->getNome() << endl << "Veloc.Max.: " << v3->getVelMax() << endl;
    if (v3->getLigado())
        cout << "Ligado!" << endl;
    else cout << "Desligado!" << endl;
}