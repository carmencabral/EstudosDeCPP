// aula36.cpp
// Ponteiros/Apontadores/Pointers
//O ponteiro armazena o endereço de outra variável

#include <iostream>
using namespace std;

int main()
{
    int* pn; //ponteiro
    int num = 4;

    //Associar o ponteiro a uma variável
    pn = &num;

    //Imprimir o endereço da variável num
    cout << "Endereco de num = " << pn; // pn = &num

    //Imprimir o valor que está na variável num
    cout << "\nValor que esta em num = " << num; /// num = *pn, imprime 4
    
    //coloca o valor 10 na variável 'num' para onde o ponteiro pn está apontando
    //ou seja, substitui 4 por 10
    *pn = 10; // é o mesmo que num = 10;

    cout << "\nValor que esta em num = " << num; //imprime 10
    cout << "\nValor que esta em num = " << *pn; //imprime 10

    return 0;
}