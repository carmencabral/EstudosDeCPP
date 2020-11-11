// aula13.cpp
// Instrução switch case aninhados

#include <iostream>
using namespace std;

int main()
{
    int val;

    cout << "Selecione um transporte:\n";
    cout << "1 = carro, 2 = moto, 3 = aviao, 4 = helicoptero\n";

    cout << "Digite um valor: ";
    cin >> val;

    switch (val) {
        case 1:
        case 2:
            cout << "Transporte terrestre!\n";
            switch (val) {
                case 1:
                    cout << "Carro selecionado!\n";
                    break;
                case 2:
                    cout << "Moto selecionada!\n";
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "Transporte aereo!\n";
            switch (val) {
            case 3:
                cout << "Aviao selecionado!\n";
                break;
            case 4:
                cout << "Helicoptero selecionado!\n";
                break;
            }
            break;
        default:
            cout << "Escolha incorreta!\n";;

    }

    return 0;
}