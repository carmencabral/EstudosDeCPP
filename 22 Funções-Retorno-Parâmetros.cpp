// aula22.cpp
//Funçoes - parte 1

#include <iostream>
using namespace std;

//Declaraçao da funçao
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

//Função sem retorno e sem parâmetros
void texto()
{
    cout << "\nEstudo das Funcoes\n\n";
}

//Função sem retorno e com parâmetros tipo int
void soma(int n1, int n2)
{
    cout << "Soma = " << n1 + n2 << "\n";
}

//Função com retorno tipo int e com parâmetros tipo int
int produto(int n1, int n2)
{
    int p = n1 * n2;
    return p;
}

//Função sem retorno e com parâmetros tipo vetor/array
void tr(string transp[4])
{
    for(int i=0; i<4;i++)
        cout << transp[i] << " ";
}