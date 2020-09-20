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
	private: System::Windows::Forms::ComboBox^ cbo_pizzas;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_calcular;
	private: System::Windows::Forms::TextBox^ txt_resultado;
	private: System::Windows::Forms::TextBox^ txt_quantidade;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_preco;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ rdb_sim;
	private: System::Windows::Forms::RadioButton^ rdb_nao;
	private: System::Windows::Forms::CheckBox^ chk_azeitona;
	private: System::Windows::Forms::CheckBox^ chk_queijo;
	private: System::Windows::Forms::CheckBox^ chk_pimentos;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			this->cbo_pizzas = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_calcular = (gcnew System::Windows::Forms::Button());
			this->txt_resultado = (gcnew System::Windows::Forms::TextBox());
			this->txt_quantidade = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_preco = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rdb_sim = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_nao = (gcnew System::Windows::Forms::RadioButton());
			this->chk_azeitona = (gcnew System::Windows::Forms::CheckBox());
			this->chk_queijo = (gcnew System::Windows::Forms::CheckBox());
			this->chk_pimentos = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cbo_pizzas
			// 
			this->cbo_pizzas->FormattingEnabled = true;
			this->cbo_pizzas->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Marguerita", L"Napolitana", L"Anchova" });
			this->cbo_pizzas->Location = System::Drawing::Point(12, 31);
			this->cbo_pizzas->Name = L"cbo_pizzas";
			this->cbo_pizzas->Size = System::Drawing::Size(121, 21);
			this->cbo_pizzas->TabIndex = 0;
			this->cbo_pizzas->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cbo_pizzas_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Pizzas";
			// 
			// btn_calcular
			// 
			this->btn_calcular->Location = System::Drawing::Point(18, 173);
			this->btn_calcular->Name = L"btn_calcular";
			this->btn_calcular->Size = System::Drawing::Size(75, 23);
			this->btn_calcular->TabIndex = 2;
			this->btn_calcular->Text = L"Calcular";
			this->btn_calcular->UseVisualStyleBackColor = true;
			this->btn_calcular->Click += gcnew System::EventHandler(this, &Form1::btn_calcular_Click);
			// 
			// txt_resultado
			// 
			this->txt_resultado->Location = System::Drawing::Point(131, 173);
			this->txt_resultado->Name = L"txt_resultado";
			this->txt_resultado->Size = System::Drawing::Size(100, 20);
			this->txt_resultado->TabIndex = 3;
			// 
			// txt_quantidade
			// 
			this->txt_quantidade->Location = System::Drawing::Point(231, 31);
			this->txt_quantidade->Name = L"txt_quantidade";
			this->txt_quantidade->Size = System::Drawing::Size(70, 20);
			this->txt_quantidade->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(232, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Quantidade";
			// 
			// txt_preco
			// 
			this->txt_preco->Location = System::Drawing::Point(143, 31);
			this->txt_preco->Name = L"txt_preco";
			this->txt_preco->Size = System::Drawing::Size(69, 20);
			this->txt_preco->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(146, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Preço";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Tem desconto de 10%\?";
			// 
			// rdb_sim
			// 
			this->rdb_sim->AutoSize = true;
			this->rdb_sim->Location = System::Drawing::Point(16, 99);
			this->rdb_sim->Name = L"rdb_sim";
			this->rdb_sim->Size = System::Drawing::Size(44, 17);
			this->rdb_sim->TabIndex = 9;
			this->rdb_sim->TabStop = true;
			this->rdb_sim->Text = L"SIM";
			this->rdb_sim->UseVisualStyleBackColor = true;
			// 
			// rdb_nao
			// 
			this->rdb_nao->AutoSize = true;
			this->rdb_nao->Location = System::Drawing::Point(16, 122);
			this->rdb_nao->Name = L"rdb_nao";
			this->rdb_nao->Size = System::Drawing::Size(48, 17);
			this->rdb_nao->TabIndex = 10;
			this->rdb_nao->TabStop = true;
			this->rdb_nao->Text = L"NÃO";
			this->rdb_nao->UseVisualStyleBackColor = true;
			// 
			// chk_azeitona
			// 
			this->chk_azeitona->AutoSize = true;
			this->chk_azeitona->Location = System::Drawing::Point(164, 89);
			this->chk_azeitona->Name = L"chk_azeitona";
			this->chk_azeitona->Size = System::Drawing::Size(67, 17);
			this->chk_azeitona->TabIndex = 11;
			this->chk_azeitona->Text = L"Azeitona";
			this->chk_azeitona->UseVisualStyleBackColor = true;
			// 
			// chk_queijo
			// 
			this->chk_queijo->AutoSize = true;
			this->chk_queijo->Location = System::Drawing::Point(164, 112);
			this->chk_queijo->Name = L"chk_queijo";
			this->chk_queijo->Size = System::Drawing::Size(82, 17);
			this->chk_queijo->TabIndex = 12;
			this->chk_queijo->Text = L"Queijo extra";
			this->chk_queijo->UseVisualStyleBackColor = true;
			// 
			// chk_pimentos
			// 
			this->chk_pimentos->AutoSize = true;
			this->chk_pimentos->Location = System::Drawing::Point(164, 135);
			this->chk_pimentos->Name = L"chk_pimentos";
			this->chk_pimentos->Size = System::Drawing::Size(69, 17);
			this->chk_pimentos->TabIndex = 13;
			this->chk_pimentos->Text = L"Pimentos";
			this->chk_pimentos->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(161, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Adicionais";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(259, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"+1 Euro";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(259, 113);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"+1 Euro";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(259, 135);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"+2 Euros";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(339, 219);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->chk_pimentos);
			this->Controls->Add(this->chk_queijo);
			this->Controls->Add(this->chk_azeitona);
			this->Controls->Add(this->rdb_nao);
			this->Controls->Add(this->rdb_sim);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_preco);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_quantidade);
			this->Controls->Add(this->txt_resultado);
			this->Controls->Add(this->btn_calcular);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cbo_pizzas);
			this->Name = L"Form1";
			this->Text = L"ENCOMENDAS";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_calcular_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int quantidade = Convert::ToInt16(txt_quantidade->Text);
		float preco = Convert::ToDouble(txt_preco->Text);
		float total;

		//Escolha a pizza - ComboBox
		if (cbo_pizzas->SelectedItem == "Marguerita") preco = 6;
		if (cbo_pizzas->SelectedItem == "Napolitana") preco = 7;
		if (cbo_pizzas->SelectedItem == "Anchova") preco = 8;
		total = quantidade * preco;

		//Adicionais - Checkboxes
		if (chk_azeitona->Checked) total = total + 1;
		if (chk_queijo->Checked) total = total + 1;
		if (chk_pimentos->Checked) total = total + 2;

		//Desconto de 10% *0.9 - RadioButton
		if (rdb_sim->Checked)
			total = total * 0.9;
		
		txt_resultado->Text = Convert::ToString(total);
	}
private: System::Void cbo_pizzas_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	int preco;
	
	if (cbo_pizzas->SelectedItem == "Marguerita") preco = 6;
	if (cbo_pizzas->SelectedItem == "Napolitana") preco = 7;
	if (cbo_pizzas->SelectedItem == "Anchova") preco = 8;

	txt_preco->Text = Convert::ToString(preco);
}

};
}
