// aula24.cpp
// Omiss�o de argumentos e Argumentos padr�o

#include <iostream>
using namespace std;

void imp(string txt = "Carmen"); //Valor padr�o para o argumento

int main()
{
    imp(); //Argumento omitido, ser� usado o valor padr�o da linha 7
    
    imp("Cabral"); //Ser� usado este argumento
    return 0;
}

//FUN��O
void imp(string txt)
{
    cout << "\n" << txt << "\n";
}