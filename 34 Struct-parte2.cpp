// aula34.cpp
// Struct - parte 2: Métodos

#include <iostream>
using namespace std;

struct Carro
{
    string nome;
    string cor;
    int potencia;
    int velocMax;
    int velocidade;

    //Métodos
    void incluirCarro(string n, string c, int p, int vm)
    {
        nome = n;
        cor = c;
        potencia = p;
        velocMax = vm;
        velocidade = 0;
    }

    void mostrarCarro()
    {
        cout << "Nome.............: " << nome << "\n";
        cout << "Cor..............: " << cor << "\n";
        cout << "Potencia.........: " << potencia << "\n";
        cout << "Velocidade atual: " << velocidade << "\n";
        cout << "Velocidade maxima: " << velocMax << "\n\n";
    }

    void mudarVelocidade(int v)
    {
        velocidade = v;
        if (velocidade > velocMax)
        {
            velocidade = velocMax;
        }
        if (velocidade < 0)
        {
            velocidade = 0;
        }
    }
};

int main()
{
    Carro car1, car2;

    car1.incluirCarro("Tornado", "vermelho", 450, 350);
    car2.incluirCarro("Luxo", "preto", 250, 260);

    cout << "CARRO 1\n";
    car1.mostrarCarro();
    cout << "CARRO 2\n";
    car2.mostrarCarro();

    car1.mudarVelocidade(120);
    car2.mudarVelocidade(140);

    cout << "CARRO 1\n";
    car1.mostrarCarro();
    cout << "CARRO 2\n";
    car2.mostrarCarro();

    return 0;
}