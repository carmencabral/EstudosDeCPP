// aula20.cpp
// JOGO DA FORCA

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    char palavra[30]; //contém a palavra secreta
    char letra[1]; //contém as alternativas que o jogador digitar
    char secreta[30]; //mostra as letras que foram acertadas pelo jogador
    int tam, i, chances, acertos;
    bool acerto; //verifica se a letra está certa ou errada

    chances = 6; //quantidade de chances do jogador
    tam = 0; //tamanho da palavra lida
    i = 0;
    acerto = false;
    acertos = 0; //quantidade de acertos do jogador

    //Guarda a palavra secreta
    cout << "Fale para seu amigo tampar os olhos e digite a palavra secreta: ";
    cin >> palavra;
    system("cls");

    //verifica o tamanho da palavra
    while (palavra[i] != '\0') //'\0' caracter do 'enter'
    {
        i++;
        tam++;
    }

    //preencher o vetor secreta com tracinhos
    for (i = 0; i < 30; i++)
    {
        secreta[i] = '-';
    }

    //rotina do jogo
    while ((chances > 0) && (acertos < tam))
    {
        cout << "chances restantes " << chances << "\n";
        cout << "Palavra secreta: ";
        for (i = 0; i < tam; i++)
        {
            cout << secreta[i];
        }
        cout << "\nDigite uma letra: ";
        cin >> letra[0];
        
        //Percorre o array da palavra secreta
        for (i = 0; i < tam; i++)
        {
            if (palavra[i] == letra[0])
            {
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if (!acerto)
        {
            chances--;
        }

        acerto = false;
        system("cls");
    }

    cout << palavra << "\n";

    if (acertos == tam)
        cout << "Voce venceu!\n";
    else cout << "Voce perdeu!\n";

    system("pause");

    return 0;
}