// aula06.cpp
//Variáveis globais e locais
//Operadores matemáticos
//Função somar
#include <iostream>
using namespace std;

int n1, n2; //variáveis globais
int somar(int a, int b, int c, int d);

int main()
{
    //Operadores Matemáticos: +  -  /  *  %
    
    int n3, n4; //variáveis locais

    n1 = 15; n2 = 20; n3 = 25; n4 = 30;

    cout << "n1 = " << n1 << "\n";
    cout << "n2 = " << n2 << "\n";
    cout << "n3 = " << n3 << "\n";
    cout << "n4 = " << n4 << "\n";

    int resultado = somar(n1,n2,n3,n4);

    cout << "SOMA = " << resultado << "\n";

    cout << n2 << " % " << n1 << " resto = " << n2 % n1;
    cout << "\n";
    cout << n4 << " % " << n2 << " resto = " << n4 % n2;

    return 0;
}

int somar(int a, int b, int c, int d)
{
    int s = a + b + c + d;
    return s;
}
