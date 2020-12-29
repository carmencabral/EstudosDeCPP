// aula40.cpp
// printf e scanf_s

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int num1, num2, num3, soma;
    char nome[10] = "Carmen";
    string nome2;
    num1 = 10; num2 = 20; num3 = 30;

    printf("CARMEN GLORIA\nFERNANDES CABRAL");

    printf("\nNumero =  %d\nNome = %s", num1, nome);

    printf("\n\nEscreva numero: ");
    scanf_s("%d", &num1);
    printf("Escreva numero: ");
    scanf_s("%d", &num2);
    printf("Escreva numero: ");
    scanf_s("%d", &num3);

    soma = num1 + num2 + num3;
    printf("Soma = %d", soma);

    printf("\n");
    
    system("pause");
    return 0;
}

/*
d, i para int 
x, X para hexadecimal 
u para int sem sinal
s para string, char*
f para double
p para ponteiros
*/