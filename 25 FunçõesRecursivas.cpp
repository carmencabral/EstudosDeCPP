// aula25.cpp
//FUNÇÕES RECURSIVAS (RECURSIVIDADE)
//Funções que chamam a si mesmas

#include <iostream>
using namespace std;

void contador(int num, int cont = 0);

int main()
{
    
    contador(10);
    return 0;
}

void contador(int num, int cont)
{
    cout << cont << "\n";
    if (num > cont)
    {
        contador(num, ++cont);
    }
}