//Carmen Cabral
// aula50.cpp - Arquivo ofstream: 12/01/2021
//open, close, ios::app
//TIPOS:
//ofstream: arquivo/ficheiro de saída do .cpp
//ifstream: a informação sai do arquivo/ficheiro e entra no .cpp
//fstream: pode ser definido como entrada ou saída

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

    //ios::app - insere o conteúdo no final do arquivo,
    //sem sobrescrever o que já existe.
    arquivo.open("arquivo-teste2.txt", ios::app);
    //O arquivo foi criado com a informação abaixo
    arquivo << "C++\n"; 
    //inclusão da instrução abaixo feita posteriormente a inclusão acima
    arquivo << "Aula 50 - Teste2\n";
    arquivo.close();
}