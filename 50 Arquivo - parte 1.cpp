//Carmen Cabral
// aula50.cpp - Arquivo ofstream: 12/01/2021
//open, close, ios::app
//TIPOS:
//ofstream: arquivo/ficheiro de sa�da do .cpp
//ifstream: a informa��o sai do arquivo/ficheiro e entra no .cpp
//fstream: pode ser definido como entrada ou sa�da

using namespace std;
#include <iostream>
#include <fstream>

int main()
{
    ofstream arquivo;
    arquivo.open("arquivo-teste.txt");
    arquivo << "C++" << endl;
    arquivo << "Aula 50 sobre arquivos - ofstream" << endl;
    arquivo.close();

    //ios::app - insere o conte�do no final do arquivo,
    //sem sobrescrever o que j� existe.
    arquivo.open("arquivo-teste2.txt", ios::app);
    //O arquivo foi criado com a informa��o abaixo
    arquivo << "C++\n"; 
    //inclus�o da instru��o abaixo feita posteriormente a inclus�o acima
    arquivo << "Aula 50 - Teste2\n";
    arquivo.close();
}