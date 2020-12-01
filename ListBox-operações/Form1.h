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
	private: System::Windows::Forms::TextBox^ txtClube;
	protected:
	private: System::Windows::Forms::Button^ btnLimparLista;
	private: System::Windows::Forms::Button^ btnAdicionarTextNaLista;
	private: System::Windows::Forms::Button^ btnRemoverClubeDaTextNaLista;
	private: System::Windows::Forms::Button^ btnInicializarClubes;
	private: System::Windows::Forms::Button^ btnContarClubes;
	private: System::Windows::Forms::TextBox^ txtQuantidadeClubes;
	private: System::Windows::Forms::Button^ btnEliminar5Pri;
	private: System::Windows::Forms::Button^ btnEliminar5Ult;
	private: System::Windows::Forms::TextBox^ txtClubeParaLocalizar;
	private: System::Windows::Forms::Button^ btnProcurar;
	private: System::Windows::Forms::TextBox^ txtResultadoLocalizacao;
	private: System::Windows::Forms::TextBox^ txtClubeAtual;
	private: System::Windows::Forms::TextBox^ txtClubeNovo;
	private: System::Windows::Forms::Button^ btnSubstituir;
	private: System::Windows::Forms::ListBox^ lstClubes;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtClube = (gcnew System::Windows::Forms::TextBox());
			this->btnLimparLista = (gcnew System::Windows::Forms::Button());
			this->btnAdicionarTextNaLista = (gcnew System::Windows::Forms::Button());
			this->btnRemoverClubeDaTextNaLista = (gcnew System::Windows::Forms::Button());
			this->btnInicializarClubes = (gcnew System::Windows::Forms::Button());
			this->btnContarClubes = (gcnew System::Windows::Forms::Button());
			this->txtQuantidadeClubes = (gcnew System::Windows::Forms::TextBox());
			this->btnEliminar5Pri = (gcnew System::Windows::Forms::Button());
			this->btnEliminar5Ult = (gcnew System::Windows::Forms::Button());
			this->txtClubeParaLocalizar = (gcnew System::Windows::Forms::TextBox());
			this->btnProcurar = (gcnew System::Windows::Forms::Button());
			this->txtResultadoLocalizacao = (gcnew System::Windows::Forms::TextBox());
			this->txtClubeAtual = (gcnew System::Windows::Forms::TextBox());
			this->txtClubeNovo = (gcnew System::Windows::Forms::TextBox());
			this->btnSubstituir = (gcnew System::Windows::Forms::Button());
			this->lstClubes = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// txtClube
			// 
			this->txtClube->Location = System::Drawing::Point(12, 12);
			this->txtClube->Name = L"txtClube";
			this->txtClube->Size = System::Drawing::Size(243, 20);
			this->txtClube->TabIndex = 0;
			// 
			// btnLimparLista
			// 
			this->btnLimparLista->Location = System::Drawing::Point(12, 38);
			this->btnLimparLista->Name = L"btnLimparLista";
			this->btnLimparLista->Size = System::Drawing::Size(243, 23);
			this->btnLimparLista->TabIndex = 1;
			this->btnLimparLista->Text = L"Limpar a listBox";
			this->btnLimparLista->UseVisualStyleBackColor = true;
			this->btnLimparLista->Click += gcnew System::EventHandler(this, &Form1::btnLimparLista_Click);
			// 
			// btnAdicionarTextNaLista
			// 
			this->btnAdicionarTextNaLista->Location = System::Drawing::Point(12, 67);
			this->btnAdicionarTextNaLista->Name = L"btnAdicionarTextNaLista";
			this->btnAdicionarTextNaLista->Size = System::Drawing::Size(243, 23);
			this->btnAdicionarTextNaLista->TabIndex = 2;
			this->btnAdicionarTextNaLista->Text = L"Adicionar da text para a listBox";
			this->btnAdicionarTextNaLista->UseVisualStyleBackColor = true;
			this->btnAdicionarTextNaLista->Click += gcnew System::EventHandler(this, &Form1::btnAdicionarTextNaLista_Click);
			// 
			// btnRemoverClubeDaTextNaLista
			// 
			this->btnRemoverClubeDaTextNaLista->Location = System::Drawing::Point(12, 96);
			this->btnRemoverClubeDaTextNaLista->Name = L"btnRemoverClubeDaTextNaLista";
			this->btnRemoverClubeDaTextNaLista->Size = System::Drawing::Size(243, 23);
			this->btnRemoverClubeDaTextNaLista->TabIndex = 3;
			this->btnRemoverClubeDaTextNaLista->Text = L"Remover o clube da lista, que estiver na text";
			this->btnRemoverClubeDaTextNaLista->UseVisualStyleBackColor = true;
			this->btnRemoverClubeDaTextNaLista->Click += gcnew System::EventHandler(this, &Form1::btnRemoverClubeDaTextNaLista_Click);
			// 
			// btnInicializarClubes
			// 
			this->btnInicializarClubes->Location = System::Drawing::Point(12, 125);
			this->btnInicializarClubes->Name = L"btnInicializarClubes";
			this->btnInicializarClubes->Size = System::Drawing::Size(243, 23);
			this->btnInicializarClubes->TabIndex = 4;
			this->btnInicializarClubes->Text = L"Inicializar com vários clubes";
			this->btnInicializarClubes->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnInicializarClubes->UseVisualStyleBackColor = true;
			this->btnInicializarClubes->Click += gcnew System::EventHandler(this, &Form1::btnInicializarClubes_Click);
			// 
			// btnContarClubes
			// 
			this->btnContarClubes->Location = System::Drawing::Point(12, 154);
			this->btnContarClubes->Name = L"btnContarClubes";
			this->btnContarClubes->Size = System::Drawing::Size(148, 23);
			this->btnContarClubes->TabIndex = 5;
			this->btnContarClubes->Text = L"Contagem";
			this->btnContarClubes->UseVisualStyleBackColor = true;
			// 
			// txtQuantidadeClubes
			// 
			this->txtQuantidadeClubes->Location = System::Drawing::Point(166, 157);
			this->txtQuantidadeClubes->Name = L"txtQuantidadeClubes";
			this->txtQuantidadeClubes->Size = System::Drawing::Size(89, 20);
			this->txtQuantidadeClubes->TabIndex = 6;
			// 
			// btnEliminar5Pri
			// 
			this->btnEliminar5Pri->Location = System::Drawing::Point(12, 183);
			this->btnEliminar5Pri->Name = L"btnEliminar5Pri";
			this->btnEliminar5Pri->Size = System::Drawing::Size(243, 23);
			this->btnEliminar5Pri->TabIndex = 7;
			this->btnEliminar5Pri->Text = L"Eliminar os 5 primeiros clubes";
			this->btnEliminar5Pri->UseVisualStyleBackColor = true;
			this->btnEliminar5Pri->Click += gcnew System::EventHandler(this, &Form1::btnEliminar5Pri_Click);
			// 
			// btnEliminar5Ult
			// 
			this->btnEliminar5Ult->Location = System::Drawing::Point(12, 212);
			this->btnEliminar5Ult->Name = L"btnEliminar5Ult";
			this->btnEliminar5Ult->Size = System::Drawing::Size(243, 23);
			this->btnEliminar5Ult->TabIndex = 8;
			this->btnEliminar5Ult->Text = L"Eliminar os 5 últimos (mesmo que tenha menos)";
			this->btnEliminar5Ult->UseVisualStyleBackColor = true;
			this->btnEliminar5Ult->Click += gcnew System::EventHandler(this, &Form1::btnEliminar5Ult_Click);
			// 
			// txtClubeParaLocalizar
			// 
			this->txtClubeParaLocalizar->Location = System::Drawing::Point(12, 256);
			this->txtClubeParaLocalizar->Name = L"txtClubeParaLocalizar";
			this->txtClubeParaLocalizar->Size = System::Drawing::Size(63, 20);
			this->txtClubeParaLocalizar->TabIndex = 9;
			// 
			// btnProcurar
			// 
			this->btnProcurar->Location = System::Drawing::Point(85, 254);
			this->btnProcurar->Name = L"btnProcurar";
			this->btnProcurar->Size = System::Drawing::Size(86, 23);
			this->btnProcurar->TabIndex = 10;
			this->btnProcurar->Text = L"Existe na lista\?";
			this->btnProcurar->UseVisualStyleBackColor = true;
			this->btnProcurar->Click += gcnew System::EventHandler(this, &Form1::btnProcurar_Click);
			// 
			// txtResultadoLocalizacao
			// 
			this->txtResultadoLocalizacao->Location = System::Drawing::Point(177, 257);
			this->txtResultadoLocalizacao->Name = L"txtResultadoLocalizacao";
			this->txtResultadoLocalizacao->Size = System::Drawing::Size(78, 20);
			this->txtResultadoLocalizacao->TabIndex = 11;
			// 
			// txtClubeAtual
			// 
			this->txtClubeAtual->Location = System::Drawing::Point(12, 305);
			this->txtClubeAtual->Name = L"txtClubeAtual";
			this->txtClubeAtual->Size = System::Drawing::Size(100, 20);
			this->txtClubeAtual->TabIndex = 12;
			// 
			// txtClubeNovo
			// 
			this->txtClubeNovo->Location = System::Drawing::Point(12, 331);
			this->txtClubeNovo->Name = L"txtClubeNovo";
			this->txtClubeNovo->Size = System::Drawing::Size(100, 20);
			this->txtClubeNovo->TabIndex = 13;
			// 
			// btnSubstituir
			// 
			this->btnSubstituir->Location = System::Drawing::Point(134, 305);
			this->btnSubstituir->Name = L"btnSubstituir";
			this->btnSubstituir->Size = System::Drawing::Size(121, 46);
			this->btnSubstituir->TabIndex = 14;
			this->btnSubstituir->Text = L"Substitui, se existir";
			this->btnSubstituir->UseVisualStyleBackColor = true;
			this->btnSubstituir->Click += gcnew System::EventHandler(this, &Form1::btnSubstituir_Click);
			// 
			// lstClubes
			// 
			this->lstClubes->FormattingEnabled = true;
			this->lstClubes->Location = System::Drawing::Point(261, 12);
			this->lstClubes->Name = L"lstClubes";
			this->lstClubes->Size = System::Drawing::Size(156, 342);
			this->lstClubes->TabIndex = 15;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 367);
			this->Controls->Add(this->lstClubes);
			this->Controls->Add(this->btnSubstituir);
			this->Controls->Add(this->txtClubeNovo);
			this->Controls->Add(this->txtClubeAtual);
			this->Controls->Add(this->txtResultadoLocalizacao);
			this->Controls->Add(this->btnProcurar);
			this->Controls->Add(this->txtClubeParaLocalizar);
			this->Controls->Add(this->btnEliminar5Ult);
			this->Controls->Add(this->btnEliminar5Pri);
			this->Controls->Add(this->txtQuantidadeClubes);
			this->Controls->Add(this->btnContarClubes);
			this->Controls->Add(this->btnInicializarClubes);
			this->Controls->Add(this->btnRemoverClubeDaTextNaLista);
			this->Controls->Add(this->btnAdicionarTextNaLista);
			this->Controls->Add(this->btnLimparLista);
			this->Controls->Add(this->txtClube);
			this->Name = L"Form1";
			this->Text = L"LISTBOX - operações com";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnInicializarClubes_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//inicializa com 29 equipas
		lstClubes->Items->Add("Porto");
		lstClubes->Items->Add("Estoril");
		lstClubes->Items->Add("Braga");
		lstClubes->Items->Add("Sporting");
		lstClubes->Items->Add("Benfica");
		lstClubes->Items->Add("Santa Clara");
		lstClubes->Items->Add("Feirense");
		lstClubes->Items->Add("Boavista");
		lstClubes->Items->Add("Paços de Ferreira");
		lstClubes->Items->Add("Moreirense");
		lstClubes->Items->Add("Belenenses");
		lstClubes->Items->Add("Tondela");
		lstClubes->Items->Add("Académica");
		lstClubes->Items->Add("Varzim");
		lstClubes->Items->Add("Vizela");
		lstClubes->Items->Add("Farense");
		lstClubes->Items->Add("Freamunde");
		lstClubes->Items->Add("Aves");
		lstClubes->Items->Add("Olhanense");
		lstClubes->Items->Add("União da Madeira");
		lstClubes->Items->Add("Vianense");
		lstClubes->Items->Add("Académico de Viseu");
		lstClubes->Items->Add("Fafe");
		lstClubes->Items->Add("Covilhã");
		lstClubes->Items->Add("Portimonense");
		lstClubes->Items->Add("Salgueiros");
		lstClubes->Items->Add("Oriental");
		lstClubes->Items->Add("Atlético");
		lstClubes->Items->Add("Barreirense");
	}
private: System::Void btnLimparLista_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//LIMPAR LISTA
	lstClubes->Items->Clear();
}

private: System::Void btnAdicionarTextNaLista_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//ADICIONAR TEXTBOX NA LISTA
	String^ nome = txtClube->Text;
	lstClubes->Items->Add(nome);
}

private: System::Void btnRemoverClubeDaTextNaLista_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//REMOVER O CLUBE DA LISTA, QUE ESTIVER NA TEXTBOX
	//Contar clubes
	int nClubes = lstClubes->Items->Count;
	String^ clubeText = txtClube->Text;
	bool clubeLocalizado = false;

	for (int i = 0; i < nClubes; i++)
	{
		if (lstClubes->Items->Contains(clubeText))
		{
			clubeLocalizado = true;
		}
	}
	if (clubeLocalizado)
		lstClubes->Items->Remove(clubeText);
	else MessageBox::Show(clubeText +": não localizado!", "Informação");

}

private: System::Void btnProcurar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//EXISTE NA LISTA?
	//Contar clubes
	int nClubes = lstClubes->Items->Count;
	
	String^ clubeParaLocalizar = txtClubeParaLocalizar->Text;
	String^ resultadoLocalizacao = txtResultadoLocalizacao->Text;

	bool clubeLocalizado = false;

	for (int i = 0; i < nClubes; i++)
	{
		if (lstClubes->Items->Contains(clubeParaLocalizar))
		{
			clubeLocalizado = true;
		}
	}
	if (clubeLocalizado)
		txtResultadoLocalizacao->Text = "Sim";
	else txtResultadoLocalizacao->Text = "Não";
	
}

private: System::Void btnSubstituir_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//SUBSTITUIR CLUBE, SE EXISTIR
	//Contar clubes
	int nClubes = lstClubes->Items->Count;

	String^ clubeAtual = txtClubeAtual->Text;
	String^ clubeNovo = txtClubeNovo->Text;
	int pos = 0; //posição do clube localizado  e que será substituído

	bool clubeLocalizado = false;

	for (int i = 0; i < nClubes; i++)
	{
		if (lstClubes->Items->Contains(clubeAtual))
		{
			clubeLocalizado = true;
			pos = lstClubes->Items->IndexOf(clubeAtual);
		}
	}
	if (clubeLocalizado)
	{
		lstClubes->Items->RemoveAt(pos); //Remove o clube atual, que foi localizado
		lstClubes->Items->Insert(pos, clubeNovo); //Adiciona o clube novo na mesma posição do clube localizado
	}
	else MessageBox::Show(clubeAtual + ": não localizado!","Informação");
}

private: System::Void btnEliminar5Pri_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//ELIMINAR OS 5 PRIMEIROS
	//Contar clubes
	int nClubes = lstClubes->Items->Count;

	if (nClubes != 0)
	{
		for (int i = 0; i < nClubes; i++)
		{
			if(i >=0 && i <= 4)
				lstClubes->Items->RemoveAt(0);
		}
	}
	else MessageBox::Show("Lista vazia!", "Informação");
}

private: System::Void btnEliminar5Ult_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//ELIMINAR OS 5 ÚLTIMOS, MESMO QUE TENHA MENOS
	//Contar clubes
	int nClubes = lstClubes->Items->Count-1;
	int i=0;
	bool listaVazia = false;

	//if (nClubes != 0)
	
	for (nClubes, i; i < 5; nClubes--, i++)
	{
			
		if (i >= 0 && i <= 4 && nClubes >= 0)
		{
			lstClubes->Items->RemoveAt(nClubes);
		}
		else listaVazia = true;
	}

	if (listaVazia)
		MessageBox::Show("Lista vazia!", "Informação");
	
}

};
}
