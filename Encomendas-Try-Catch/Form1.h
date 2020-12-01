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
	private: System::Windows::Forms::TextBox^ txtPreco;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtQuantidade;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::CheckBox^ chkPimentos;

	private: System::Windows::Forms::CheckBox^ chkQueijo;

	private: System::Windows::Forms::CheckBox^ chkAzeitona;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ rdbSim;
	private: System::Windows::Forms::RadioButton^ rdbNao;
	private: System::Windows::Forms::Button^ btnCalcular;
	private: System::Windows::Forms::TextBox^ txtValorFinal;




	private: System::Windows::Forms::ComboBox^ cmbPizza;

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
			this->txtPreco = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtQuantidade = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->chkPimentos = (gcnew System::Windows::Forms::CheckBox());
			this->chkQueijo = (gcnew System::Windows::Forms::CheckBox());
			this->chkAzeitona = (gcnew System::Windows::Forms::CheckBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->cmbPizza = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rdbSim = (gcnew System::Windows::Forms::RadioButton());
			this->rdbNao = (gcnew System::Windows::Forms::RadioButton());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->txtValorFinal = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtPreco
			// 
			this->txtPreco->Location = System::Drawing::Point(134, 28);
			this->txtPreco->Name = L"txtPreco";
			this->txtPreco->ReadOnly = true;
			this->txtPreco->Size = System::Drawing::Size(55, 20);
			this->txtPreco->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pizzas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(131, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Preço";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(204, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Quantidade";
			// 
			// txtQuantidade
			// 
			this->txtQuantidade->Location = System::Drawing::Point(207, 28);
			this->txtQuantidade->Name = L"txtQuantidade";
			this->txtQuantidade->Size = System::Drawing::Size(49, 20);
			this->txtQuantidade->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->chkPimentos);
			this->panel1->Controls->Add(this->chkQueijo);
			this->panel1->Controls->Add(this->chkAzeitona);
			this->panel1->Location = System::Drawing::Point(287, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(135, 76);
			this->panel1->TabIndex = 6;
			// 
			// chkPimentos
			// 
			this->chkPimentos->AutoSize = true;
			this->chkPimentos->Location = System::Drawing::Point(9, 49);
			this->chkPimentos->Name = L"chkPimentos";
			this->chkPimentos->Size = System::Drawing::Size(107, 17);
			this->chkPimentos->TabIndex = 5;
			this->chkPimentos->Text = L"Pimentos +2EUR";
			this->chkPimentos->UseVisualStyleBackColor = true;
			// 
			// chkQueijo
			// 
			this->chkQueijo->AutoSize = true;
			this->chkQueijo->Location = System::Drawing::Point(9, 26);
			this->chkQueijo->Name = L"chkQueijo";
			this->chkQueijo->Size = System::Drawing::Size(120, 17);
			this->chkQueijo->TabIndex = 4;
			this->chkQueijo->Text = L"Queijo extra +1EUR";
			this->chkQueijo->UseVisualStyleBackColor = true;
			// 
			// chkAzeitona
			// 
			this->chkAzeitona->AutoSize = true;
			this->chkAzeitona->Location = System::Drawing::Point(9, 3);
			this->chkAzeitona->Name = L"chkAzeitona";
			this->chkAzeitona->Size = System::Drawing::Size(105, 17);
			this->chkAzeitona->TabIndex = 3;
			this->chkAzeitona->Text = L"Azeitona +1EUR";
			this->chkAzeitona->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->cmbPizza);
			this->panel2->Controls->Add(this->txtPreco);
			this->panel2->Controls->Add(this->txtQuantidade);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(3, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(278, 76);
			this->panel2->TabIndex = 3;
			// 
			// cmbPizza
			// 
			this->cmbPizza->FormattingEnabled = true;
			this->cmbPizza->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Margarita", L"Napolitana", L"Anchova" });
			this->cmbPizza->Location = System::Drawing::Point(12, 26);
			this->cmbPizza->Name = L"cmbPizza";
			this->cmbPizza->Size = System::Drawing::Size(107, 21);
			this->cmbPizza->TabIndex = 1;
			this->cmbPizza->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cmbPizza_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Tem desconto\? (10%)";
			// 
			// rdbSim
			// 
			this->rdbSim->AutoSize = true;
			this->rdbSim->Location = System::Drawing::Point(15, 121);
			this->rdbSim->Name = L"rdbSim";
			this->rdbSim->Size = System::Drawing::Size(42, 17);
			this->rdbSim->TabIndex = 6;
			this->rdbSim->TabStop = true;
			this->rdbSim->Text = L"Sim";
			this->rdbSim->UseVisualStyleBackColor = true;
			// 
			// rdbNao
			// 
			this->rdbNao->AutoSize = true;
			this->rdbNao->Location = System::Drawing::Point(63, 121);
			this->rdbNao->Name = L"rdbNao";
			this->rdbNao->Size = System::Drawing::Size(45, 17);
			this->rdbNao->TabIndex = 7;
			this->rdbNao->TabStop = true;
			this->rdbNao->Text = L"Não";
			this->rdbNao->UseVisualStyleBackColor = true;
			// 
			// btnCalcular
			// 
			this->btnCalcular->Location = System::Drawing::Point(15, 159);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(75, 23);
			this->btnCalcular->TabIndex = 9;
			this->btnCalcular->Text = L"Calcular";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &Form1::btnCalcular_Click);
			// 
			// txtValorFinal
			// 
			this->txtValorFinal->Location = System::Drawing::Point(110, 159);
			this->txtValorFinal->Name = L"txtValorFinal";
			this->txtValorFinal->ReadOnly = true;
			this->txtValorFinal->Size = System::Drawing::Size(100, 20);
			this->txtValorFinal->TabIndex = 8;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(429, 199);
			this->Controls->Add(this->txtValorFinal);
			this->Controls->Add(this->btnCalcular);
			this->Controls->Add(this->rdbNao);
			this->Controls->Add(this->rdbSim);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"ENCOMENDA DE PIZZA";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{	
	
}

private: System::Void cmbPizza_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (cmbPizza->Text == "Margarita")
	{
		txtPreco->Text = "6";
	}

	if (cmbPizza->Text == "Napolitana")
	{
		txtPreco->Text = "7";
	}

	if (cmbPizza->Text == "Anchova")
	{
		txtPreco->Text = "8";
	}

}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
{
	rdbNao->Checked = true;
	cmbPizza->Text = "Escolha sua pizza";
}
private: System::Void btnCalcular_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double preco = Convert::ToDouble(txtPreco->Text);
	double valorFinal;
	int quantidade;
	bool quantidadeValida = false;
	
	try
	{
		quantidade = Convert::ToInt32(txtQuantidade->Text);
		quantidadeValida = true;
	}
	catch (...)
	{
		MessageBox::Show("Quantidade inválida!");
		txtValorFinal->Text = "Erro!";
	}
	
	if (quantidade == 0)
	{
		MessageBox::Show("Quantidade inválida!");
		txtValorFinal->Text = "Erro!";
		quantidadeValida = false;
	}

	if (quantidadeValida)
	{
		valorFinal = preco * quantidade;
		//ADICIONAIS
		//Azeitona e Queijo extra +1 Euro, cada
		//Pimentos +2 Euros
		if (chkAzeitona->Checked)
		{
			valorFinal = valorFinal + 1;
		}

		if (chkQueijo->Checked)
		{
			valorFinal = valorFinal + 1;
		}

		if (chkPimentos->Checked)
		{
			valorFinal = valorFinal + 2;
		}

		//DESCONTO DE 10%, *0.9
		if (rdbSim->Checked)
		{
			valorFinal = valorFinal * 0.9;
		}

		txtValorFinal->Text = Convert::ToString(valorFinal);
	}
}

};
}
