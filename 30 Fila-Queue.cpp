// aula30.cpp
// Fila / Queue
// Primeiro que entra, é o primeiro que sai.

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //declarar a fila
    queue <string> cartas;

    //Pilha vazia?
    if (cartas.empty())
    {
        cout << "Fila vazia!\n\n";
    }
    else
    {
        cout << "Fila com cartas!\n\n";
    }

    //elementos da fila
    string carta1 = "Rei de Copas"; //primeira carta
    string carta2 = "Rei de Espadas";
    string carta3 = "Rei de Ouros";
    string carta4 = "Rei de Paus"; //última carta

    //incluir elementos na fila
    cartas.push(carta1);
    cartas.push(carta2);
    cartas.push(carta3);
    cartas.push(carta4);

    //Fila vazia?
    if (cartas.size() == 0)
    {
        cout << "Fila vazia!\n\n";
    }
    else
    {
        cout << "Fila com cartas!\n\n";
    }

    //imprimir o tamanho da fila
    cout << "\nTamanho da fila: " << cartas.size() << "\n";

    //visualiza o elemento que está na frente da fila (primeira carta)
    cout << "Primeira carta: " << cartas.front() << "\n";

    //visualiza o elemento que está no final da fila (última carta)
    cout << "Ultima carta: " << cartas.back() << "\n";

    //Atualização: tamanho
    cout << "\nRetirada da carta da primeira carta" << "\n";
    cout << "Novo tamanho da fila: " << cartas.size() << "\n";

    //excluir todos os elementos da fila
    while (!cartas.empty())
    {
        cout << "Primeira carta: " << cartas.front() <<"\n";
        cartas.pop(); //retirar elemento da fila
    }

    //Atualização: tamanho
    cout << "\nExclusao de todos elementos da fila" << "\n";
    cout << "Novo tamanho da fila: " << cartas.size() << "\n";


    return 0;
}

/*
    empty: verifica se fila está vazia
    size: mostra o tamanho da fila
    front: primeira carta
    back: última carta
    push: inclui elementos na fila
    pop: retirar elemento da fila
*/