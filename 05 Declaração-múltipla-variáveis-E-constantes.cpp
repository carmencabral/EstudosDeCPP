// aula05.cpp
//Declaração múltipla de variáveis
//#define para constantes

#include <iostream>
using namespace std;
#define PI 3.1415
#define nome cout << "nome: Carmen Cabral\n"

int main()
{
    
    int vidas=3, ano=2020, life=100;
    
    
    cout << "vidas: " << vidas << "\n" << 
        "ano: " << ano << "\n" << "life: " << life;
    cout << "\n" << "PI: " << PI << "\n";
    nome;

    return 0;
}

