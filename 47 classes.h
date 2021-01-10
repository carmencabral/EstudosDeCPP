#pragma once
//aula 47

#include <iostream>
using namespace std;

class Veiculo
{
	public:
		string nome;
		int velocidade;
		int blindagem;
		int rodas;
		void setTipo(int tp);
		void setVelMax(int vm);
		void setArma(bool ar);
		void imprimir();
	private:
		int tipo; //1:moto;2:carro;3:tanque
		int velocidadeMaxima;
		bool arma;
};

void Veiculo::imprimir()
{
	cout << "Tipo Veiculo: " << tipo << endl;
	cout << "Veiculo: " << nome << endl;
	cout << "Numero Rodas: " << rodas << endl;
	cout << "Velocidade Maxima: " << velocidadeMaxima << endl;
	cout << "Blindagem: " << blindagem << endl;
	cout << "Armamento: " << arma << endl;
	cout << "----------------------" << endl;
};

void Veiculo::setTipo(int tp)
{
	tipo = tp;
};
void Veiculo::setVelMax(int vm)
{
	velocidadeMaxima = vm;
};
void Veiculo::setArma(bool ar)
{
	arma = ar;
};

class Moto :public Veiculo
{
	public:
		Moto();
};

//Método Construtor Moto()
//Invocado na iniciliazação do objeto
Moto::Moto()
{
	nome = "Moto";
	velocidade = 0;
	blindagem = 0;
	rodas = 2;
	setTipo(1);
	setVelMax(120);
	setArma(false);
};

class Carro :public Veiculo
{
	public:
		Carro();
};

//Método Construtor Carro()
Carro::Carro()
{
	nome = "Carro";
	velocidade = 0;
	blindagem = 0;
	rodas = 4;
	setTipo(2);
	setVelMax(180);
	setArma(false);
};

class Tanque:public Veiculo
{
public:
	Tanque();
};

//Método Construtor Carro()
Tanque::Tanque()
{
	nome = "Tanque";
	velocidade = 0;
	blindagem = 1;
	rodas = 8;
	setTipo(3);
	setVelMax(200);
	setArma(true);
};