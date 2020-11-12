// aula21.cpp
// ARGUMENTOS PARA A FUNÇÃO MAIN, ARGC E ARGV
// Receber um parâmetro via prompt de comando

#include <iostream>
#include <string.h> //strcmp
#include <stdlib.h> //system
using namespace std;

//argc: guarda a quantidade de parâmetros informado
//argv: ponteiro para uma matriz de ponteiro de caracter, que armazena os argumentos
//Por padrão, o primeiro argumento é o nome do programa.

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        if (!strcmp(argv[1], "sol")) //comparaçao de string
        {
            cout << "Vou a praia.\n\n";
        }
        else
            if (!strcmp(argv[1], "nublado"))
            {
                cout << "Vou ao cinema.\n\n";
            }
            else
            {
                cout << "Fico em casa.\n\n";
            }
    }

    system("pause");
    return 0;
}