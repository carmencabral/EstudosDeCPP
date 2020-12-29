// aula41.cpp
//printf e cout
//M_PI e cmath
//setw e setfill
//precision, scientific, hex, oct
//setbase(), bitset<>()

#include <iostream>
#include <cmath> //contém o valor de PI = M_PI
#include <iomanip> //contém setbase()
#include <bitset>
using namespace std;

int main()
{
    float pi = M_PI;
    float num1 = 5.89741;
    int num2 = 13;

    printf("Valor de PI: %.2f \n", pi);
    printf("Valor de num1: %07.1f \n", num1);

    //setw(10) coloca uma largura/width de 5
    cout << "num2 com largura 10: " << setw(5) << setfill('0') << num2;

    cout.precision(3); //duas casas decimais, pois o ponto também conta
    cout << "\nValor de PI com precision: " << pi << endl;

    cout << "Valor de PI em notacao cientifica: " << scientific << pi << endl;

    cout << "num2 em decimal: " << num2 << endl;
    cout << "num2 em hexadecimal: " << hex << num2 << endl;
    cout << "num2 em hexadecimal com setbase: " << setbase(16) << num2 << endl;
    cout << "num2 em octal: " << oct << num2 << endl;
    cout << "num2 em binario: " << bitset<4>(num2) << endl;
    
}