// aula04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Estudo das Variáveis e seus Tipos de Dados

#include <iostream>;
using namespace std;

int main()
{
    //TIPO NOME;
    //TIPO NOME = VALOR;
    // '=' Operador de atribuição

    int vidas = 0;
    char letra = 'C';
    char letras[20] = { "Carmen" }; //Vetor
    double decimal = 5.2;
    
     //precisão menor que o double
    float decimal2 = 5.2;
    bool vivo=true; //true (1) ou false (0)
    string nome = "Cabral"; 

    cout << "Digite o numero de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Dinheiro: ";
    cin >> decimal;
    cout << "Digite o seu nome: ";
    cin >> letras;
    cout << "Digite o seu sobrenome: ";
    cin >> nome;

    cout << "\n";

    cout << "vidas= " << vidas << "\n"
        << "letra= " << letra << "\n"
        "vivo= " << vivo <<"\n";
    cout << "decimal= " << decimal << "\n"
        << "decimal2= " << decimal2 << "\n";
    cout << "letras= " << letras << "\n"
        << "nome= " << nome;
    return 0;
}

/*

TIPO
TAMANHO
VALORES
1) Int (16bits)
    2 bytes 
    -32 768 a 32 767
2) Int (32bits)
    4 bytes 
    -2 147 483 648 a 2 147 483 647
3) char
    1 byte
    256 caracteres
4)double
    8 bytes 
    2.2e-308 a 3.4e-38
5) float
    4 bytes 
    1.2e-308 a 3.4e-38
6) bool
    1 byte
    true / false
7) unsigned short int
    2 bytes 
    0 a 65 535
8) short int
    2 bytes 
    -32768 a 32767
9) unsigned long int
    4 bytes 
    0 a 4 294 967 295
10) long int
    4 bytes 
    -2 147 483 648 a 2 147 483 647
11) unsigned int (16 bits)
    2 bytes 
    0 a 65 535
12) unsigned int (32 bits)
    4 bytes 
    0 a 4 294 967 295
13) string
    variável 
    textos

*/