#pragma once
#include "SERV_STATS.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class StatsTotalClient : public System::Windows::Forms::Form
	{
	public:
		StatsTotalClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StatsTotalClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		SERVICE::SERV_STATS^ _service;

		System::Windows::Forms::TextBox^ textBoxEnterID;
		System::Windows::Forms::Button^ buttonSearch;
		System::Windows::Forms::TextBox^ textBoxResult;
		System::Windows::Forms::Label^ labelInfo;
		System::Windows::Forms::Label^ labelTotal;
		System::Windows::Forms::Button^ buttonReturn;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBoxEnterID = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->textBoxResult = (gcnew System::Windows::Forms::TextBox());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->labelTotal = (gcnew System::Windows::Forms::Label());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxEnterID
			// 
			this->textBoxEnterID->Location = System::Drawing::Point(15, 39);
			this->textBoxEnterID->Name = L"textBoxEnterID";
			this->textBoxEnterID->Size = System::Drawing::Size(142, 20);
			this->textBoxEnterID->TabIndex = 0;
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(160, 39);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(112, 20);
			this->buttonSearch->TabIndex = 1;
			this->buttonSearch->Text = L"Rechercher";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &StatsTotalClient::buttonSearch_Click);
			// 
			// textBoxResult
			// 
			this->textBoxResult->Location = System::Drawing::Point(15, 83);
			this->textBoxResult->Name = L"textBoxResult";
			this->textBoxResult->Size = System::Drawing::Size(260, 20);
			this->textBoxResult->TabIndex = 2;
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(12, 10);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(274, 26);
			this->labelInfo->TabIndex = 3;
			this->labelInfo->Text = L"Veuillez rentrer ci-dessous l\'ID du client dont on cherche \r\nle montant total des"
				L" achats :";
			// 
			// labelTotal
			// 
			this->labelTotal->AutoSize = true;
			this->labelTotal->Location = System::Drawing::Point(12, 67);
			this->labelTotal->Name = L"labelTotal";
			this->labelTotal->Size = System::Drawing::Size(37, 13);
			this->labelTotal->TabIndex = 4;
			this->labelTotal->Text = L"Total :";
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(167, 109);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(108, 23);
			this->buttonReturn->TabIndex = 10;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &StatsTotalClient::buttonReturn_Click);
			// 
			// StatsTotalClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 137);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->labelTotal);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->textBoxResult);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->textBoxEnterID);
			this->Name = L"StatsTotalClient";
			this->Text = L"Montant d\'achat client";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			//this->_service = gcnew SERVICE::SERV_STATS(1, this->textBoxEnterID->Text);
			//this->textBoxResult->Text = this->_service->TotalClient();
		}
		Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
