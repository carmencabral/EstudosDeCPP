// aula32.cpp
// lista - parte 2

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> aula, teste;
    int tam;
    list<int>::iterator it; //para inserção na posição desejada

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    tam = 10;
    for (int i = 0; i < tam; i++)
    {
        aula.push_front(i);
    }

    it = aula.begin(); //para inserção/remoção na posição desejada
    advance(it, 3); //para inserção/remoção na posição desejada
    aula.insert(it, 0); //para inserção na posição desejada
    aula.erase(--it); // para remoção na posição desejada

    aula.sort();
    aula.merge(teste);

    cout << "Atualizacao apos 'merge'\n";
    cout << "Tamanho da lista 'aula': " << aula.size() << "\n";
    cout << "Tamanho da lista 'teste': " << teste.size() << "\n";

    tam = aula.size();
    for (int i = 0; i < tam; i++)
    {
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    return 0;
}

/*
merge(): mescla duas listas
push_back(): insere atrás
push_front(): insere na frente
insert(): insere o elemento indicado
advance(): indica a posição que o elemento será inserido
front(): acessa o primeiro elemento
begin(): declara o iterador
size(): mostra o tamanho da lista
pop_front(): apaga o primeiro elemento
sort(): ordena
reverse(): inverte a lista
*/