// Carmen Cabral
// aula44.cpp - 05/01/2021
// POO; classe; public

#include <iostream>
using namespace std;

class Aviao 
{
	public:
		int velocidade = 0;
		int velocidadeMaxima;
		string tipoAviao;
		void inicializaAviao(int tp);
};

void Aviao::inicializaAviao(int tp)
{
	/*1:jato; 2:monomotor; 3:planador*/
	if (tp == 1)
	{
		this->velocidadeMaxima = 800;
		this->tipoAviao = "Jato";
	}
	if (tp == 2)
	{
		this->velocidadeMaxima = 350;
		this->tipoAviao = "Monomotor";
	}
	if (tp == 3)
	{
		this->velocidadeMaxima = 400;
		this->tipoAviao = "Planador";
	}

}

int main()
{
	Aviao *av1 = new Aviao();
	Aviao* av2 = new Aviao();
	Aviao* av3 = new Aviao();

	int tp1 = 1;
	int tp2 = 2;
	int tp3 = 3;

	cout << "Velocidade inicial = " << av1->velocidade << endl;
	
	av1->inicializaAviao(tp1);
	cout << "Aviao:  " << tp1 <<" " << av1->tipoAviao << "  Veloc.Max.: " << av1->velocidadeMaxima << endl;
	
	av2->inicializaAviao(tp2);
	cout << "Aviao:  " << tp2 << " " << av2->tipoAviao << "  Veloc.Max.: " << av2->velocidadeMaxima << endl;
	
	av3->inicializaAviao(tp3);
	cout << "Aviao:  " << tp3 << " " << av3->tipoAviao << "  Veloc.Max.: " << av3->velocidadeMaxima << endl;
}