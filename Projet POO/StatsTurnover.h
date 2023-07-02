#pragma once
#include "SERV_STATS.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StatsTurnover : public System::Windows::Forms::Form
	{
	public:
		StatsTurnover(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StatsTurnover()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		SERVICE::SERV_STATS^ _service;

		System::Windows::Forms::Button^ buttonReturn;
		System::Windows::Forms::Label^ labelTotal;
		System::Windows::Forms::Label^ labelResult;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->labelTotal = (gcnew System::Windows::Forms::Label());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(160, 51);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(108, 23);
			this->buttonReturn->TabIndex = 16;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &StatsTurnover::buttonReturn_Click);
			// 
			// labelTotal
			// 
			this->labelTotal->AutoSize = true;
			this->labelTotal->Location = System::Drawing::Point(5, 9);
			this->labelTotal->Name = L"labelTotal";
			this->labelTotal->Size = System::Drawing::Size(224, 13);
			this->labelTotal->TabIndex = 15;
			this->labelTotal->Text = L"Chiffre d\'affaire de notre entreprise ce mois ci :";
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(116, 32);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(37, 13);
			this->labelResult->TabIndex = 17;
			this->labelResult->Text = L"Result";
			// 
			// StatsTurnover
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 85);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->labelTotal);
			this->Name = L"StatsTurnover";
			this->Text = L"Chifre d\'affaire";
			this->Load += gcnew System::EventHandler(this, &StatsTurnover::StatsTurnover_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
		Void StatsTurnover_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			//this->_service = gcnew SERVICE::SERV_STATS(2, "12");
			//this->labelResult->Text = this->_service->MonthTurnover();
			//faire gaffe month
		}
	};
}
