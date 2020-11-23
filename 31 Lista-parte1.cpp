// aula31.cpp
// lista - parte 1

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> aula;
    int tam;
    list<int>::iterator it; //para inserção na posição desejada

    tam = 10;

    for (int i = 0; i < tam; i++) 
    {
        aula.push_front(i);
    }

    it = aula.begin(); //para inserção na posição desejada
    advance(it, 7); //para inserção na posição desejada
    aula.insert(it, 0); //para inserção na posição desejada

    cout << "Tamanho da lista: " << aula.size() << "\n";

    aula.sort();

    tam = aula.size();
    for (int i = 0; i < tam; i++) 
    {
        cout << aula.front() << "\n";
        aula.pop_front();
    }
    
    return 0;
}

/*
* DECLARAÇÕES DE LISTA:
list<int> aula(50); //50 posições
list<int> aula(5, 50); //5 posições com valor 50
list<int> aula, canal, teste; //3 listas
*/

/*
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