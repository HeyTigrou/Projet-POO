#pragma once
#include "SERV_UPDATE.h"
#include "SERV_SHOW.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class ClientUpdate : public System::Windows::Forms::Form
	{
	public:
		ClientUpdate(int id)
		{
			InitializeComponent();
			this->idPerson = id;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~ClientUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		int idPerson = 1;
		SERVICE::SERV_UPDATE^ _serviceUpdate;
		SERVICE::SERV_SHOW^ _serviceShow1;
		SERVICE::SERV_SHOW^ _serviceShow2;
		SERVICE::SERV_SHOW^ _serviceShow3;
		SERVICE::SERV_SHOW^ _serviceShow4;

		System::Windows::Forms::Button^ buttonCancel;
		System::Windows::Forms::Button^ buttonConfirm;
		System::Windows::Forms::TextBox^ textBoxBirthDate;



		System::Windows::Forms::Label^ labelBirthDate;
		System::Windows::Forms::TextBox^ textBoxFirstName;
		System::Windows::Forms::Label^ labelFirstName;
		System::Windows::Forms::Label^ labelLastName;
		System::Windows::Forms::TextBox^ textBoxLastName;
		System::Windows::Forms::Label^ labelInformation;
		System::Windows::Forms::TextBox^ textBoxFirstBuy;
		System::Windows::Forms::Label^ labelFirstBuy;


		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code>
		void InitializeComponent(void)
		{
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->textBoxBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->labelBirthDate = (gcnew System::Windows::Forms::Label());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->labelInformation = (gcnew System::Windows::Forms::Label());
			this->textBoxFirstBuy = (gcnew System::Windows::Forms::TextBox());
			this->labelFirstBuy = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(210, 227);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(120, 23);
			this->buttonCancel->TabIndex = 27;
			this->buttonCancel->Text = L"Annuler";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &ClientUpdate::buttonCancel_Click);
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(16, 227);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(188, 23);
			this->buttonConfirm->TabIndex = 26;
			this->buttonConfirm->Text = L"Confirmer les modifications\r\n";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &ClientUpdate::buttonConfirm_Click);
			// 
			// textBoxBirthDate
			// 
			this->textBoxBirthDate->Location = System::Drawing::Point(16, 150);
			this->textBoxBirthDate->MaxLength = 10;
			this->textBoxBirthDate->Name = L"textBoxBirthDate";
			this->textBoxBirthDate->Size = System::Drawing::Size(314, 20);
			this->textBoxBirthDate->TabIndex = 23;
			// 
			// labelBirthDate
			// 
			this->labelBirthDate->AutoSize = true;
			this->labelBirthDate->Location = System::Drawing::Point(16, 134);
			this->labelBirthDate->Name = L"labelBirthDate";
			this->labelBirthDate->Size = System::Drawing::Size(226, 13);
			this->labelBirthDate->TabIndex = 22;
			this->labelBirthDate->Text = L"Date de naissance au format : JJ - MM - AAAA\r\n";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(16, 111);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(314, 20);
			this->textBoxFirstName->TabIndex = 21;
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(13, 95);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(43, 13);
			this->labelFirstName->TabIndex = 20;
			this->labelFirstName->Text = L"Prénom";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(13, 56);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(29, 13);
			this->labelLastName->TabIndex = 19;
			this->labelLastName->Text = L"Nom";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(16, 72);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(314, 20);
			this->textBoxLastName->TabIndex = 18;
			// 
			// labelInformation
			// 
			this->labelInformation->AutoSize = true;
			this->labelInformation->Location = System::Drawing::Point(13, 11);
			this->labelInformation->Name = L"labelInformation";
			this->labelInformation->Size = System::Drawing::Size(325, 26);
			this->labelInformation->TabIndex = 17;
			this->labelInformation->Text = L"Les champs ci-dessous ont été chargés avec les valeurs actuelles, \r\nvous pouvez d"
				L"irectement les modifier";
			// 
			// textBoxFirstBuy
			// 
			this->textBoxFirstBuy->Location = System::Drawing::Point(16, 198);
			this->textBoxFirstBuy->MaxLength = 10;
			this->textBoxFirstBuy->Name = L"textBoxFirstBuy";
			this->textBoxFirstBuy->Size = System::Drawing::Size(314, 20);
			this->textBoxFirstBuy->TabIndex = 29;
			// 
			// labelFirstBuy
			// 
			this->labelFirstBuy->AutoSize = true;
			this->labelFirstBuy->Location = System::Drawing::Point(16, 182);
			this->labelFirstBuy->Name = L"labelFirstBuy";
			this->labelFirstBuy->Size = System::Drawing::Size(226, 13);
			this->labelFirstBuy->TabIndex = 28;
			this->labelFirstBuy->Text = L"Date de naissance au format : JJ - MM - AAAA\r\n";
			// 
			// ClientUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 262);
			this->Controls->Add(this->textBoxFirstBuy);
			this->Controls->Add(this->labelFirstBuy);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->textBoxBirthDate);
			this->Controls->Add(this->labelBirthDate);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->labelFirstName);
			this->Controls->Add(this->labelLastName);
			this->Controls->Add(this->textBoxLastName);
			this->Controls->Add(this->labelInformation);
			this->Name = L"ClientUpdate";
			this->Text = L"Modification d\'un profil client";
			this->Load += gcnew System::EventHandler(this, &ClientUpdate::ClientUpdate_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->_serviceUpdate = gcnew SERVICE::SERV_UPDATE(
				"personne",
				"NomPersonne = '" + this->textBoxLastName->Text + "', PrenomPersonne = '" + this->textBoxFirstName->Text + "'",
				"IdPersonne = " + Convert::ToString(idPerson)
			);
			this->_serviceUpdate->Update();
			delete this->_serviceUpdate;
			this->_serviceUpdate = gcnew SERVICE::SERV_UPDATE(
				"client",
				"DateNaissanceClient = '"+this->textBoxBirthDate->Text+"', DatePremierAchatClient = '"+this->textBoxFirstBuy->Text+"'",
				"IdPersonne = " + Convert::ToString(idPerson)
			);
			this->_serviceUpdate->Update();
			this->Close();
		}

		Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}
		
		Void ClientUpdate_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_serviceShow1 = gcnew SERVICE::SERV_SHOW("personne", idPerson-1, 1);
			this->_serviceShow2 = gcnew SERVICE::SERV_SHOW("personne", idPerson-1, 2);
			this->_serviceShow3 = gcnew SERVICE::SERV_SHOW("client", idPerson-1, 1);
			this->_serviceShow4 = gcnew SERVICE::SERV_SHOW("client", idPerson-1, 2);

			this->textBoxLastName->Text = this->_serviceShow1->Show();
			this->textBoxFirstName->Text = this->_serviceShow2->Show();

			String^ birthdate = this->_serviceShow3->Show();
			birthdate = birthdate->Substring(0, 10);
			this->textBoxBirthDate->Text = birthdate;

			String^ firstbuy = this->_serviceShow4->Show();
			firstbuy = firstbuy->Substring(0, 10);
			this->textBoxFirstBuy->Text = firstbuy;
		}
	};
}
