//Aula45.cpp: 06/01/2021
#pragma once

#include <iostream>
using namespace std;
class Aviao
{
	public:
		int velocidade = 0;
		int velocidadeMaxima;
		string tipoAviao;
		Aviao(int tp); //Construtor
		void imprimir(int tp);

};

//Método Construtor
Aviao::Aviao(int tp)
{
	if (tp == 1)
	{
		tipoAviao = "Jato";
		velocidadeMaxima = 800;
	}
	if (tp == 2)
	{
		tipoAviao = "Monomotor";
		velocidadeMaxima = 350;
	}
	if (tp == 3)
	{
		tipoAviao = "Planador";
		velocidadeMaxima = 180;
	}
}

void Aviao::imprimir(int tp)
{
	cout << "Tipo " << tp << "...........: " << tipoAviao << endl;
	cout << "Velocidade maxima: " << velocidadeMaxima << endl;
	cout << "Velocidade atual.: " << velocidade << endl;
	cout << "----------------------------" << endl;
}