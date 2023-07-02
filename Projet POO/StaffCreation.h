#pragma once
#include "SERV_INSERT.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StaffCreation : public System::Windows::Forms::Form
	{
	public:
		StaffCreation(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StaffCreation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		SERVICE::SERV_INSERT^ _service;

		System::Windows::Forms::Label^ labelInformation;
		System::Windows::Forms::TextBox^ textBoxFirstName;
		System::Windows::Forms::Label^ labelFirstName;
		System::Windows::Forms::Label^ labelLastName;
		System::Windows::Forms::TextBox^ textBoxLastName;
		System::Windows::Forms::TextBox^ textBoxEmployementDateYear;
		System::Windows::Forms::TextBox^ textBoxEmployementDateMonth;
		System::Windows::Forms::TextBox^ textBoxEmployementDateDay;
		System::Windows::Forms::Label^ labelBirthDate;
		System::Windows::Forms::Label^ labelAddress;
		System::Windows::Forms::TextBox^ textBoxAddress;
		System::Windows::Forms::Label^ labelCity;
		System::Windows::Forms::TextBox^ textBoxCity;
		System::Windows::Forms::Label^ labelPostalCode;
		System::Windows::Forms::TextBox^ textBoxPostalCode;
		System::Windows::Forms::Button^ buttonCancel;
		System::Windows::Forms::Button^ buttonConfirm;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelInformation = (gcnew System::Windows::Forms::Label());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmployementDateYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmployementDateMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmployementDateDay = (gcnew System::Windows::Forms::TextBox());
			this->labelBirthDate = (gcnew System::Windows::Forms::Label());
			this->labelAddress = (gcnew System::Windows::Forms::Label());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->labelCity = (gcnew System::Windows::Forms::Label());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->labelPostalCode = (gcnew System::Windows::Forms::Label());
			this->textBoxPostalCode = (gcnew System::Windows::Forms::TextBox());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelInformation
			// 
			this->labelInformation->AutoSize = true;
			this->labelInformation->Location = System::Drawing::Point(12, 9);
			this->labelInformation->Name = L"labelInformation";
			this->labelInformation->Size = System::Drawing::Size(191, 13);
			this->labelInformation->TabIndex = 1;
			this->labelInformation->Text = L"Veuillez remplir les champs ci-dessous :";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(15, 85);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(269, 20);
			this->textBoxFirstName->TabIndex = 8;
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(15, 68);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(43, 13);
			this->labelFirstName->TabIndex = 7;
			this->labelFirstName->Text = L"Prénom";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(12, 25);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(29, 13);
			this->labelLastName->TabIndex = 6;
			this->labelLastName->Text = L"Nom";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(15, 41);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(269, 20);
			this->textBoxLastName->TabIndex = 5;
			// 
			// textBoxEmployementDateYear
			// 
			this->textBoxEmployementDateYear->Location = System::Drawing::Point(147, 128);
			this->textBoxEmployementDateYear->MaxLength = 4;
			this->textBoxEmployementDateYear->Name = L"textBoxEmployementDateYear";
			this->textBoxEmployementDateYear->Size = System::Drawing::Size(137, 20);
			this->textBoxEmployementDateYear->TabIndex = 15;
			// 
			// textBoxEmployementDateMonth
			// 
			this->textBoxEmployementDateMonth->Location = System::Drawing::Point(81, 128);
			this->textBoxEmployementDateMonth->MaxLength = 2;
			this->textBoxEmployementDateMonth->Name = L"textBoxEmployementDateMonth";
			this->textBoxEmployementDateMonth->Size = System::Drawing::Size(60, 20);
			this->textBoxEmployementDateMonth->TabIndex = 14;
			// 
			// textBoxEmployementDateDay
			// 
			this->textBoxEmployementDateDay->Location = System::Drawing::Point(15, 128);
			this->textBoxEmployementDateDay->MaxLength = 2;
			this->textBoxEmployementDateDay->Name = L"textBoxEmployementDateDay";
			this->textBoxEmployementDateDay->Size = System::Drawing::Size(60, 20);
			this->textBoxEmployementDateDay->TabIndex = 13;
			// 
			// labelBirthDate
			// 
			this->labelBirthDate->AutoSize = true;
			this->labelBirthDate->Location = System::Drawing::Point(15, 112);
			this->labelBirthDate->Name = L"labelBirthDate";
			this->labelBirthDate->Size = System::Drawing::Size(221, 13);
			this->labelBirthDate->TabIndex = 12;
			this->labelBirthDate->Text = L"Date d\'embauche au format : JJ - MM - AAAA\r\n";
			// 
			// labelAddress
			// 
			this->labelAddress->AutoSize = true;
			this->labelAddress->Location = System::Drawing::Point(12, 151);
			this->labelAddress->Name = L"labelAddress";
			this->labelAddress->Size = System::Drawing::Size(51, 13);
			this->labelAddress->TabIndex = 16;
			this->labelAddress->Text = L"Addresse";
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->Location = System::Drawing::Point(15, 167);
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(269, 20);
			this->textBoxAddress->TabIndex = 17;
			// 
			// labelCity
			// 
			this->labelCity->AutoSize = true;
			this->labelCity->Location = System::Drawing::Point(12, 190);
			this->labelCity->Name = L"labelCity";
			this->labelCity->Size = System::Drawing::Size(26, 13);
			this->labelCity->TabIndex = 18;
			this->labelCity->Text = L"Ville";
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(15, 206);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(269, 20);
			this->textBoxCity->TabIndex = 19;
			// 
			// labelPostalCode
			// 
			this->labelPostalCode->AutoSize = true;
			this->labelPostalCode->Location = System::Drawing::Point(12, 229);
			this->labelPostalCode->Name = L"labelPostalCode";
			this->labelPostalCode->Size = System::Drawing::Size(64, 13);
			this->labelPostalCode->TabIndex = 20;
			this->labelPostalCode->Text = L"Code Postal";
			// 
			// textBoxPostalCode
			// 
			this->textBoxPostalCode->Location = System::Drawing::Point(15, 245);
			this->textBoxPostalCode->Name = L"textBoxPostalCode";
			this->textBoxPostalCode->Size = System::Drawing::Size(269, 20);
			this->textBoxPostalCode->TabIndex = 21;
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(209, 274);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 23;
			this->buttonCancel->Text = L"Annuler";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &StaffCreation::buttonCancel_Click);
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(15, 274);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(188, 23);
			this->buttonConfirm->TabIndex = 22;
			this->buttonConfirm->Text = L"Confirmer les informations ci-dessus";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &StaffCreation::buttonConfirm_Click);
			// 
			// StaffCreation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 309);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->textBoxPostalCode);
			this->Controls->Add(this->labelPostalCode);
			this->Controls->Add(this->textBoxCity);
			this->Controls->Add(this->labelCity);
			this->Controls->Add(this->textBoxAddress);
			this->Controls->Add(this->labelAddress);
			this->Controls->Add(this->textBoxEmployementDateYear);
			this->Controls->Add(this->textBoxEmployementDateMonth);
			this->Controls->Add(this->textBoxEmployementDateDay);
			this->Controls->Add(this->labelBirthDate);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->labelFirstName);
			this->Controls->Add(this->labelLastName);
			this->Controls->Add(this->textBoxLastName);
			this->Controls->Add(this->labelInformation);
			this->Name = L"StaffCreation";
			this->Text = L"Création du profil personnel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ birthDate;
			birthDate = this->textBoxEmployementDateYear->Text + "-" + this->textBoxEmployementDateMonth->Text + "-" + this->textBoxEmployementDateDay->Text;
			this->_service = gcnew SERVICE::SERV_INSERT(
				"Table",
				"Colonnes",
				this->textBoxLastName->Text + ", " + this->textBoxFirstName->Text + ", " + birthDate +", " + this->textBoxAddress->Text+", " + this->textBoxCity->Text + ", " + this->textBoxPostalCode->Text	
			);
			//this->_service->Insert();
			this->Close();
		}
		Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
