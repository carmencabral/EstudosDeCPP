// aula27.cpp
// ENUM
//Padrão: estrutura sequencial
//fuzil = 0...escopeta = 3

#include <iostream>
using namespace std;

int main()
{
    
    enum armas { fuzil, revolver, rifle, escopeta};
    armas armaSel;
    armaSel = fuzil;
    cout << armaSel << " ";
    cout << revolver << " ";
    cout << rifle << " ";
    cout << escopeta << "\n";

    enum armas2 {fuzil2=100, revolver2=8, rifle2=12, escopeta2=1};
    cout << fuzil2 << " ";
    cout << revolver2 << " ";
    cout << rifle2 << " ";
    cout << escopeta2 << "\n";
    
    enum armas3 { fuzil3=10, revolver3, rifle3, escopeta3 };
    cout << fuzil3 << " ";
    cout << revolver3 << " ";
    cout << rifle3 << " ";
    cout << escopeta3 << "\n";

    return 0;
}