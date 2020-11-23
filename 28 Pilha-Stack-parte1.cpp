// aula28.cpp
// Pilha: estrutura de armazenamento de dados
// Primeiro que entra � o �ltimo que sai
// �ltimo que entra � o primeiro que sai
//O tamanho da pilha � calculado dinamicamente, conforme exclus�o e inclus�o de elementos

#include <stack> //biblioteca para trabalhar com pilhas
#include <iostream>
using namespace std;

int main()
{
    //declarar a pilha
    stack <string> cartas;
    
    //elementos da pilha
    string carta1 = "Rei de Copas"; 
    string carta2 = "Rei de Espadas";
    string carta3 = "Rei de Ouros";
    string carta4 = "Rei de Paus";

    //incluir elementos na pilha
    cartas.push(carta1);
    cartas.push(carta2);
    cartas.push(carta3);
    cartas.push(carta4); //est� no topo da pilha

    //imprimir o tamanho da pilha
    cout << "\nTamanho da pilha: " << cartas.size() << "\n";

    //visualiza o elemento que est� no topo
    cout << "Carta do topo: " << cartas.top() << "\n";

    //retirar elemento do topo da pilha
    cartas.pop();

    //Atualiza��es: tamanho e topo
    cout << "Retirada da carta do topo: Rei de Paus" << "\n";
    cout << "Novo tamanho da pilha: " << cartas.size() << "\n";
    cout << "Nova Carta do topo: " << cartas.top() << "\n";

    return 0;
}