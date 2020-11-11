// aula15.cpp
// Instrução break 

#include <iostream>
using namespace std;

int main()
{

    int cont = 0;

    while (cont < 1000)
    {
        cout << cont << "  ";
        cont++;
        if (cont == 100)
        {
            break;
        }
    }

    cout << "\n";
    return 0;
}