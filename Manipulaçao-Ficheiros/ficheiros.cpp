// ficheiros.cpp
// 05/02/2021
#include <locale.h> //acentuação, usar setlocale
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
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    //locale::global(std::locale(""));
    //1252 é o codepage LATIN1 que parece funcionar para nós (Portugal)
    //1253 Greek, 1255 Hebrew, etc...
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    SetConsoleTitle(TEXT(" - TEXT FILE OPERATIONS - "));

    //locale::global(std::locale("")); //coloca acentuação
    //setlocale(LC_ALL, ""); //coloca a acentuação - já é o suficiente
    
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
                getline(cin, nome); //lê nome
                acrescentarNoFim(nome); //uso do append (app)
                cout << nome << " acrescentado/a no fim!\n";
                break; //fim (A)crescentar nome no fim
            }
            
            case 'L': case 'l': //(L)istar ficheiro
            {
                int cont = 0;
                //Declaração de um apontador para o ficheiro
                ifstream fpl("lista.txt");
                cout << "Conteúdo do ficheiro: \n";
                while (getline(fpl, nome)) //Enquanto não chegar ao fim do ficheiro
                {
                    cout << nome << "\n";
                    cont++;
                }
                if (cont == 0)
                    cout << "Ficheiro vazio!";
                fpl.close();
            }
                break; //fim (L)istar ficheiro
            
            case 'N': case 'n': //escrever(N)o início do ficheiro
            //só inclui um nome
            //substitui o nome anterior que está no ficheiro
            //ler nome após espaço, a instrução "cin>>" não le após o espaço
            {
                //cria o ficheiro txt e o 'out' faz a saida do programa e a ida para o ficheiro
                //open já está feito aqui
                //fpd é um apontador para o ficheiro txt
                //a matriz é guardada na RAM e o ficheiro no disco
                ofstream fpd("lista.txt",ofstream::out);
                cout << "\nIntroduza um nome: ";
                getline(cin, nome); //lê nome
                fpd << nome; //grava nome no ficheiro
                //A instrução ofstream criou o endereço
                //O endereço fica armazenado no fpd
                //como vejo o endereço criado? qual a instruçao? 
                //cout << &fpd;
                fpd.close();
                break; //fim escrever (N)o início do ficheiro
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
                getline(cin, nomeAtual); //lê nome
                cout << "Introduza o novo nome: ";
                getline(cin, nomeNovo); //lê nome
                resultado = procurarNome(nomeAtual);
                if (resultado) //se nomeAtual localizado
                    substituirNome(nomeAtual, nomeNovo);
                else cout << nomeAtual << " não localizado!\n";
                break; //fim (S)ubstituir nome no ficheiro
            }

            case 'P': case 'p': //(P)rocurar nome no ficheiro
            {
                bool resultado = false;
                cout << "\nIntroduza o nome para procurar: ";
                getline(cin, nome); //lê nome
                resultado = procurarNome(nome);
                if (resultado)
                    cout << nome << " localizado!\n";
                else
                    cout << nome << " não localizado!\n";
                break; //fim (P)rocurar nome no ficheiro
            }

            case 'C': case 'c': //(C)ontar nomes no ficheiro ou (K) opção do prof.
            {
                int cont = contarNomes();
                cout << "\nO ficheiro tem " << cont << " nomes.\n";
                break;
            }

            case 'R': case 'r': //(R)emover nome do ficheiro
            { // chaveta necessária para declarar a variável local nomeParaRemover
                string nomeParaRemover;
                bool resultado = false;
                cout << "\nIntroduza o nome a ser removido: ";
                getline(cin, nomeParaRemover); //lê nome
                resultado = procurarNome(nomeParaRemover);
                if (resultado) //se nomeAtual localizado
                    removerNome(nomeParaRemover);
                else cout << nomeParaRemover << " não localizado!\n";
                break; //fim (R)emover nome do ficheiro
            } 
            
            case 'O': case 'o': //contar (O)corrência do nome
            {
                string nomeParaContar; 
                int numOcorrencias;
                bool resultado = false;
                cout << "\nIntroduza o nome a ser contado: ";
                getline(cin, nomeParaContar); //lê nome para contar ocorrências
                resultado = procurarNome(nomeParaContar);
                if (resultado) //se nomeParaRemover localizado
                    numOcorrencias = contarOcorrencia(nomeParaContar);
                else cout << nomeParaContar << " não localizado!";
                cout << nomeParaContar << " tem " << numOcorrencias << " ocorrências.\n";
                break; //fim contar (O)corrência do nome
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
    cout << "\nescrever no i(N)ício do ficheiro";
    cout << "\niniciali(Z)ar ficheiro com 16 nomes"; 
    cout << "\n(D)eletar ficheiro";
    cout << "\n(S)ubstituir nome no ficheiro";
    cout << "\n(P)rocurar nome no ficheiro";
    cout << "\n(C)ontar nomes no ficheiro"; // opção do prof: (K)
    cout << "\n(R)emover nome que está no ficheiro";
    cout << "\nContar (O)corrência de um nome";
    cout << "\na(J)uda";
    cout << "\nESC-sair\n";
    cout << "\nEscolha uma opção: ";
}

void inicializa_ficheiro()
{
    ofstream fpd("lista.txt");
    fpd << "Ana Rita Cunha\n";
    fpd << "Bela Costa Silva\n";
    fpd << "Bela Costa Silva\n"; //incluído
    fpd << "Carlos Alberto Costa\n";
    fpd << "Carlos Serafim Ferreira\n";
    fpd << "Daniel Bastos Gomes\n";
    fpd << "Bela Costa Silva\n";  //incluído
    fpd << "Diogo Silva Ferraz\n";
    fpd << "Elvira Gomes Pendes\n";
    fpd << "Fernanda Maria Silva\n";
    fpd << "Fernando Gomes Barros\n";
    fpd << "Guilherme Alexandre Barros\n";
    fpd << "Hilda Fonseca Silva\n";
    fpd << "José Manuel Carvalho\n";
    fpd << "José Alberto Gomes\n";
    fpd << "Maria Silvéria Bastos\n";
    fpd << "Anabela Bastos Torres\n";
    fpd << "Teodoro Armando Matos";
    fpd.close();
    cout << "Inicializado!\n";
}

void apagarFicheiro()
{
    if (remove("lista.txt") != 0)
        cout << "Não existe ficheiro para remover!\n";
    else
        cout << "Ficheiro removido!\n";
}

bool procurarNome(string n)
{
    bool r = false; string nome;
    ifstream fp("lista.txt"); //fp: file pointer
    while (getline(fp, nome)) //Enquanto não chegar ao fim do ficheiro
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
    ifstream fp1_i("lista.txt"); //apontador para ficheiro de entrada - serão lido os dados do ficheiro
    ofstream fp2_o("lista2.txt", ofstream::app); //apontador para ficheiro de saída - serão escritos os dados no ficheiro

    //***** Lê os nomes em lista.txt e copia para lista2.txt *********
    string conteudo[50]; int i = 0;
    while (getline(fp1_i, conteudo[i])) 
    {
        if (nomeA == conteudo[i]) //se nome atual for igual ao nome em lista.txt
            fp2_o << nomeN << "\n"; //adiciona o novo nome na posição do nome atual em lista2.txt
        else //se nome atual for diferente do nome em lista.txt
            fp2_o << conteudo[i] << "\n"; //copia nome de lista.txt para lista2.txt
        
        i++;
    }
    
    cout << "Nome substituído!\n";

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
    ifstream fp1_i("lista.txt"); //apontador para ficheiro de entrada - serão lido os dados do ficheiro
    ofstream fp2_o("lista2.txt", ofstream::app); //apontador para ficheiro de saída - serão escritos os dados no ficheiro

    //***** Lê os nomes em lista.txt e "não copia o nome que será excluído" para lista2.txt *********
    string nome; //nome no ficheiro lista.txt
    int i = 0;
    while (getline(fp1_i, nome))
    {
        if (nomeExcluir != nome) //nomeExcluir se for diferente ao nome em lista.txt
            fp2_o << nome << "\n"; //adiciona o novo nome na posição do nome atual em lista2.txt
    }

    cout << "Nome excluído!\n";

    //********* Fechar ficheiros **************
    fp1_i.close(); //fecha lista.txt
    fp2_o.close(); //fecha lista2.txt

    //********* Remover lista.txt ***************************
    remove("lista.txt");

    //********* Renomear lista2.txt para lista.txt ***********
    rename("lista2.txt", "lista.txt");
}

//contar (O)corrência do nome
int contarOcorrencia(string nomeParaContar)
{
    int contaNome = 0;
    ifstream fp1_i("lista.txt"); //apontador para ficheiro de entrada - serão lido os dados do ficheiro

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