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
	private: System::Windows::Forms::TextBox^ txt_num1;
	private: System::Windows::Forms::TextBox^ txt_num2;
	private: System::Windows::Forms::TextBox^ txt_resultado;
	private: System::Windows::Forms::RadioButton^ rdb_adicao;
	private: System::Windows::Forms::RadioButton^ rdb_subtracao;

	private: System::Windows::Forms::RadioButton^ rdb_divisao;
	private: System::Windows::Forms::RadioButton^ rdb_multiplicacao;
	protected:







	protected:

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
			this->txt_num1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_num2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_resultado = (gcnew System::Windows::Forms::TextBox());
			this->rdb_adicao = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_subtracao = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_divisao = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_multiplicacao = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// txt_num1
			// 
			this->txt_num1->Location = System::Drawing::Point(12, 12);
			this->txt_num1->Name = L"txt_num1";
			this->txt_num1->Size = System::Drawing::Size(100, 20);
			this->txt_num1->TabIndex = 0;
			// 
			// txt_num2
			// 
			this->txt_num2->Location = System::Drawing::Point(159, 12);
			this->txt_num2->Name = L"txt_num2";
			this->txt_num2->Size = System::Drawing::Size(100, 20);
			this->txt_num2->TabIndex = 1;
			// 
			// txt_resultado
			// 
			this->txt_resultado->Location = System::Drawing::Point(12, 146);
			this->txt_resultado->Name = L"txt_resultado";
			this->txt_resultado->Size = System::Drawing::Size(247, 20);
			this->txt_resultado->TabIndex = 2;
			// 
			// rdb_adicao
			// 
			this->rdb_adicao->AutoSize = true;
			this->rdb_adicao->Location = System::Drawing::Point(12, 64);
			this->rdb_adicao->Name = L"rdb_adicao";
			this->rdb_adicao->Size = System::Drawing::Size(65, 17);
			this->rdb_adicao->TabIndex = 3;
			this->rdb_adicao->TabStop = true;
			this->rdb_adicao->Text = L"ADIÇÃO";
			this->rdb_adicao->UseVisualStyleBackColor = true;
			this->rdb_adicao->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_adicao_CheckedChanged);
			// 
			// rdb_subtracao
			// 
			this->rdb_subtracao->AutoSize = true;
			this->rdb_subtracao->Location = System::Drawing::Point(12, 103);
			this->rdb_subtracao->Name = L"rdb_subtracao";
			this->rdb_subtracao->Size = System::Drawing::Size(91, 17);
			this->rdb_subtracao->TabIndex = 4;
			this->rdb_subtracao->TabStop = true;
			this->rdb_subtracao->Text = L"SUBTRAÇÃO";
			this->rdb_subtracao->UseVisualStyleBackColor = true;
			this->rdb_subtracao->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_subtracao_CheckedChanged);
			// 
			// rdb_divisao
			// 
			this->rdb_divisao->AutoSize = true;
			this->rdb_divisao->Location = System::Drawing::Point(159, 103);
			this->rdb_divisao->Name = L"rdb_divisao";
			this->rdb_divisao->Size = System::Drawing::Size(68, 17);
			this->rdb_divisao->TabIndex = 6;
			this->rdb_divisao->TabStop = true;
			this->rdb_divisao->Text = L"DIVISÃO";
			this->rdb_divisao->UseVisualStyleBackColor = true;
			this->rdb_divisao->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_divisao_CheckedChanged);
			// 
			// rdb_multiplicacao
			// 
			this->rdb_multiplicacao->AutoSize = true;
			this->rdb_multiplicacao->Location = System::Drawing::Point(159, 64);
			this->rdb_multiplicacao->Name = L"rdb_multiplicacao";
			this->rdb_multiplicacao->Size = System::Drawing::Size(110, 17);
			this->rdb_multiplicacao->TabIndex = 7;
			this->rdb_multiplicacao->TabStop = true;
			this->rdb_multiplicacao->Text = L"MULTIPLICAÇÃO";
			this->rdb_multiplicacao->UseVisualStyleBackColor = true;
			this->rdb_multiplicacao->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_multiplicacao_CheckedChanged_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 190);
			this->Controls->Add(this->rdb_multiplicacao);
			this->Controls->Add(this->rdb_divisao);
			this->Controls->Add(this->rdb_subtracao);
			this->Controls->Add(this->rdb_adicao);
			this->Controls->Add(this->txt_resultado);
			this->Controls->Add(this->txt_num2);
			this->Controls->Add(this->txt_num1);
			this->Name = L"Form1";
			this->Text = L"OPERAÇÕES";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		

private: System::Void rdb_multiplicacao_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

private: System::Void rdb_adicao_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	float num1 = Convert::ToDouble(txt_num1->Text);
	float num2 = Convert::ToDouble(txt_num2->Text);
	float soma = num1 + num2;
	txt_resultado->Text = Convert::ToString(soma);
}

private: System::Void rdb_subtracao_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	float num1 = Convert::ToDouble(txt_num1->Text);
	float num2 = Convert::ToDouble(txt_num2->Text);
	float subtracao1 = num1-num2; float subtracao2 = num2-num1;

	if (num2 > num1)
		txt_resultado->Text = Convert::ToString(subtracao2);
	else
		txt_resultado->Text = Convert::ToString(subtracao1);
}
	   
private: System::Void rdb_divisao_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	float num1 = Convert::ToDouble(txt_num1->Text);
	float num2 = Convert::ToDouble(txt_num2->Text);
	float divide = num1/num2;

	if (num2 == 0)
		txt_resultado->Text = "Não há divisão por 0!";
	else
		txt_resultado->Text = Convert::ToString(divide);
}

private: System::Void rdb_multiplicacao_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) 
{
	float num1 = Convert::ToDouble(txt_num1->Text);
	float num2 = Convert::ToDouble(txt_num2->Text);
	float multiplica = num1 * num2;
	txt_resultado->Text = Convert::ToString(multiplica);
}
};
}
