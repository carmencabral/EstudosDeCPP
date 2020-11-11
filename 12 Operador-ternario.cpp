// aula12.cpp
// Operador ternário/ternary operator

#include <iostream>
using namespace std;

int main()
{
   
    int n1, n2, nota, x;
    string res;
    x = 5;

    cout << "Digite a primeira nota [n1]: ";
    cin >> n1;

    cout << "Digite a segunda nota [n2]: ";
    cin >> n2;

    nota = n1 + n2;

    // (CONDIÇÃO) ? RESPOSTA1 : RESPOSTA2;
    //FORMAS DE USO DO OPERADOR TERNÁRIO

    //FORMA 1: VARIÁVEL DENTRO DO OPERADOR TERNÁRIO
    (nota >= 60) ? res = "Aprovado!" : res = "Reprovado!";

    //FORMA 2: VARIÁVEL RECEBENDO O RESULTADO DA CONDIÇÃO DO OPERADOR TERNÁRIO
    res = (nota >= 60) ? "Aprovado!" : "Reprovado!";

    cout << "\nSituacao do aluno: " << res << "\n";

    //FORMA 3: INCREMENTA OU DECREMENTA O VALOR DE UMA VARIÁVEL
    cout << "\nx =  " << x << "\n";

    cout << "Se n1 >= 10 ? x++ : x--" << "\n";
    (n1 >= 10) ? x++ : x--;
    cout << "\nNovo valor de x =  " << x << "\n";

    return 0;
}