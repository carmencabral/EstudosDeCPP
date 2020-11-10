// aula10.cpp
// Comando de decisão IF ELSE e comando Goto - Parte 2
// Goto para repetir estruturas - direciona o ponteiro de execução do programa

#include <iostream>
#include<stdlib.h>
using namespace std;
#define LS 60
#define LI 40
int main()
{
    int n1, n2, res;
    char opc;

    //label para o goto
    inicio: 
        
        system("cls");

        cout << "Digite o valor da nota 1: ";
        cin >> n1;
        cout << "Digite o valor da nota 2: ";
        cin >> n2;

        res = n1 + n2;
    
        if (res >= LS)
        {
            cout << "\nAluno aprovado!\n";
        }
        else if(res >= LI)
        {
            cout << "\nAluno em recuperacao!\n";
        }
        else 
        {
            cout << "\nAluno reprovado!\n";
        }

        cout << "\nDigitar outras notas?(s/n): ";
        cin >> opc;

        if (opc == 's' or opc == 'S')
        {
            goto inicio;
        }

    return 0;
}