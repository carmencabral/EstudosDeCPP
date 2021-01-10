//Carmen Cabral
// aula46.cpp
//Métodos get e set para manipular as propriedades privadas

#include <iostream>
using namespace std;

class Veiculo
{
	public:
		int velocidade;
		int tipo;
		Veiculo(int tp);
		int getVelMax();
		string getNome();
		bool getLigado();
		void setLigado(int lig);
	private:
		string nome;
		int velocidadeMaxima;
		bool ligado;
		void setVelMax(int vm);
		void setNome(string n);
};

//----------Métodos get() e set() LIGADO----------------
bool Veiculo::getLigado()
{
	return ligado;
}

void Veiculo::setLigado(int lig)
{
	if (lig == 1)
		ligado = true;
	if (lig == 0)
		ligado = false;
}

//----------Métodos get() e set() NOME----------------
string Veiculo::getNome()
{
	return nome;
}

void Veiculo::setNome(string n)
{
	nome = n;
}

//----------Métodos get() e set() VEL.MÁX.---------------
int Veiculo::getVelMax()
{
	return velocidadeMaxima;
}

void Veiculo::setVelMax(int vm)
{
	velocidadeMaxima = vm;
}

//MÉTODO CONSTRUTOR
//Chamado quando instancia um objeto da classe
Veiculo::Veiculo(int tp)
{
	if (tp == 1)
	{
		setNome("Carro");
		setVelMax(200);
	}
	if (tp == 2)
	{
		setNome("Aviao");
		setVelMax(800);
	}
	if (tp == 3)
	{
		setNome("Navio");
		setVelMax(120);
	}

	setLigado(0); // o mesmo que: ligado = false;
}