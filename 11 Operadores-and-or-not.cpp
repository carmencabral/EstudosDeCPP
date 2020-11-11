// aula11.cpp
// Operadores: AND, OR, NOT

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int num1, num2, num3;
    char opc;

    inicio:

        system("cls");

        cout << "Teste logico para num1: > 4 E < 7....Aceito!\n";
        cout << "Teste logico para num2: < 3 OU > 8....Aceito!\n";
        cout << "Teste logico para num3: !0....Aceito!\n";

        cout << "Digite o valor de num1: ";
        cin >> num1;

        cout << "Digite o valor de num2: ";
        cin >> num2;
        
        cout << "Digite o valor de num3: ";
        cin >> num3;

        //OPERADOR &&
        if (num1 > 4 && num1 < 7)
        {
            cout << "num1 = " << num1 << " - Valor Aceito!\n";
        }
        else
        {
            cout << "num1 = " << num1 << " - Valor NAO aceito!\n";
        }

        //OPERADOR ||
        if (num2 < 3 || num2 > 8)
        {
            cout << "num2 = " << num2 << " - Valor aceito!\n";
        }
        else
        {
            cout << "num2 = " << num2 << " - Valor NAO aceito!\n";
        }

        //OPERADOR !
        //Só será aceito quando num3 for "0", pois passará para o valor "1" na condição "!num3"
        if (!num3) // if (!0) // if (1) = valor aceito!
        {
            cout << "num3 = " << num3 << " - Valor aceito!\n";
        }
        else //qualquer num3 diferente de "0" = valor NAO aceito!
        {
            cout << "num3 = " << num3 << " - Valor NAO aceito!\n";
        }

        cout << "\nDigitar outros numeros?(s/n): ";
        cin >> opc;

        if (opc == 's' or opc == 'S')
        {
            goto inicio;
        }

        return 0;
}

/*
1 = true / verdadeiro
0 = false / falso

TABELA VERDADE
AND / && / E
| x | y | x && y |
| 0 | 0 |   0    | false
| 0 | 1 |   0    | false
| 1 | 0 |   0    | false
| 1 | 1 |   1    | true

OR / || / OU
| x | y | x || y |
| 0 | 0 |   0    | false
| 0 | 1 |   1    | true
| 1 | 0 |   1    | true
| 1 | 1 |   1    | true

*/