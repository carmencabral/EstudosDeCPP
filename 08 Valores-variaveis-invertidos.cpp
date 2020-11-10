// aula08.cpp
// inversão de valores de variáveis

#include <iostream>
using namespace std;
int main()
{
    int num = 10;

    cout << num << "\n"; //10

    //forma simplificada
    //Grava o valor negativo na variável "num".
    //Inverte o valor de positivo para negativo
    num =- num;
    cout << num << "\n"; //-10

    //forma tradicional
    //Grava o valor negativo na variável "num".
    //Inverte o valor de negativo para positivo
    num = num * -1;
    cout << num << "\n"; //10

    //Não grava o valor negativo na variável "num".
    //Só inverte o valor de positivo para negativo
    cout << -num << "\n"; //-10

    //Valor armazenado em "num"
    cout << num << "\n"; //10

    return 0;

}