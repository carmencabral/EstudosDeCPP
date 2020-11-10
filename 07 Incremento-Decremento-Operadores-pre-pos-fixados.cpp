// aula07.cpp
//Incremento e Decremento de vari�veis
//Operadores p�s e pr�-fixados

#include <iostream>
using namespace std;


int main()
{
    int n1, n2, n3;

    n1 = 5;
    n2 = 10;
    n3 = 22;
    
    cout << n1 << "\n";
    cout << n2 << "\n";
    cout << n3 << "\n";

    //INCREMENTO
    n1 = n1 + 1;
    n1 += 1; //incrementa o valor indicado
    n1++; //sempre incrementa um
    cout << "n1= " << n1 << "\n";

    //DECREMENTO
    n1 = n1 - 1;
    n1 -= 1;  //decrementa o valor indicado
    n1--; //sempre decrementa um
    cout << "n1= " << n1 << "\n";

    //COM MULTIPLICA��O NA FORMA REDUZIDA
    n2 *= 3;
    cout << "n2= " << n2 << "\n";

    //COM DIVIS�O NA FORMA REDUZIDA
    n2 /= 2;
    cout << "n2= " << n2 << "\n";

    //P�S-INCREMENTO OU P�S-FIXADO
   // n3++;
    cout << "n3= " << n3++ << "\n";

    //PR�-INCREMENTO OU PR�-FIXADO
    //++n3;
    cout << "n3= " << ++n3 << "\n";

    return 0;
}