// aula24.cpp
// Omissão de argumentos e Argumentos padrão

#include <iostream>
using namespace std;

void imp(string txt = "Carmen"); //Valor padrão para o argumento

int main()
{
    imp(); //Argumento omitido, será usado o valor padrão da linha 7
    
    imp("Cabral"); //Será usado este argumento
    return 0;
}

//FUNÇÃO
void imp(string txt)
{
    cout << "\n" << txt << "\n";
}