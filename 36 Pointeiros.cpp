// aula36.cpp
// Ponteiros/Apontadores/Pointers
//O ponteiro armazena o endere�o de outra vari�vel

#include <iostream>
using namespace std;

int main()
{
    int* pn; //ponteiro
    int num = 4;

    //Associar o ponteiro a uma vari�vel
    pn = &num;

    //Imprimir o endere�o da vari�vel num
    cout << "Endereco de num = " << pn; // pn = &num

    //Imprimir o valor que est� na vari�vel num
    cout << "\nValor que esta em num = " << num; /// num = *pn, imprime 4
    
    //coloca o valor 10 na vari�vel 'num' para onde o ponteiro pn est� apontando
    //ou seja, substitui 4 por 10
    *pn = 10; // � o mesmo que num = 10;

    cout << "\nValor que esta em num = " << num; //imprime 10
    cout << "\nValor que esta em num = " << *pn; //imprime 10

    return 0;
}