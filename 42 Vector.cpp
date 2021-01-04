// aula42.cpp
// Vector
// Métodos: push_back(), insert(), erase(), size(),
// front(), back(), at(), swap(), empty(), pop_back(), clear().

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num1;
    vector<int> num2;
    int tam1, tam2, i;

    //Insere elementos no vector num1 no final
    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);
    num1.push_back(5);

    //Insere elementos no vector num2 no final
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);
    num2.push_back(9);
    num2.push_back(10);

    //Insere o elemento 444 no vector num1 na segunda posição
    num1.insert(num1.begin()+1,444);

    //Insere o elemento 888 no vector num1 no final
    num1.insert(num1.end(), 888);

    //Insere o elemento 111 no vector num1 na penúltima posição
    num1.insert(num1.end()-1, 111);

    //Remove o último elemento de num1 (888)
    num1.erase(num1.end()-1);

    //Indica o tamanho do vector num1
    tam1 = num1.size();

    //Indica o tamanho do vector num2
    tam2 = num2.size();

    cout << "Tamanho do vector num1: " << tam1 << endl;
    cout << "Tamanho do vector num2: " << tam2 << endl;

    //Mostra elementos: primeiro, último e do meio do vector num1
    cout << "Primeiro valor de num1: " << num1.front() << endl;
    cout << "Ultimo valor de num1..: " << num1.back() << endl;
    cout << "Valor do meio de num1.: " << num1.at(tam1/2) << endl;

    //swap: faz a troca de valores entre os vectors
    //coloca os valores de num2 em num1 e de num1 em num2
    //num1.swap(num2);

    cout << "Elementos do vector num1: ";
    for (i = 0; i < tam1; i++)
        cout << num1[i] << " ";

    cout << "\nElementos do vector num2: ";
    for (i = 0; i < tam2; i++)
        cout << num2[i] << " ";

    //Enquanto num1 não estiver vazio,
    //pop_back: remove os elementos.
    while (!num1.empty())
    {
        num1.pop_back();
    }

    //Limpa os elementos de num2
    num2.clear();

    cout << "\n\nNovo tamanho de num1: " << num1.size() << endl;
    cout << "Novo tamanho de num2: " << num2.size() << endl;

    return 0;
}

/*

Métodos:
push_back(): insere elementos no final do vector.
insert(): insere elementos na posição indicada.
erase(): remove o elemento indicado.
size(): indica o tamanho do vector.
front(): mostra o primeiro elemento.
back(): mostra o último elemento.
at(): mostra o elemento na posição indicada.
swap(): troca valores entre 2 vectors.
empty(): indica vector vazio.
pop_back(): remove elementos do vector.
clear(): limpa o vector.

*/