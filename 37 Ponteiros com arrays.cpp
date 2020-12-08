// aula37.cpp
// Ponteiros/Pointers - parte 2
//O ponteiro armazena o endereço de outra variável
//Incluindo arrays

#include <iostream>
using namespace std;

int main()
{
    //tipo int tem tamanho de 4 bytes
    int* p; //ponteiro
    int vetor[10];

    //Associar o ponteiro a primeira posição do vetor/array
    p = vetor; // é o mesmo que p = &vetor[0];
    
    //Coloca o valor 4 na primeira posição do array, 
    //que é para onde o ponteiro 'p' está apontando
    *p = 4; // é o mesmo que vetor[0] = 4;

    //Imprime o valor da primeira posição do array 'vetor'
    cout << "Valor da primeira posicao do vetor: " << *p;

    //Imprimir o endereço da primeira posição array 'vetor'
    cout << "\nEndereco da primeira posicao do vetor: " << p;

    //incremento do ponteiro
    *(p += 1); //+4 bytes
    *p = 7; // é o mesmo que vetor[1] = 7;
    //Imprime o valor da segunda posição do array 'vetor'
    cout << "\nValor da segunda posicao do vetor: " << *p;

    //Imprimir o endereço da segunda posição array 'vetor'
    cout << "\nEndereco da segunda posicao do vetor: " << p;

    *(p += 1); //+4 bytes
    //Imprimir o endereço da terceira posição array 'vetor'
    cout << "\n" << "Endereco da terceira posicao do vetor: " << &vetor[2];

    return 0;
}