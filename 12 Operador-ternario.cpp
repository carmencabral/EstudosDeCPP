// aula12.cpp
// Operador tern�rio/ternary operator

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

    // (CONDI��O) ? RESPOSTA1 : RESPOSTA2;
    //FORMAS DE USO DO OPERADOR TERN�RIO

    //FORMA 1: VARI�VEL DENTRO DO OPERADOR TERN�RIO
    (nota >= 60) ? res = "Aprovado!" : res = "Reprovado!";

    //FORMA 2: VARI�VEL RECEBENDO O RESULTADO DA CONDI��O DO OPERADOR TERN�RIO
    res = (nota >= 60) ? "Aprovado!" : "Reprovado!";

    cout << "\nSituacao do aluno: " << res << "\n";

    //FORMA 3: INCREMENTA OU DECREMENTA O VALOR DE UMA VARI�VEL
    cout << "\nx =  " << x << "\n";

    cout << "Se n1 >= 10 ? x++ : x--" << "\n";
    (n1 >= 10) ? x++ : x--;
    cout << "\nNovo valor de x =  " << x << "\n";

    return 0;
}