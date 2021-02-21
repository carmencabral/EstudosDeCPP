// listaLigada2501.cpp

#include <iostream>
using namespace std;

//tipifica��o de struct para lista ligada
struct listaligada
{
	int numero; //a lista ser� ordenada por aqui
	int qualquercoisa; //item gen�rico
	listaligada* proximo; //membro para apontador
};

listaligada* CABECA = NULL; //o primeiro da lista ou head
listaligada* CAUDA = NULL; //o �ltimo ou tail (cauda)

int main()
{
	//3 apontadores gen�ricos para struct:
	listaligada* novo = NULL; 
	listaligada* atual = NULL; 
	listaligada* anterior = NULL;
	
	//dados gen�ricos
	char op = '0'; int n, qqc;
	
	do
	{
		cout << "\n\nLISTA LIGADA-EXERCICIO DIDATICO (TRABALHO COOPERATIVO) -----------------------\n";
		cout << "[1:listar]\n[2:insere primeiro][3:insere no fim][4:insere ao meio][5:INSERE(completo)]" << "\n"
			<< "[6:remove cabeca][7:remove cauda][8:remove ao meio][9:REMOVE (completo)]\n"
			<< "[a:limpa lista][b:init lista com 3 nos][c:lista ordenada? (sim/nao)][d:ordena lista][e:conta nos]\n"
			<< "[f:ler 2 nums; trocar os nos][g:inverter a lista] [H: ler isto, por favor]\n[0:SAIR]\n"
			<< "Op? ";
		cin >> op;//MENU

		switch (op)
		{
			case '1': //listar
				if (CABECA == NULL)
				{
					cout << "A lista esta vazia!" << endl;
				}
				else
				{
					atual = CABECA;
					while (atual != NULL)
					{
						cout << (*atual).numero << ";"; // ou atual->numero;
						cout << (*atual).qualquercoisa << ";";
						cout << (*atual).proximo << endl;
						cout << "-----------------------" << endl;
						atual = (*atual).proximo; //ou atual->proximo;
					}
				}
				break;

			case '2': //inserir o primeiro n�
				novo = (listaligada*) malloc(sizeof(listaligada));
				cout << "num? "; cin >> n;
				cout << "qqc? "; cin >> qqc; //pedir dados
				//a lista est� vazia; logo:
				(*novo).numero = n;
				(*novo).qualquercoisa = qqc;
				(*novo).proximo = NULL;
				//malloc: endere�o do primeiro byte
				//malloc define o endere�o de "proximo"
				//(listaligada*): cast
				CABECA = novo;
				CAUDA = novo;
				break;
			
			case '3': //inserir no fim o segundo n�
				novo = (listaligada*)malloc(sizeof(listaligada));
				cout << "num? "; cin >> n;
				cout << "qqc? "; cin >> qqc; //pedir dados
				(*CABECA).proximo = novo;
				(*novo).numero = n;
				(*novo).qualquercoisa = qqc;
				(*novo).proximo = NULL;
				CAUDA = novo;
				break;
			
			case '4': 
				//inserir ao meio em ordem - 29/01/2021
				int n, qq;
				cout << "Digite o numero a ser incluido: "; cin >> n;
				cout << "Digite qualquer coisa (numero) a ser incluida: "; cin >> qq;

				atual = CABECA;//(*CABECA).proximo;
				anterior = CABECA;

				//verifica onde ser� inclu�do o n�
				while ((*atual).numero < n)
				{
					anterior = atual;
					atual = (*atual).proximo;
				}
				//faz a inclus�o
				novo = (listaligada*)malloc(sizeof(listaligada));
				(*anterior).proximo = novo;
				(*novo).numero = n;
				(*novo).qualquercoisa = qq;
				(*novo).proximo = atual;

				cout << n << " incluido!";

				//inserir ao meio: entre a CABECA e o 2� n� - 29/01/2021
				/*
				atual = (*CABECA).proximo;
				novo = (listaligada*)malloc(sizeof(listaligada));
				(*CABECA).proximo = novo;
				(*novo).numero = 7;
				(*novo).qualquercoisa = 7777;
				(*novo).proximo = atual;
				cout << (*novo).numero << " inserido na segunda posicao!";
				*/
				break;

			case '6': //remover a cabe�a, tendo 2 n�s
				if (CABECA == NULL)
				{
					cout << "A lista esta vazia!" << endl;
				}
				else
				{
					CABECA = (*CABECA).proximo;
				}
				cout << "Cabeca removida!" << endl;
				break;

			case 'a': //limpar lista
				//cuidado: este algoritmo funciona mas n�o liberta os n�s
				CABECA = NULL;
				CAUDA = NULL;
				break;
			
			case 'b':
				//primeiro n�:
				novo = (struct listaligada*)malloc(sizeof(struct listaligada));//pedir espa�o		
				CABECA = novo;
				(*novo).numero = 1;
				(*novo).qualquercoisa = 1111;
				(*novo).proximo = NULL;
				//segundo n�:
				novo = (struct listaligada*)malloc(sizeof(struct listaligada));//pedir espa�o		
				(*CABECA).proximo = novo;
				(*novo).numero = 5;
				(*novo).qualquercoisa = 5555;
				(*novo).proximo = NULL;
				//terceiro n�:
				atual = novo; //para atar o �ltimo neste (novo vem de tr�s)
				novo = (struct listaligada*)malloc(sizeof(struct listaligada));//pedir espa�o					
				(*atual).proximo = novo;
				(*novo).numero = 9;
				(*novo).qualquercoisa = 9999;
				(*novo).proximo = NULL;
				//antes de terminar, definir o �ltimo da lista:
				CAUDA = novo;
				cout << "Os 3 nos foram inseridos!" << endl;
				break;

			case 'e': //contar os n�s
				if (CABECA == NULL)
				{
					cout << "A lista esta vazia!" << endl;
				}
				else
				{
					atual = CABECA;
					int contNos = 0;
					cout << "Numero de nos: ";
					while (atual != NULL)
					{
						contNos++;
						atual = (*atual).proximo; //ou atual->proximo;
					}
					cout << contNos << endl;
				}
				break;

			default: 
				if (op != '0')
				{
					cout << "\t\tEscolha invalida!" << endl;
					cout << "\t\t"; system("pause");
					system("cls");
					break;
				}
		}

	} while (op != '0');

	
}