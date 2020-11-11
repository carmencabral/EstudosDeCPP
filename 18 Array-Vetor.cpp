// aula18.cpp
// Array / Vetor

#include <iostream>
using namespace std;
#define TAM 5

int main()
{
    int vetor[TAM] = {10, 20, 30, 40, 50};

    for (int i = 0, cont = 1; i < TAM; i++, cont++)
    {
        cout << "Digite o valor " << cont << ": ";
        cin >> vetor[i];
    }

    for (int i = 0; i < TAM; i++)
    {
        cout << vetor[i] << " ";
    }

    return 0;
}