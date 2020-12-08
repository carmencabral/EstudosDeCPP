// aula38.cpp
// Ponteiros/Pointers - parte 3
// Associar ponteiros às funções

#include <iostream>
using namespace std;

void somar(float *s, float valor);
void iniciarVetor(float* v);

int main()
{
    float s = 0;
    float vetor[5];

    somar(&s, 15);
    cout << "Ponteiro associado com a funcao somar\n";
    cout << s << "\n";
    
    iniciarVetor(vetor); //vetor não precisa usar '&'

    cout << "\nPonteiro associado com a funcao vetor\n";
    for (int i = 0; i < 5; i++)
    {
        cout << vetor[i] << "\n";
    }

    return 0;
}

//Função
void somar(float *s, float valor)
{
    *s += valor;
}

void iniciarVetor(float *v)
{
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;
    v[4] = 50;
}