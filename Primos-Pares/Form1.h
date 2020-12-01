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
	private: System::Windows::Forms::TextBox^ txtNum1;
	protected:
	private: System::Windows::Forms::TextBox^ txtNum2;
	private: System::Windows::Forms::TextBox^ txtNum3;
	private: System::Windows::Forms::TextBox^ txtNum4;
	private: System::Windows::Forms::TextBox^ txtResultado;
	private: System::Windows::Forms::Button^ btnGerarNumeros;
	private: System::Windows::Forms::Button^ btnLimpar;
	private: System::Windows::Forms::Button^ btnContarPares;
	private: System::Windows::Forms::Button^ btnMaior;
	private: System::Windows::Forms::Button^ btnMenor;
	private: System::Windows::Forms::Button^ btnPrimos;

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
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum3 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum4 = (gcnew System::Windows::Forms::TextBox());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->btnGerarNumeros = (gcnew System::Windows::Forms::Button());
			this->btnLimpar = (gcnew System::Windows::Forms::Button());
			this->btnContarPares = (gcnew System::Windows::Forms::Button());
			this->btnMaior = (gcnew System::Windows::Forms::Button());
			this->btnMenor = (gcnew System::Windows::Forms::Button());
			this->btnPrimos = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtNum1
			// 
			this->txtNum1->Location = System::Drawing::Point(12, 47);
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(46, 20);
			this->txtNum1->TabIndex = 0;
			// 
			// txtNum2
			// 
			this->txtNum2->Location = System::Drawing::Point(69, 47);
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(46, 20);
			this->txtNum2->TabIndex = 1;
			// 
			// txtNum3
			// 
			this->txtNum3->Location = System::Drawing::Point(130, 47);
			this->txtNum3->Name = L"txtNum3";
			this->txtNum3->Size = System::Drawing::Size(46, 20);
			this->txtNum3->TabIndex = 2;
			// 
			// txtNum4
			// 
			this->txtNum4->Location = System::Drawing::Point(189, 47);
			this->txtNum4->Name = L"txtNum4";
			this->txtNum4->Size = System::Drawing::Size(46, 20);
			this->txtNum4->TabIndex = 3;
			// 
			// txtResultado
			// 
			this->txtResultado->Location = System::Drawing::Point(249, 47);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(100, 20);
			this->txtResultado->TabIndex = 4;
			// 
			// btnGerarNumeros
			// 
			this->btnGerarNumeros->Location = System::Drawing::Point(12, 12);
			this->btnGerarNumeros->Name = L"btnGerarNumeros";
			this->btnGerarNumeros->Size = System::Drawing::Size(223, 23);
			this->btnGerarNumeros->TabIndex = 5;
			this->btnGerarNumeros->Text = L"Gerar números";
			this->btnGerarNumeros->UseVisualStyleBackColor = true;
			this->btnGerarNumeros->Click += gcnew System::EventHandler(this, &Form1::btnGerarNumeros_Click);
			// 
			// btnLimpar
			// 
			this->btnLimpar->Location = System::Drawing::Point(249, 12);
			this->btnLimpar->Name = L"btnLimpar";
			this->btnLimpar->Size = System::Drawing::Size(100, 23);
			this->btnLimpar->TabIndex = 6;
			this->btnLimpar->Text = L"Limpar";
			this->btnLimpar->UseVisualStyleBackColor = true;
			this->btnLimpar->Click += gcnew System::EventHandler(this, &Form1::btnLimpar_Click);
			// 
			// btnContarPares
			// 
			this->btnContarPares->Location = System::Drawing::Point(12, 84);
			this->btnContarPares->Name = L"btnContarPares";
			this->btnContarPares->Size = System::Drawing::Size(75, 46);
			this->btnContarPares->TabIndex = 7;
			this->btnContarPares->Text = L"Contar pares";
			this->btnContarPares->UseVisualStyleBackColor = true;
			this->btnContarPares->Click += gcnew System::EventHandler(this, &Form1::btnContarPares_Click);
			// 
			// btnMaior
			// 
			this->btnMaior->Location = System::Drawing::Point(101, 84);
			this->btnMaior->Name = L"btnMaior";
			this->btnMaior->Size = System::Drawing::Size(75, 46);
			this->btnMaior->TabIndex = 8;
			this->btnMaior->Text = L"Qual o maior\?";
			this->btnMaior->UseVisualStyleBackColor = true;
			this->btnMaior->Click += gcnew System::EventHandler(this, &Form1::btnMaior_Click);
			// 
			// btnMenor
			// 
			this->btnMenor->Location = System::Drawing::Point(189, 84);
			this->btnMenor->Name = L"btnMenor";
			this->btnMenor->Size = System::Drawing::Size(75, 46);
			this->btnMenor->TabIndex = 8;
			this->btnMenor->Text = L"Qual o menor\?";
			this->btnMenor->UseVisualStyleBackColor = true;
			this->btnMenor->Click += gcnew System::EventHandler(this, &Form1::btnMenor_Click);
			// 
			// btnPrimos
			// 
			this->btnPrimos->Location = System::Drawing::Point(274, 84);
			this->btnPrimos->Name = L"btnPrimos";
			this->btnPrimos->Size = System::Drawing::Size(75, 46);
			this->btnPrimos->TabIndex = 8;
			this->btnPrimos->Text = L"Há primos\?";
			this->btnPrimos->UseVisualStyleBackColor = true;
			this->btnPrimos->Click += gcnew System::EventHandler(this, &Form1::btnPrimos_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(361, 148);
			this->Controls->Add(this->btnPrimos);
			this->Controls->Add(this->btnMenor);
			this->Controls->Add(this->btnMaior);
			this->Controls->Add(this->btnContarPares);
			this->Controls->Add(this->btnLimpar);
			this->Controls->Add(this->btnGerarNumeros);
			this->Controls->Add(this->txtResultado);
			this->Controls->Add(this->txtNum4);
			this->Controls->Add(this->txtNum3);
			this->Controls->Add(this->txtNum2);
			this->Controls->Add(this->txtNum1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void btnGerarNumeros_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Random^ r = gcnew Random();//para gerar números aleatórios
	int x1 = r->Next(0, 100); //gera um número entre 0 e 100
	int x2 = r->Next(0, 100); //gera um número entre 0 e 100
	int x3 = r->Next(0, 100); //gera um número entre 0 e 100
	int x4 = r->Next(0, 100); //gera um número entre 0 e 100
	txtNum1->Text = Convert::ToString(x1);
	txtNum2->Text = Convert::ToString(x2);
	txtNum3->Text = Convert::ToString(x3);
	txtNum4->Text = Convert::ToString(x4);
}


private: System::Void btnLimpar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	txtNum1->Text = "";
	txtNum2->Text = "";
	txtNum3->Text = "";
	txtNum4->Text = "";
	txtResultado->Text = "";
}
private: System::Void btnContarPares_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int contaPares = 0;
	int num1 = Convert::ToInt32(txtNum1->Text);
	int num2 = Convert::ToInt32(txtNum2->Text);
	int num3 = Convert::ToInt32(txtNum3->Text);
	int num4 = Convert::ToInt32(txtNum4->Text);
	String^ numPares = "";
	//Se for par, conta
	if (num1 % 2 == 0)
	{
		contaPares++; 
		numPares = numPares+num1+" ";
	}
	if (num2 % 2 == 0) 
	{
		contaPares++;
		numPares = numPares+num2+" ";
	}
	if (num3 % 2 == 0) 
	{
		contaPares++;
		numPares = numPares+num3+" ";
	}
	if (num4 % 2 == 0) 
	{
		contaPares++;
		numPares = numPares+num4+" ";
	}

	txtResultado->Text = Convert::ToString(contaPares + ": " + numPares);
	if (contaPares == 0)
		txtResultado->Text = "0";
}

private: System::Void btnMaior_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int num1 = Convert::ToInt32(txtNum1->Text);
	int num2 = Convert::ToInt32(txtNum2->Text);
	int num3 = Convert::ToInt32(txtNum3->Text);
	int num4 = Convert::ToInt32(txtNum4->Text);
	int maior = 0;
	if (num1 > maior)
		maior = num1;
	if (num2 > maior)
		maior = num2;
	if (num3 > maior)
		maior = num3;
	if (num4 > maior)
		maior = num4;

	txtResultado->Text = Convert::ToString(maior);
}

private: System::Void btnMenor_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int num1 = Convert::ToInt32(txtNum1->Text);
	int num2 = Convert::ToInt32(txtNum2->Text);
	int num3 = Convert::ToInt32(txtNum3->Text);
	int num4 = Convert::ToInt32(txtNum4->Text);
	int menor = num1;
	if (num2 < menor)
		menor = num2;
	if (num3 < menor)
		menor = num3;
	if (num4 < menor)
		menor = num4;

	txtResultado->Text = Convert::ToString(menor);
}

private: System::Void btnPrimos_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int num1, num2, num3, num4;
	bool numOK = false;
	int i;
	int contaRestoNum1 = 0;
	int contaRestoNum2 = 0;
	int contaRestoNum3 = 0;
	int contaRestoNum4 = 0;
	String^ listaPrimos = " ";
	bool primoLocalizado = false;

	try 
	{
		num1 = Convert::ToInt32(txtNum1->Text);
		num2 = Convert::ToInt32(txtNum2->Text);
		num3 = Convert::ToInt32(txtNum3->Text);
		num4 = Convert::ToInt32(txtNum4->Text);
		numOK = true;
	}
	catch (...)
	{
		/*txtNum1->Text = "0";
		txtNum2->Text = "0";
		txtNum3->Text = "0";
		txtNum4->Text = "0";*/
		num1 = 0; num2 = 0; num3 = 0; num4 = 0;
	}

	if (numOK)
	{
		//Verifica se num1 é primo
		for (i = 2; i <= num1 / 2; i++)
		{
			if (num1 % i == 0)
			{
				contaRestoNum1++;
			}
		}
		if (contaRestoNum1 == 0 && num1 != 0)
		{
			primoLocalizado = true;
			listaPrimos = listaPrimos + num1 + " ";
		}

		//Verifica se num2 é primo
		for (i = 2; i <= num2 / 2; i++)
		{
			if (num2 % i == 0)
			{
				contaRestoNum2++;
			}
		}
		if (contaRestoNum2 == 0 && num2 != 0)
		{
			primoLocalizado = true;
			listaPrimos = listaPrimos + num2 + " ";
		}

		//Verifica se num3 é primo
		for (i = 2; i <= num3 / 2; i++)
		{
			if (num3 % i == 0)
			{
				contaRestoNum3++;
			}
		}
		if (contaRestoNum3 == 0 && num3 != 0)
		{
			primoLocalizado = true;
			listaPrimos = listaPrimos + num3 + " ";
		}

		//Verifica se num4 é primo
		for (i = 2; i <= num4 / 2; i++)
		{
			if (num4 % i == 0)
			{
				contaRestoNum4++;
			}
		}
		if (contaRestoNum4 == 0 && num4 != 0)
		{
			primoLocalizado = true;
			listaPrimos = listaPrimos + num4 + " ";
		}

		if (primoLocalizado)
			txtResultado->Text = "Sim: " + listaPrimos;
		else
			txtResultado->Text = "Não";
	}
}

};
}
