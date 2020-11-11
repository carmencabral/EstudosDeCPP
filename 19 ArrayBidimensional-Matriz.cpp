// aula19.cpp
// ARRAY BIDIMENSIONAL / MATRIZ

#include <iostream>
using namespace std;
#define LIN 3
#define COL 3

int main()
{
    int vetor[LIN][COL];

    cout << "Matriz " << LIN << " x " << COL << "\n";

    for (int i = 0, cont_i = 1; i < LIN; i++, cont_i++)
    {
        cout << "\n";
        for (int j = 0, cont_j = 1; j < COL; j++, cont_j++)
        {
            cout << "Digite o valor da linha " << cont_i << " coluna " << cont_j << ": ";
            cin >> vetor[i][j];
        }
    }

    for (int i = 0; i < LIN; i++)
    {
        cout << "\n";
        for (int j = 0; j < COL; j++)
        {
            cout << vetor[i][j] << " ";
        }
    }

    cout << "\n";

    return 0;
}