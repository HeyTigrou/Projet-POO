#pragma once
#include "SERV_INSERT.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ClientCreation : public System::Windows::Forms::Form
	{
	public:
		ClientCreation(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~ClientCreation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		SERVICE::SERV_INSERT^ _service;

		System::Windows::Forms::Label^ labelInformation;
		System::Windows::Forms::TextBox^ textBoxLastName;
		System::Windows::Forms::Label^ labelLastName;
		System::Windows::Forms::Label^ labelFirstName;
		System::Windows::Forms::TextBox^ textBoxFirstName;
		System::Windows::Forms::Label^ labelBirthDate;
		System::Windows::Forms::TextBox^ textBoxBirthDateDay;
		System::Windows::Forms::TextBox^ textBoxBirthDateMonth;
		System::Windows::Forms::TextBox^ textBoxBirthDateYear;
		System::Windows::Forms::Button^ buttonConfirm;
		System::Windows::Forms::Button^ buttonCancel;
		System::Windows::Forms::TextBox^ textBoxFirstBuyYear;
		System::Windows::Forms::TextBox^ textBoxFirstBuyMonth;
		System::Windows::Forms::TextBox^ textBoxFirstBuyDay;
		System::Windows::Forms::Label^ labelInfo2;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelInformation = (gcnew System::Windows::Forms::Label());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelBirthDate = (gcnew System::Windows::Forms::Label());
			this->textBoxBirthDateDay = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBirthDateMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBirthDateYear = (gcnew System::Windows::Forms::TextBox());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->textBoxFirstBuyYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstBuyMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstBuyDay = (gcnew System::Windows::Forms::TextBox());
			this->labelInfo2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelInformation
			// 
			this->labelInformation->AutoSize = true;
			this->labelInformation->Location = System::Drawing::Point(13, 13);
			this->labelInformation->Name = L"labelInformation";
			this->labelInformation->Size = System::Drawing::Size(191, 13);
			this->labelInformation->TabIndex = 0;
			this->labelInformation->Text = L"Veuillez remplir les champs ci-dessous :";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(16, 52);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(269, 20);
			this->textBoxLastName->TabIndex = 1;
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(13, 36);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(29, 13);
			this->labelLastName->TabIndex = 2;
			this->labelLastName->Text = L"Nom";
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(16, 79);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(43, 13);
			this->labelFirstName->TabIndex = 3;
			this->labelFirstName->Text = L"Prénom";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(16, 96);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(269, 20);
			this->textBoxFirstName->TabIndex = 4;
			// 
			// labelBirthDate
			// 
			this->labelBirthDate->AutoSize = true;
			this->labelBirthDate->Location = System::Drawing::Point(16, 123);
			this->labelBirthDate->Name = L"labelBirthDate";
			this->labelBirthDate->Size = System::Drawing::Size(226, 13);
			this->labelBirthDate->TabIndex = 5;
			this->labelBirthDate->Text = L"Date de naissance au format : JJ - MM - AAAA\r\n";
			// 
			// textBoxBirthDateDay
			// 
			this->textBoxBirthDateDay->Location = System::Drawing::Point(16, 139);
			this->textBoxBirthDateDay->MaxLength = 2;
			this->textBoxBirthDateDay->Name = L"textBoxBirthDateDay";
			this->textBoxBirthDateDay->Size = System::Drawing::Size(60, 20);
			this->textBoxBirthDateDay->TabIndex = 6;
			// 
			// textBoxBirthDateMonth
			// 
			this->textBoxBirthDateMonth->Location = System::Drawing::Point(82, 139);
			this->textBoxBirthDateMonth->MaxLength = 2;
			this->textBoxBirthDateMonth->Name = L"textBoxBirthDateMonth";
			this->textBoxBirthDateMonth->Size = System::Drawing::Size(60, 20);
			this->textBoxBirthDateMonth->TabIndex = 10;
			// 
			// textBoxBirthDateYear
			// 
			this->textBoxBirthDateYear->Location = System::Drawing::Point(148, 139);
			this->textBoxBirthDateYear->MaxLength = 4;
			this->textBoxBirthDateYear->Name = L"textBoxBirthDateYear";
			this->textBoxBirthDateYear->Size = System::Drawing::Size(137, 20);
			this->textBoxBirthDateYear->TabIndex = 11;
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(16, 227);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(188, 23);
			this->buttonConfirm->TabIndex = 15;
			this->buttonConfirm->Text = L"Confirmer les informations ci-dessus";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &ClientCreation::buttonConfirm_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(210, 227);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 16;
			this->buttonCancel->Text = L"Annuler";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &ClientCreation::buttonCancel_Click);
			// 
			// textBoxFirstBuyYear
			// 
			this->textBoxFirstBuyYear->Location = System::Drawing::Point(148, 187);
			this->textBoxFirstBuyYear->MaxLength = 4;
			this->textBoxFirstBuyYear->Name = L"textBoxFirstBuyYear";
			this->textBoxFirstBuyYear->Size = System::Drawing::Size(137, 20);
			this->textBoxFirstBuyYear->TabIndex = 20;
			// 
			// textBoxFirstBuyMonth
			// 
			this->textBoxFirstBuyMonth->Location = System::Drawing::Point(82, 187);
			this->textBoxFirstBuyMonth->MaxLength = 2;
			this->textBoxFirstBuyMonth->Name = L"textBoxFirstBuyMonth";
			this->textBoxFirstBuyMonth->Size = System::Drawing::Size(60, 20);
			this->textBoxFirstBuyMonth->TabIndex = 19;
			// 
			// textBoxFirstBuyDay
			// 
			this->textBoxFirstBuyDay->Location = System::Drawing::Point(16, 187);
			this->textBoxFirstBuyDay->MaxLength = 2;
			this->textBoxFirstBuyDay->Name = L"textBoxFirstBuyDay";
			this->textBoxFirstBuyDay->Size = System::Drawing::Size(60, 20);
			this->textBoxFirstBuyDay->TabIndex = 18;
			// 
			// labelInfo2
			// 
			this->labelInfo2->AutoSize = true;
			this->labelInfo2->Location = System::Drawing::Point(16, 171);
			this->labelInfo2->Name = L"labelInfo2";
			this->labelInfo2->Size = System::Drawing::Size(242, 13);
			this->labelInfo2->TabIndex = 17;
			this->labelInfo2->Text = L"Date de premier achat au format : JJ - MM - AAAA\r\n";
			// 
			// ClientCreation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 262);
			this->Controls->Add(this->textBoxFirstBuyYear);
			this->Controls->Add(this->textBoxFirstBuyMonth);
			this->Controls->Add(this->textBoxFirstBuyDay);
			this->Controls->Add(this->labelInfo2);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->textBoxBirthDateYear);
			this->Controls->Add(this->textBoxBirthDateMonth);
			this->Controls->Add(this->textBoxBirthDateDay);
			this->Controls->Add(this->labelBirthDate);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->labelFirstName);
			this->Controls->Add(this->labelLastName);
			this->Controls->Add(this->textBoxLastName);
			this->Controls->Add(this->labelInformation);
			this->Name = L"ClientCreation";
			this->Text = L"Création de profil client";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ birthDate;
			birthDate = this->textBoxBirthDateYear->Text + "-" + this->textBoxBirthDateMonth->Text + "-" + this->textBoxBirthDateDay->Text;
			String^ FirstBuy;
			FirstBuy = this->textBoxFirstBuyYear->Text + "-" + this->textBoxFirstBuyMonth->Text + "-" + this->textBoxFirstBuyDay->Text;

			this->_service = gcnew SERVICE::SERV_INSERT(
				"personne",
				"NomPersonne, PrenomPersonne",
				"'"+this->textBoxLastName->Text + "', '" + this->textBoxFirstName->Text + "'"
			);
			this->_service->Insert();
			delete this->_service;
			this->_service = gcnew SERVICE::SERV_INSERT(
				"client",
				"IdPersonne, DateNaissanceClient, DatePremierAchatClient",
				"(SELECT TOP(1) IdPersonne FROM personne WHERE (NomPersonne = '"+this->textBoxLastName->Text+"' AND PrenomPersonne = '"+this->textBoxFirstName->Text+"')), '"+birthDate+"', '"+FirstBuy+"'"
			);
			this->_service->Insert();
			this->Close();
		}

		Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
