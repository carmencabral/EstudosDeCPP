// aula37.cpp
// Ponteiros/Pointers - parte 2
//O ponteiro armazena o endere�o de outra vari�vel
//Incluindo arrays

#include <iostream>
using namespace std;

int main()
{
    //tipo int tem tamanho de 4 bytes
    int* p; //ponteiro
    int vetor[10];

    //Associar o ponteiro a primeira posi��o do vetor/array
    p = vetor; // � o mesmo que p = &vetor[0];
    
    //Coloca o valor 4 na primeira posi��o do array, 
    //que � para onde o ponteiro 'p' est� apontando
    *p = 4; // � o mesmo que vetor[0] = 4;

    //Imprime o valor da primeira posi��o do array 'vetor'
    cout << "Valor da primeira posicao do vetor: " << *p;

    //Imprimir o endere�o da primeira posi��o array 'vetor'
    cout << "\nEndereco da primeira posicao do vetor: " << p;

    //incremento do ponteiro
    *(p += 1); //+4 bytes
    *p = 7; // � o mesmo que vetor[1] = 7;
    //Imprime o valor da segunda posi��o do array 'vetor'
    cout << "\nValor da segunda posicao do vetor: " << *p;

    //Imprimir o endere�o da segunda posi��o array 'vetor'
    cout << "\nEndereco da segunda posicao do vetor: " << p;

    *(p += 1); //+4 bytes
    //Imprimir o endere�o da terceira posi��o array 'vetor'
    cout << "\n" << "Endereco da terceira posicao do vetor: " << &vetor[2];

    return 0;
}