// ficheiros.cpp
// 05/02/2021
#include <locale.h> //acentua��o, usar setlocale
#include <Windows.h> //SetConsoleTitle
#include <fstream>
#include <conio.h> //_getch()
#include <iostream>
#include <string> //getline()
#include <vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Ajuda();
void DesenhaMenu();
void inicializa_ficheiro();
void apagarFicheiro();
bool procurarNome(string nome);
void acrescentarNoFim(string nome);
void substituirNome(string nomeA, string nomeN);
int contarNomes();
void removerNome(string nomeR);
int contarOcorrencia(string nomeParaContar);

int main()
{   
    setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s

    //locale::global(std::locale(""));
    //1252 � o codepage LATIN1 que parece funcionar para n�s (Portugal)
    //1253 Greek, 1255 Hebrew, etc...
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    SetConsoleTitle(TEXT(" - TEXT FILE OPERATIONS - "));

    //locale::global(std::locale("")); //coloca acentua��o
    //setlocale(LC_ALL, ""); //coloca a acentua��o - j� � o suficiente
    
    char op;
    string nome;
    
    do
    {
        DesenhaMenu();
        op = _getch();
        
        switch (op)
        {
            case 'A': case 'a': //(A)crescentar nome no fim
            {
                cout << "\nIntroduza o nome para acrescentar: ";
                getline(cin, nome); //l� nome
                acrescentarNoFim(nome); //uso do append (app)
                cout << nome << " acrescentado/a no fim!\n";
                break; //fim (A)crescentar nome no fim
            }
            
            case 'L': case 'l': //(L)istar ficheiro
            {
                int cont = 0;
                //Declara��o de um apontador para o ficheiro
                ifstream fpl("lista.txt");
                cout << "Conte�do do ficheiro: \n";
                while (getline(fpl, nome)) //Enquanto n�o chegar ao fim do ficheiro
                {
                    cout << nome << "\n";
                    cont++;
                }
                if (cont == 0)
                    cout << "Ficheiro vazio!";
                fpl.close();
            }
                break; //fim (L)istar ficheiro
            
            case 'N': case 'n': //escrever(N)o in�cio do ficheiro
            //s� inclui um nome
            //substitui o nome anterior que est� no ficheiro
            //ler nome ap�s espa�o, a instru��o "cin>>" n�o le ap�s o espa�o
            {
                //cria o ficheiro txt e o 'out' faz a saida do programa e a ida para o ficheiro
                //open j� est� feito aqui
                //fpd � um apontador para o ficheiro txt
                //a matriz � guardada na RAM e o ficheiro no disco
                ofstream fpd("lista.txt",ofstream::out);
                cout << "\nIntroduza um nome: ";
                getline(cin, nome); //l� nome
                fpd << nome; //grava nome no ficheiro
                //A instru��o ofstream criou o endere�o
                //O endere�o fica armazenado no fpd
                //como vejo o endere�o criado? qual a instru�ao? 
                //cout << &fpd;
                fpd.close();
                break; //fim escrever (N)o in�cio do ficheiro
            }
            
            case 'Z': case 'z': //iniciali(Z)ar ficheiro com 16 nomes
                inicializa_ficheiro();
                break; //fim iniciali(Z)ar ficheiro com 16 nomes
            
            case 'D': case 'd': //(D)eletar ficheiro
                apagarFicheiro();
                break; //fim (D)eletar ficheiro

            case 'S': case 's': //(S)ubstituir nome no ficheiro
            {
                bool resultado = false;
                string nomeAtual; //nome que sai 
                string nomeNovo; //nome que entra
                cout << "\nIntroduza o nome atual: ";
                getline(cin, nomeAtual); //l� nome
                cout << "Introduza o novo nome: ";
                getline(cin, nomeNovo); //l� nome
                resultado = procurarNome(nomeAtual);
                if (resultado) //se nomeAtual localizado
                    substituirNome(nomeAtual, nomeNovo);
                else cout << nomeAtual << " n�o localizado!\n";
                break; //fim (S)ubstituir nome no ficheiro
            }

            case 'P': case 'p': //(P)rocurar nome no ficheiro
            {
                bool resultado = false;
                cout << "\nIntroduza o nome para procurar: ";
                getline(cin, nome); //l� nome
                resultado = procurarNome(nome);
                if (resultado)
                    cout << nome << " localizado!\n";
                else
                    cout << nome << " n�o localizado!\n";
                break; //fim (P)rocurar nome no ficheiro
            }

            case 'C': case 'c': //(C)ontar nomes no ficheiro ou (K) op��o do prof.
            {
                int cont = contarNomes();
                cout << "\nO ficheiro tem " << cont << " nomes.\n";
                break;
            }

            case 'R': case 'r': //(R)emover nome do ficheiro
            { // chaveta necess�ria para declarar a vari�vel local nomeParaRemover
                string nomeParaRemover;
                bool resultado = false;
                cout << "\nIntroduza o nome a ser removido: ";
                getline(cin, nomeParaRemover); //l� nome
                resultado = procurarNome(nomeParaRemover);
                if (resultado) //se nomeAtual localizado
                    removerNome(nomeParaRemover);
                else cout << nomeParaRemover << " n�o localizado!\n";
                break; //fim (R)emover nome do ficheiro
            } 
            
            case 'O': case 'o': //contar (O)corr�ncia do nome
            {
                string nomeParaContar; 
                int numOcorrencias;
                bool resultado = false;
                cout << "\nIntroduza o nome a ser contado: ";
                getline(cin, nomeParaContar); //l� nome para contar ocorr�ncias
                resultado = procurarNome(nomeParaContar);
                if (resultado) //se nomeParaRemover localizado
                    numOcorrencias = contarOcorrencia(nomeParaContar);
                else cout << nomeParaContar << " n�o localizado!";
                cout << nomeParaContar << " tem " << numOcorrencias << " ocorr�ncias.\n";
                break; //fim contar (O)corr�ncia do nome
            }

            case 'J': case 'j':
                Ajuda();
                break; //fim a(J)uda

            default:
                if(op != 27)
                    cout << "\nOpcao invalida!\n";
                break;
        }

    } while (op != 27); //Corresponde ao ESC na tabela ASCII
} //fim main()

//--------------------------------------------------------------------
void Ajuda()
{
    cout << "\nEste programa faz as operacoes com ficheiros\n";
    cout << "Desde a criacao ate a exclusao de um ficheiro.\n";
}

void DesenhaMenu()
{
    cout << "\n(A)crescentar nome no fim";
    cout << "\n(L)istar ficheiro";
    cout << "\nescrever no i(N)�cio do ficheiro";
    cout << "\niniciali(Z)ar ficheiro com 16 nomes"; 
    cout << "\n(D)eletar ficheiro";
    cout << "\n(S)ubstituir nome no ficheiro";
    cout << "\n(P)rocurar nome no ficheiro";
    cout << "\n(C)ontar nomes no ficheiro"; // op��o do prof: (K)
    cout << "\n(R)emover nome que est� no ficheiro";
    cout << "\nContar (O)corr�ncia de um nome";
    cout << "\na(J)uda";
    cout << "\nESC-sair\n";
    cout << "\nEscolha uma op��o: ";
}

void inicializa_ficheiro()
{
    ofstream fpd("lista.txt");
    fpd << "Ana Rita Cunha\n";
    fpd << "Bela Costa Silva\n";
    fpd << "Bela Costa Silva\n"; //inclu�do
    fpd << "Carlos Alberto Costa\n";
    fpd << "Carlos Serafim Ferreira\n";
    fpd << "Daniel Bastos Gomes\n";
    fpd << "Bela Costa Silva\n";  //inclu�do
    fpd << "Diogo Silva Ferraz\n";
    fpd << "Elvira Gomes Pendes\n";
    fpd << "Fernanda Maria Silva\n";
    fpd << "Fernando Gomes Barros\n";
    fpd << "Guilherme Alexandre Barros\n";
    fpd << "Hilda Fonseca Silva\n";
    fpd << "Jos� Manuel Carvalho\n";
    fpd << "Jos� Alberto Gomes\n";
    fpd << "Maria Silv�ria Bastos\n";
    fpd << "Anabela Bastos Torres\n";
    fpd << "Teodoro Armando Matos";
    fpd.close();
    cout << "Inicializado!\n";
}

void apagarFicheiro()
{
    if (remove("lista.txt") != 0)
        cout << "N�o existe ficheiro para remover!\n";
    else
        cout << "Ficheiro removido!\n";
}

bool procurarNome(string n)
{
    bool r = false; string nome;
    ifstream fp("lista.txt"); //fp: file pointer
    while (getline(fp, nome)) //Enquanto n�o chegar ao fim do ficheiro
    {
        if (nome == n)
            r = true;
    }
    fp.close();

    return r;
}

void acrescentarNoFim(string nome)
{
    ofstream fp("lista.txt", ofstream::app);
    fp << "\n" << nome;
    fp.close();
}

void substituirNome(string nomeA, string nomeN)
{
    //nomeA: nome atual e nomeN: nome novo
    ifstream fp1_i("lista.txt"); //apontador para ficheiro de entrada - ser�o lido os dados do ficheiro
    ofstream fp2_o("lista2.txt", ofstream::app); //apontador para ficheiro de sa�da - ser�o escritos os dados no ficheiro

    //***** L� os nomes em lista.txt e copia para lista2.txt *********
    string conteudo[50]; int i = 0;
    while (getline(fp1_i, conteudo[i])) 
    {
        if (nomeA == conteudo[i]) //se nome atual for igual ao nome em lista.txt
            fp2_o << nomeN << "\n"; //adiciona o novo nome na posi��o do nome atual em lista2.txt
        else //se nome atual for diferente do nome em lista.txt
            fp2_o << conteudo[i] << "\n"; //copia nome de lista.txt para lista2.txt
        
        i++;
    }
    
    cout << "Nome substitu�do!\n";

    //********* Fechar ficheiros **************
    fp1_i.close(); //fecha lista.txt
    fp2_o.close(); //fecha lista2.txt

    //********* Remover lista.txt ***************************
    remove("lista.txt");

    //********* Renomear lista2.txt para lista.txt ***********
    rename("lista2.txt", "lista.txt");
}

int contarNomes()
{
    string nome;
    int contar = 0;
    ifstream fp1_i("lista.txt"); 
    while (getline(fp1_i, nome))
    {
        contar++;
    }
    fp1_i.close();
    return contar;
}

void removerNome(string nomeExcluir)
{
    ifstream fp1_i("lista.txt"); //apontador para ficheiro de entrada - ser�o lido os dados do ficheiro
    ofstream fp2_o("lista2.txt", ofstream::app); //apontador para ficheiro de sa�da - ser�o escritos os dados no ficheiro

    //***** L� os nomes em lista.txt e "n�o copia o nome que ser� exclu�do" para lista2.txt *********
    string nome; //nome no ficheiro lista.txt
    int i = 0;
    while (getline(fp1_i, nome))
    {
        if (nomeExcluir != nome) //nomeExcluir se for diferente ao nome em lista.txt
            fp2_o << nome << "\n"; //adiciona o novo nome na posi��o do nome atual em lista2.txt
    }

    cout << "Nome exclu�do!\n";

    //********* Fechar ficheiros **************
    fp1_i.close(); //fecha lista.txt
    fp2_o.close(); //fecha lista2.txt

    //********* Remover lista.txt ***************************
    remove("lista.txt");

    //********* Renomear lista2.txt para lista.txt ***********
    rename("lista2.txt", "lista.txt");
}

//contar (O)corr�ncia do nome
int contarOcorrencia(string nomeParaContar)
{
    int contaNome = 0;
    ifstream fp1_i("lista.txt"); //apontador para ficheiro de entrada - ser�o lido os dados do ficheiro

    string nome; //nome no ficheiro lista.txt
    int i = 0;
    while (getline(fp1_i, nome))
    {
        if (nomeParaContar == nome) //nomeParaContar se for igual ao nome em lista.txt
            contaNome++;
    }
    //fechar ifstream
    fp1_i.close();

    return contaNome;
}