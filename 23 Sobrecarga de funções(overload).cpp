// aula23.cpp
// Sobrecarga de fun�oes
// Duas fun��es com o mesmo nome

#include <iostream>
using namespace std;

void soma(int n1, int n2);
void soma();
int main()
{

    soma(20, 30);
    soma();
    return 0;
}

//FUN��O
void soma(int n1, int n2)
{
    int res;
    res = n1 + n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " = " << res << "\n";
}

void soma()
{
    int n1, n2, res;
    n1 = 10;
    n2 = 20;
    res = n1 + n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " = " << res << "\n";
}
