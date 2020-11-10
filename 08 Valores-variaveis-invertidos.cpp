// aula08.cpp
// invers�o de valores de vari�veis

#include <iostream>
using namespace std;
int main()
{
    int num = 10;

    cout << num << "\n"; //10

    //forma simplificada
    //Grava o valor negativo na vari�vel "num".
    //Inverte o valor de positivo para negativo
    num =- num;
    cout << num << "\n"; //-10

    //forma tradicional
    //Grava o valor negativo na vari�vel "num".
    //Inverte o valor de negativo para positivo
    num = num * -1;
    cout << num << "\n"; //10

    //N�o grava o valor negativo na vari�vel "num".
    //S� inverte o valor de positivo para negativo
    cout << -num << "\n"; //-10

    //Valor armazenado em "num"
    cout << num << "\n"; //10

    return 0;

}