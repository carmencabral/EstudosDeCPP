// aula33.cpp
// Struct: parte 1

#include <iostream>
using namespace std;

struct Carro 
{
    string nome;
    string cor;
    int potencia;
    int velocMax;
};

int main()
{
    Carro car1;
    Carro car2;

    car1.nome = "Tornado";
    car1.cor = "vermelho";
    car1.potencia = 450;
    car1.velocMax = 350;

    car2.nome = "Luxo";
    car2.cor = "preto";
    car2.potencia = 250;
    car2.velocMax = 260;
    
    cout << "CARRO 1\n";
    cout << "Nome.............: " << car1.nome << "\n";
    cout << "Cor..............: " << car1.cor << "\n";
    cout << "Potencia.........: " << car1.potencia << "\n";
    cout << "Velocidade maxima: " << car1.velocMax << "\n\n";

    cout << "CARRO 2\n";
    cout << "Nome.............: " << car2.nome << "\n";
    cout << "Cor..............: " << car2.cor << "\n";
    cout << "Potencia.........: " << car2.potencia << "\n";
    cout << "Velocidade maxima: " << car2.velocMax << "\n";
    return 0;
}
