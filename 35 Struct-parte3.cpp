// aula35.cpp
// Struct - parte 3: com array

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
    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4, car5;

    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;

    carros[0].incluirCarro("Tornado", "vermelho", 450, 350);
    carros[1].incluirCarro("Luxo", "preto", 250, 260);
    carros[2].incluirCarro("Familia", "prata", 150, 180);
    carros[3].incluirCarro("Trabalho", "branco", 80, 120);
    carros[4].incluirCarro("Padrao", "cinza", 100, 150);

    carros[0].mudarVelocidade(220);
    carros[1].mudarVelocidade(110);
    carros[2].mudarVelocidade(120);
    carros[3].mudarVelocidade(130);
    carros[4].mudarVelocidade(140);
    
    for (int i = 0; i < 5; i++)
    {
        carros[i].mostrarCarro();
    }

    return 0;
}