// Carmen Cabral
// aula43.cpp - 05/01/2021
//System
//O parâmetro de system() é um comando do sistema operacional
//Parâmetros do DOS usados:
//dir; pause; cls; color
//dir: mostra pastas e ficheiros/arquivos do sistema
//pause: "Pressione qualquer tecla para continuar..."
//cls: limpa a tela
//color xy: altera cor de fundo e da fonte do prompt de comando,
//onde x, caracter para cor de fundo e y, caracter para cor da fonte 
//Caracteres xy no final do código

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	//altera as cores do prompt de comando
	//70 7-fundo branco e 0-fonte preta
	system("color 70");
	system("dir"); //mostra as pastas e ficheiros/arquivos do sistema
	system("pause");
	system("cls"); //limpa a tela
	
	//1F 1-fundo azul e F-fonte branca
	system("color 1F");
	cout << "\nCarmen Cabral" << endl;
	system("pause"); //Pressione qualquer tecla para continuar...
	system("cls"); 

	//59 5-fundo roxo e 9-fonte azul-claro
	system("color 59");
	cout << "\nCarmen Cabral" << endl;
	system("pause");
	system("cls"); 
	
	//64 6-fundo amarelo e 4-fonte vermelha
	system("color 64");
	cout << "\nCarmen Cabral" << endl;
	system("pause");
}
/* color/?
* system("color 46") - fundo vermelho e fonte amarela
0 = Preto       8 = Cinza
1 = Azul        9 = Azul claro
2 = Verde       A = Verde claro
3 = Verde-água  B = Verde-água claro
4 = Vermelho    C = Vermelho claro
5 = Roxo        D = Lilás
6 = Amarelo     E = Amarelo claro
7 = Branco      F = Branco brilhante
*/