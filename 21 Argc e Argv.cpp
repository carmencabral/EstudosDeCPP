// aula21.cpp
// ARGUMENTOS PARA A FUN��O MAIN, ARGC E ARGV
// Receber um par�metro via prompt de comando

#include <iostream>
#include <string.h> //strcmp
#include <stdlib.h> //system
using namespace std;

//argc: guarda a quantidade de par�metros informado
//argv: ponteiro para uma matriz de ponteiro de caracter, que armazena os argumentos
//Por padr�o, o primeiro argumento � o nome do programa.

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        if (!strcmp(argv[1], "sol")) //compara�ao de string
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