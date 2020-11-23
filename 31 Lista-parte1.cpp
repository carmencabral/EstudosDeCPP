// aula31.cpp
// lista - parte 1

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> aula;
    int tam;
    list<int>::iterator it; //para inser��o na posi��o desejada

    tam = 10;

    for (int i = 0; i < tam; i++) 
    {
        aula.push_front(i);
    }

    it = aula.begin(); //para inser��o na posi��o desejada
    advance(it, 7); //para inser��o na posi��o desejada
    aula.insert(it, 0); //para inser��o na posi��o desejada

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
* DECLARA��ES DE LISTA:
list<int> aula(50); //50 posi��es
list<int> aula(5, 50); //5 posi��es com valor 50
list<int> aula, canal, teste; //3 listas
*/

/*
push_back(): insere atr�s
push_front(): insere na frente
insert(): insere o elemento indicado
advance(): indica a posi��o que o elemento ser� inserido
front(): acessa o primeiro elemento
begin(): declara o iterador
size(): mostra o tamanho da lista
pop_front(): apaga o primeiro elemento
sort(): ordena
reverse(): inverte a lista
*/