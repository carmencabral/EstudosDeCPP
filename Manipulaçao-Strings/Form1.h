#pragma once

namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			InicializarClubes(); //Inicializa com 32 clubes
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ sortearJOGOSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fabricarRESULTADOSToolStripMenuItem;
	private: System::Windows::Forms::ListBox^ lstMostraClubes;

	private: System::Windows::Forms::ListBox^ lstAuxiliar;
	private: System::Windows::Forms::ListBox^ lstJogosResultados;
	private: System::Windows::Forms::Button^ btnClubeExisteListaClubes;
	private: System::Windows::Forms::TextBox^ txtClubeParaLocalizar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnClubeExisteListaJogos;
	private: System::Windows::Forms::ToolStripMenuItem^ limparTextBoxToolStripMenuItem;
	private: System::Windows::Forms::Button^ btnContaClube;
	private: System::Windows::Forms::Button^ btnPosicaoClube;
	private: System::Windows::Forms::Button^ btnClubeAdversario;
	private: System::Windows::Forms::Button^ btnContaClubesLetra;
	private: System::Windows::Forms::Button^ btnContaGolos;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->sortearJOGOSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fabricarRESULTADOSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->limparTextBoxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lstMostraClubes = (gcnew System::Windows::Forms::ListBox());
			this->lstAuxiliar = (gcnew System::Windows::Forms::ListBox());
			this->lstJogosResultados = (gcnew System::Windows::Forms::ListBox());
			this->btnClubeExisteListaClubes = (gcnew System::Windows::Forms::Button());
			this->txtClubeParaLocalizar = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnClubeExisteListaJogos = (gcnew System::Windows::Forms::Button());
			this->btnContaClube = (gcnew System::Windows::Forms::Button());
			this->btnPosicaoClube = (gcnew System::Windows::Forms::Button());
			this->btnClubeAdversario = (gcnew System::Windows::Forms::Button());
			this->btnContaClubesLetra = (gcnew System::Windows::Forms::Button());
			this->btnContaGolos = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->sortearJOGOSToolStripMenuItem,
					this->fabricarRESULTADOSToolStripMenuItem, this->limparTextBoxToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(857, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// sortearJOGOSToolStripMenuItem
			// 
			this->sortearJOGOSToolStripMenuItem->Name = L"sortearJOGOSToolStripMenuItem";
			this->sortearJOGOSToolStripMenuItem->Size = System::Drawing::Size(124, 21);
			this->sortearJOGOSToolStripMenuItem->Text = L"[ Sortear JOGOS ]";
			this->sortearJOGOSToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sortearJOGOSToolStripMenuItem_Click);
			// 
			// fabricarRESULTADOSToolStripMenuItem
			// 
			this->fabricarRESULTADOSToolStripMenuItem->Name = L"fabricarRESULTADOSToolStripMenuItem";
			this->fabricarRESULTADOSToolStripMenuItem->Size = System::Drawing::Size(159, 21);
			this->fabricarRESULTADOSToolStripMenuItem->Text = L"[Fabricar RESULTADOS ]";
			this->fabricarRESULTADOSToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::fabricarRESULTADOSToolStripMenuItem_Click);
			// 
			// limparTextBoxToolStripMenuItem
			// 
			this->limparTextBoxToolStripMenuItem->Name = L"limparTextBoxToolStripMenuItem";
			this->limparTextBoxToolStripMenuItem->Size = System::Drawing::Size(116, 21);
			this->limparTextBoxToolStripMenuItem->Text = L"[Limpar TextBox]";
			this->limparTextBoxToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::limparTextBoxToolStripMenuItem_Click);
			// 
			// lstMostraClubes
			// 
			this->lstMostraClubes->FormattingEnabled = true;
			this->lstMostraClubes->Location = System::Drawing::Point(10, 28);
			this->lstMostraClubes->Name = L"lstMostraClubes";
			this->lstMostraClubes->Size = System::Drawing::Size(120, 420);
			this->lstMostraClubes->TabIndex = 1;
			// 
			// lstAuxiliar
			// 
			this->lstAuxiliar->FormattingEnabled = true;
			this->lstAuxiliar->Location = System::Drawing::Point(859, 28);
			this->lstAuxiliar->Name = L"lstAuxiliar";
			this->lstAuxiliar->Size = System::Drawing::Size(85, 420);
			this->lstAuxiliar->TabIndex = 2;
			this->lstAuxiliar->Visible = false;
			// 
			// lstJogosResultados
			// 
			this->lstJogosResultados->FormattingEnabled = true;
			this->lstJogosResultados->Location = System::Drawing::Point(138, 28);
			this->lstJogosResultados->Name = L"lstJogosResultados";
			this->lstJogosResultados->Size = System::Drawing::Size(228, 225);
			this->lstJogosResultados->TabIndex = 3;
			// 
			// btnClubeExisteListaClubes
			// 
			this->btnClubeExisteListaClubes->Location = System::Drawing::Point(6, 52);
			this->btnClubeExisteListaClubes->Name = L"btnClubeExisteListaClubes";
			this->btnClubeExisteListaClubes->Size = System::Drawing::Size(219, 23);
			this->btnClubeExisteListaClubes->TabIndex = 4;
			this->btnClubeExisteListaClubes->Text = L"1-Clube existe na lista de clubes\?";
			this->btnClubeExisteListaClubes->UseVisualStyleBackColor = true;
			this->btnClubeExisteListaClubes->Click += gcnew System::EventHandler(this, &Form1::btnClubeExisteListaClubes_Click);
			// 
			// txtClubeParaLocalizar
			// 
			this->txtClubeParaLocalizar->Location = System::Drawing::Point(6, 26);
			this->txtClubeParaLocalizar->Name = L"txtClubeParaLocalizar";
			this->txtClubeParaLocalizar->Size = System::Drawing::Size(216, 20);
			this->txtClubeParaLocalizar->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Clube a ser localizado:";
			// 
			// btnClubeExisteListaJogos
			// 
			this->btnClubeExisteListaJogos->Location = System::Drawing::Point(6, 81);
			this->btnClubeExisteListaJogos->Name = L"btnClubeExisteListaJogos";
			this->btnClubeExisteListaJogos->Size = System::Drawing::Size(219, 23);
			this->btnClubeExisteListaJogos->TabIndex = 7;
			this->btnClubeExisteListaJogos->Text = L"2-Clube existe na lista de jogos\?";
			this->btnClubeExisteListaJogos->UseVisualStyleBackColor = true;
			this->btnClubeExisteListaJogos->Click += gcnew System::EventHandler(this, &Form1::btnClubeExisteListaJogos_Click);
			// 
			// btnContaClube
			// 
			this->btnContaClube->Location = System::Drawing::Point(6, 110);
			this->btnContaClube->Name = L"btnContaClube";
			this->btnContaClube->Size = System::Drawing::Size(219, 35);
			this->btnContaClube->TabIndex = 8;
			this->btnContaClube->Text = L"3-Clube aparece mais que 1x na lista de clubes\?";
			this->btnContaClube->UseVisualStyleBackColor = true;
			this->btnContaClube->Click += gcnew System::EventHandler(this, &Form1::btnContaClube_Click);
			// 
			// btnPosicaoClube
			// 
			this->btnPosicaoClube->Location = System::Drawing::Point(6, 151);
			this->btnPosicaoClube->Name = L"btnPosicaoClube";
			this->btnPosicaoClube->Size = System::Drawing::Size(219, 36);
			this->btnPosicaoClube->TabIndex = 9;
			this->btnPosicaoClube->Text = L"4-Clube está em qual posição na lista de clubes\?";
			this->btnPosicaoClube->UseVisualStyleBackColor = true;
			this->btnPosicaoClube->Click += gcnew System::EventHandler(this, &Form1::btnPosicaoClube_Click);
			// 
			// btnClubeAdversario
			// 
			this->btnClubeAdversario->Location = System::Drawing::Point(6, 193);
			this->btnClubeAdversario->Name = L"btnClubeAdversario";
			this->btnClubeAdversario->Size = System::Drawing::Size(219, 28);
			this->btnClubeAdversario->TabIndex = 10;
			this->btnClubeAdversario->Text = L"5-Com quem jogou este Clube\?";
			this->btnClubeAdversario->UseVisualStyleBackColor = true;
			this->btnClubeAdversario->Click += gcnew System::EventHandler(this, &Form1::btnClubeAdversario_Click);
			// 
			// btnContaClubesLetra
			// 
			this->btnContaClubesLetra->Location = System::Drawing::Point(6, 227);
			this->btnContaClubesLetra->Name = L"btnContaClubesLetra";
			this->btnContaClubesLetra->Size = System::Drawing::Size(219, 34);
			this->btnContaClubesLetra->TabIndex = 11;
			this->btnContaClubesLetra->Text = L"6-Quantos clubes contêm a letra \"F\" no nome\?";
			this->btnContaClubesLetra->UseVisualStyleBackColor = true;
			this->btnContaClubesLetra->Click += gcnew System::EventHandler(this, &Form1::btnContaClubesLetra_Click);
			// 
			// btnContaGolos
			// 
			this->btnContaGolos->Location = System::Drawing::Point(6, 267);
			this->btnContaGolos->Name = L"btnContaGolos";
			this->btnContaGolos->Size = System::Drawing::Size(219, 30);
			this->btnContaGolos->TabIndex = 12;
			this->btnContaGolos->Text = L"7-Quantos golos marcou o clube\?";
			this->btnContaGolos->UseVisualStyleBackColor = true;
			this->btnContaGolos->Click += gcnew System::EventHandler(this, &Form1::btnContaGolos_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnClubeExisteListaClubes);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnContaGolos);
			this->panel1->Controls->Add(this->txtClubeParaLocalizar);
			this->panel1->Controls->Add(this->btnClubeExisteListaJogos);
			this->panel1->Controls->Add(this->btnContaClubesLetra);
			this->panel1->Controls->Add(this->btnContaClube);
			this->panel1->Controls->Add(this->btnClubeAdversario);
			this->panel1->Controls->Add(this->btnPosicaoClube);
			this->panel1->Location = System::Drawing::Point(625, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(228, 420);
			this->panel1->TabIndex = 13;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(372, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(247, 420);
			this->panel2->TabIndex = 14;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(857, 452);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lstJogosResultados);
			this->Controls->Add(this->lstAuxiliar);
			this->Controls->Add(this->lstMostraClubes);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Form1";
			this->Text = L"Taça de Portugal 2021";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}

private: System::Void limparTextBoxToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	txtClubeParaLocalizar->Text = "";
}//***********************fim menu limpar***********************************

private: System::Void sortearJOGOSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	fabricarRESULTADOSToolStripMenuItem->Enabled = true;

	lstJogosResultados->Items->Clear();
	lstAuxiliar->Items->Clear();
	lstAuxiliar->Items->AddRange(lstMostraClubes->Items);
	if (lstAuxiliar->Items->Count == 32)
	{
		try
		{
			Random^ r = gcnew Random();
			int p;
			int num_equipas = lstAuxiliar->Items->Count;
			String^ equipa_esquerda;
			String^ equipa_direita;
			String^ jogo;

			for (size_t i = 1; i <= 16; i++)
			{
				//tratar da primeira equipa do jogo:
				p = r->Next(0, lstAuxiliar->Items->Count);
				equipa_esquerda = lstAuxiliar->Items[p]->ToString();
				lstAuxiliar->Items->Remove(equipa_esquerda);

				//tratar da segunda equipa do jogo:
				p = r->Next(0, lstAuxiliar->Items->Count);
				equipa_direita = lstAuxiliar->Items[p]->ToString();
				lstAuxiliar->Items->Remove(equipa_direita);

				//construir a string jogo -> 2 equipas sorteadas + intercalar o "-":
				jogo = equipa_esquerda + " - " + equipa_direita;
				lstJogosResultados->Items->Add(jogo);
			}
		}
		catch (...)
		{

		}
	} //fim if (lstAuxiliar->Items->Count == 32)
} //****************************************fim menu Sortear Jogos*********************************************

private: System::Void fabricarRESULTADOSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	fabricarRESULTADOSToolStripMenuItem->Enabled = false;

	if (lstJogosResultados->Items->Count == 16 && lstAuxiliar->Items->Count == 0)
	{
		try
		{
			// MÉTODO:
			// jogo: string composta por dois clubes, resultado e "-"; ex: "Fafe 1 - Braga 0"
			// fazer: retirar cada jogo da listbox; gerar o resultado e
			// reenviar o jogo para a listbox

			//variáveis locais:
			Random^ r = gcnew Random();
			String^ jogo;
			String^ equipa_esquerda;
			String^ equipa_direita;
			int n_golos1, n_golos2;
			int posicao_do_traco;
			int comprimento_string;

			for (size_t i = 0; i <= 15; i++)//porque são 16 jogos
			{
				n_golos1 = r->Next(0, 5); //máximo 4 golos...

				do {
					n_golos2 = r->Next(0, 5);
				} while (n_golos1 == n_golos2);//obriga a número != do anterior

				jogo = lstJogosResultados->Items[i]->ToString();//get jogo, ainda sem os golos

				posicao_do_traco = jogo->IndexOf("-"); //em que posição ocorre o traço?
				equipa_esquerda = jogo->Substring(0, posicao_do_traco);

				comprimento_string = jogo->Length;
				equipa_direita = jogo->Substring(posicao_do_traco + 2, comprimento_string - posicao_do_traco - 2);

				jogo = equipa_esquerda + " " + n_golos1.ToString() + " - " + n_golos2.ToString() + " " + equipa_direita;

				lstJogosResultados->Items[i] = jogo; //put jogo, agora com resultado
			} //fim for
		} //fim try
		catch (...)
		{

		}
	} //fim if (lstJogosResultados->Items->Count == 16 && lstAuxiliar->Items->Count == 0)
} //************************fim menu Fabricar Resultados******************************************

private: System::Void btnClubeExisteListaClubes_Click(System::Object^ sender, System::EventArgs^ e)
{
	//1-Clube existe na lista de clubes?
	//Localizar clube (txtClubeParaLocalizar) na lista de clubes (lstMostraClubes)
	String^ tClube = txtClubeParaLocalizar->Text; //clube da textBox
	//Alterar label
	label1->Text = "Clube a ser localizado:";
	if (LocalizaClube(tClube))
		txtClubeParaLocalizar->Text = tClube + ": localizado!";
	else
		txtClubeParaLocalizar->Text = tClube + ": não localizado!";

} //************************fim método btnClubeExisteListaClubes_Click()*********************************

private: System::Void btnClubeExisteListaJogos_Click(System::Object^ sender, System::EventArgs^ e)
{
	//2-Clube existe na lista de jogos?
	//Localizar clube (txtClubeParaLocalizar) na lista de jogos (lstJogosResultados)
	String^ subs = txtClubeParaLocalizar->Text;
	//Alterar label
	label1->Text = "Clube a ser localizado:";
	if (LocalizaSubstring(subs) > -1 && LocalizaClube(subs)) //substring localizada na lista jogos e na lista clubes
	{
		txtClubeParaLocalizar->Text = subs + ": localizado!";
	}
	else
		if (LocalizaSubstring(subs) > -1 && LocalizaClube(subs) == false) //substring localizada na lista jogos e não localizada na lista clubes
		{
			txtClubeParaLocalizar->Text = subs + ": não localizado!";
		}

	if (LocalizaSubstring(subs) == -1) //substring não localizada na lista jogos
		txtClubeParaLocalizar->Text = subs + ": não localizado!";
}//*******************fim método btnClubeExisteListaJogos_Click()*********************************

private: System::Void btnContaClube_Click(System::Object^ sender, System::EventArgs^ e)
{
	//3-Clube aparece mais que 1x na lista de clubes?
	//Localizar clube (txtClubeParaLocalizar) na lista de clubes (lstMostraClubes)
	//Se clube for localizado, contar
	String^ clube = txtClubeParaLocalizar->Text;
	//Alterar label
	label1->Text = "Clube a ser localizado:";
	if (LocalizaClube(clube))
	{
		if (ContaClube(clube) > 1)
			txtClubeParaLocalizar->Text = clube + " : Sim, aparece " + ContaClube(clube) + " vezes!"; //aparece mais que 1x
		else
			txtClubeParaLocalizar->Text = clube + ": Não, aparece " + ContaClube(clube) + " vez!"; //não aparece mais que 1x
	}
	else
		txtClubeParaLocalizar->Text = clube + ": não localizado!";
}//****************************fim método btnContaClube_Click() *******************************


private: System::Void btnPosicaoClube_Click(System::Object^ sender, System::EventArgs^ e)
{
	//4-Clube está em qual posição na lista de clubes?
	String^ clube = txtClubeParaLocalizar->Text;
	//Alterar label
	label1->Text = "Clube a ser localizado:";
	if (LocalizaClube(clube))
	{
		txtClubeParaLocalizar->Text = clube + " está na " + PosicaoClube(clube) + "ª " + "posição!";
	}
	else
		txtClubeParaLocalizar->Text = clube + ": não localizado!";
}//*******************fim btnPosicaoClube_Click() **************************************

private: System::Void btnClubeAdversario_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//5-Com quem jogou este Clube? (Adversário)
	String^ tClube = txtClubeParaLocalizar->Text; //clube que está na textBox
	String^ jogo; //jogo: clubes que estão na lstJogosResultados
	String^ clube1; //clube da esquerda
	String^ clube2; //clube da direita
	bool localizado = false;
	int pos = 0;
	//Alterar label
	label1->Text = "Clube a ser localizado:";
	if (LocalizaSubstring(tClube) > -1 && LocalizaClube(tClube))
		localizado = true;

		if (localizado)
		{
			jogo = lstJogosResultados->Items[LocalizaSubstring(tClube)]->ToString();
			
			int tamanho = jogo->Length;
			if (PosicaoGols(jogo) == -1) //Só os jogos foram gerados, sem os gols
			{
				clube1 = jogo->Substring(0, PosicaoTraco(jogo));
				clube2 = jogo->Substring(PosicaoTraco(jogo) + 1);
			}
			else //Foram gerados os resultados com os gols
				if (PosicaoGols(jogo) > -1)
				{
					//com os pontos:
					clube1 = jogo->Substring(0, PosicaoTraco(jogo));
					clube2 = jogo->Substring(PosicaoTraco(jogo) + 2, tamanho - PosicaoTraco(jogo) - 2);
					
					//sem os pontos:
					clube1 = clube1->Substring(0, clube1->Length - 2);
					clube2 = clube2->Substring(2, clube2->Length - 2);
				}

			txtClubeParaLocalizar->Text = clube1 + "jogou com " + clube2;
			
		} //fim if(localizado)
		else 
			txtClubeParaLocalizar->Text = tClube + ": não localizado!";

}//**************fim btnClubeAdversario_Click***************************************

private: System::Void btnContaClubesLetra_Click(System::Object^ sender, System::EventArgs^ e)
{
	//6-Quantas equipas contêm a letra "F" no seu nome?
	int nClubes = lstMostraClubes->Items->Count-1; //quantidade de clubes
	String^ clube;
	String^ letra;
	int contaClubes = 0;
	bool letraLocalizada = false; 
	//Alterar label
	label1->Text = "Quantidade de clubes com a letra F:";
	for (int i = 0; i < nClubes; i++) //clube
	{
		clube = lstMostraClubes->Items[i]->ToString();
		int tamClube = clube->Length;
		for (int j = 0; j < tamClube; j++) //letras de cada clube
		{
			letra = Convert::ToString(clube[j]);
			if (letra == "f" || letra == "F")
			{
				letraLocalizada = true;
				j = tamClube;
			}
			else letraLocalizada = false;

		} //fim for letras do clube
		
		if (letraLocalizada)
			contaClubes++;
	}//fim for clubes
	txtClubeParaLocalizar->Text = Convert::ToString(contaClubes);

} //********************************** fim btnContaClubesLetra_Click ******************************


private: System::Void btnContaGolos_Click(System::Object^ sender, System::EventArgs^ e)
{
	//7-Quantos golos marcou o clube?
	//Alterar label
	label1->Text = "Quantidade de golos do clube:";
	String^ jogo;
	String^ clube = txtClubeParaLocalizar->Text;
	String^ clube1ComPonto; String^ clube2ComPonto;
	String^ clube1SemPonto; String^ clube2SemPonto;
	String^ clubeResultado;
	bool localizado = false;
	int golsClube1; int golsClube2;
	int tamanho = lstJogosResultados->Items->Count;
	if (LocalizaSubstring(clube) > -1 && LocalizaClube(clube))
		localizado = true;

	if (localizado)
	{
		jogo = lstJogosResultados->Items[LocalizaSubstring(clube)]->ToString();

		int tamanho = jogo->Length;
		if (PosicaoGols(jogo) == -1) //Só os jogos foram gerados, sem os gols
		{
			txtClubeParaLocalizar->Text = "Vá ao menu Gerar Resultados!";
		}
		else //Foram gerados os resultados com os gols
			if (PosicaoGols(jogo) > -1)
			{
				//com os pontos:
				clube1ComPonto = jogo->Substring(0, PosicaoTraco(jogo)); //Ex. Porto 1
				clube2ComPonto = jogo->Substring(PosicaoTraco(jogo) + 2, tamanho - PosicaoTraco(jogo) - 2); //Ex. 2 Braga

				//sem os pontos:
				clube1SemPonto = clube1ComPonto->Substring(0, clube1ComPonto->Length - 2);
				clube2SemPonto = clube2ComPonto->Substring(2, clube2ComPonto->Length - 2);

				if (clube == clube2SemPonto)
				{
					clubeResultado = clube + " fez " + clube2ComPonto->Substring(0,2) + "gol(s)!";
				}
				else
				{
					int tamC1 = clube1ComPonto->Length;
					clubeResultado = clube + " fez " + clube1ComPonto->Substring(tamC1-2,2) + "gol(s)!";
				}
			txtClubeParaLocalizar->Text = clubeResultado;
			}

	} //fim if(localizado)
	else
		txtClubeParaLocalizar->Text = clube + ": não localizado!";
	
}//******************************** fim btnContaGolos_Click() ***************************************

//************************************* MINHAS FUNÇÕES *************************************************************
void InicializarClubes()
{
	lstMostraClubes->Items->Clear();
	lstMostraClubes->Items->Add("Porto");
	lstMostraClubes->Items->Add("Estoril");
	lstMostraClubes->Items->Add("Braga");
	lstMostraClubes->Items->Add("Sporting");
	lstMostraClubes->Items->Add("Benfica");
	lstMostraClubes->Items->Add("Santa Clara");
	lstMostraClubes->Items->Add("Feirense");
	lstMostraClubes->Items->Add("Boavista");
	lstMostraClubes->Items->Add("Paços de Ferreira");
	lstMostraClubes->Items->Add("Moreirense");
	lstMostraClubes->Items->Add("Belenenses");
	lstMostraClubes->Items->Add("Tondela");
	lstMostraClubes->Items->Add("Académica");
	lstMostraClubes->Items->Add("Varzim");
	lstMostraClubes->Items->Add("Vizela");
	lstMostraClubes->Items->Add("Farense");
	lstMostraClubes->Items->Add("Freamunde");
	lstMostraClubes->Items->Add("Aves");
	lstMostraClubes->Items->Add("Olhanense");
	lstMostraClubes->Items->Add("União da Madeira");
	lstMostraClubes->Items->Add("Beira Mar");
	lstMostraClubes->Items->Add("Académico de Viseu");
	lstMostraClubes->Items->Add("Fafe");
	lstMostraClubes->Items->Add("Covilhã");
	lstMostraClubes->Items->Add("Portimonense");
	lstMostraClubes->Items->Add("Salgueiros");
	lstMostraClubes->Items->Add("Oriental");
	lstMostraClubes->Items->Add("Atlético");
	lstMostraClubes->Items->Add("Barreirense");
	lstMostraClubes->Items->Add("Arsenal da Devesa");
	lstMostraClubes->Items->Add("Vianense");
	lstMostraClubes->Items->Add("Cabeça Gorda");

	lstAuxiliar->Items->AddRange(lstMostraClubes->Items);//lstAuxiliar é usado nos algoritmos e está oculta;
} //fim InicilizarClubes()

//********** Função LocalizaClube() na lista de Clubes ***********
bool LocalizaClube(String^ clube)
{
	//localiza clube na lstMostraClubes
	String^ tClube = txtClubeParaLocalizar->Text; //clube da textBox
	String^ lClube; //clube da lista de clubes
	int tamanho = lstMostraClubes->Items->Count; //quantidade de clubes na lista de clubes
	bool resultado = false;

	for (int i = 0; i < tamanho; i++)
	{
		lClube = lstMostraClubes->Items[i]->ToString();
		if (tClube == lClube)
			resultado = true;
	} //fim for

	return resultado;
} //*******************fim LocalizaClube()************************

//********** Função LocalizaSubstring() na lista de Jogos *********
int LocalizaSubstring(String^ subS)
{
	//retorna true se a substring for localizada
	//retorna posição do jogo com a substring

	int tamanho = lstJogosResultados->Items->Count;
	String^ jogo;
	int resultado = -1; //não localizada

	for (int i = 0; i < tamanho; i++)
	{
		jogo = lstJogosResultados->Items[i]->ToString();
		if (jogo->Contains(subS))
			resultado = i;
	}

	return resultado;
} //******************fim LocalizaSubstring()******************

//********************ContaClube(clube)************************
int ContaClube(String^ clube)
{
	//clube: clube na textbox (txtClubeParaLocalizar)

	String^ clubeLista; //clube na lstMostraClubes
	int conta = 0;
	int tamanho = lstMostraClubes->Items->Count;
	for (int i = 0; i < tamanho; i++)
	{
		clubeLista = lstMostraClubes->Items[i]->ToString();
		if (clube == clubeLista)
		{
			conta++;
		}
	}

	return conta;
} //*****************fim ContaClube(clube)*********************

//*********** PosicaoClube() na lista de clubes ****************************
int PosicaoClube(String^ clube)
{
	//localiza a posição do clube que está na textBox na lstMostraClubes
	int tamanho = lstMostraClubes->Items->Count;
	int pos = 0;
	String^ clubeLista;
	for (int i = 0; i < tamanho; i++)
	{
		clubeLista = lstMostraClubes->Items[i]->ToString();
		if (clube == clubeLista) // clube: clube que está na textBox txtClubeParaLocalizar
		{
			pos = i + 1;
		}
	}
	return pos;
} //*******************fim PosicaoClube() ***************************

//**************** PosicaoTraco *********************
int PosicaoTraco(String^ jogo)
{
	//jogo: clubes que estão na lstJogosResultados
	int posicao;
	posicao = jogo->IndexOf("-");

	return posicao;
}
//**********fim PosicaoTraco*************************

//******************* PosicaoGols *******************
int PosicaoGols(String^ jogo) //do primeiro clube
{
	//jogo: clubes que estão na lstJogosResultados
	int posicao = -1; //Se estiver na opção gerar só os jogos, sem os resultados
	//número de gols: 0 a 4
	if (jogo->Contains("0"))
		posicao = jogo->IndexOf("0");
	if (jogo->Contains("1"))
		posicao = jogo->IndexOf("1");
	if (jogo->Contains("2"))
		posicao = jogo->IndexOf("2");
	if (jogo->Contains("3"))
		posicao = jogo->IndexOf("3");
	if (jogo->Contains("4"))
		posicao = jogo->IndexOf("4");

	return posicao;
}
//*********** fim PosicaoGols ************************

//********************************* FIM MINHAS FUNÇÕES ********************************************************


};
}