// aula22.cpp
//Fun�oes - parte 1

#include <iostream>
using namespace std;

//Declara�ao da fun�ao
void texto();
void soma(int n1, int n2);
int produto(int n1, int n2);
void tr(string transp[4]);

int main()
{
    string transportes[4] = {"carro", "moto", "barco", "aviao"};

    texto();
    soma(15, 35);
    int resultado = produto(15,20);

    cout << "Multiplicacao = " << resultado << "\n";

    cout << "Transportes: ";
    tr(transportes);

    cout << "\n";

    return 0;
}

//Fun��o sem retorno e sem par�metros
void texto()
{
    cout << "\nEstudo das Funcoes\n\n";
}

//Fun��o sem retorno e com par�metros tipo int
void soma(int n1, int n2)
{
    cout << "Soma = " << n1 + n2 << "\n";
}

//Fun��o com retorno tipo int e com par�metros tipo int
int produto(int n1, int n2)
{
    int p = n1 * n2;
    return p;
}

//Fun��o sem retorno e com par�metros tipo vetor/array
void tr(string transp[4])
{
    for(int i=0; i<4;i++)
        cout << transp[i] << " ";
}