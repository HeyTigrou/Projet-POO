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

	public ref class StaffUpdate : public System::Windows::Forms::Form
	{
	public:
		StaffUpdate(int id)
		{
			InitializeComponent();
			this->idStaff = id;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StaffUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private:  
		int idStaff = 1;
		SERVICE::SERV_UPDATE^ _serviceUpdate;
		SERVICE::SERV_SHOW^ _serviceShow1;
		SERVICE::SERV_SHOW^ _serviceShow2;
		SERVICE::SERV_SHOW^ _serviceShow3;
		SERVICE::SERV_SHOW^ _serviceShow4;
		SERVICE::SERV_SHOW^ _serviceShow5;

		System::Windows::Forms::Label^ labelInformation;
		System::Windows::Forms::Button^ buttonCancel;
		System::Windows::Forms::Button^ buttonConfirm;
		System::Windows::Forms::TextBox^ textBoxPostalCode;
		System::Windows::Forms::Label^ labelPostalCode;
		System::Windows::Forms::TextBox^ textBoxCity;
		System::Windows::Forms::Label^ labelCity;
		System::Windows::Forms::TextBox^ textBoxAddress;
		System::Windows::Forms::Label^ labelAddress;
		System::Windows::Forms::TextBox^ textBoxFirstName;
		System::Windows::Forms::Label^ labelFirstName;
		System::Windows::Forms::Label^ labelLastName;
		System::Windows::Forms::TextBox^ textBoxLastName;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelInformation = (gcnew System::Windows::Forms::Label());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->textBoxPostalCode = (gcnew System::Windows::Forms::TextBox());
			this->labelPostalCode = (gcnew System::Windows::Forms::Label());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->labelCity = (gcnew System::Windows::Forms::Label());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->labelAddress = (gcnew System::Windows::Forms::Label());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// labelInformation
			// 
			this->labelInformation->AutoSize = true;
			this->labelInformation->Location = System::Drawing::Point(5, 9);
			this->labelInformation->Name = L"labelInformation";
			this->labelInformation->Size = System::Drawing::Size(325, 26);
			this->labelInformation->TabIndex = 18;
			this->labelInformation->Text = L"Les champs ci-dessous ont été chargés avec les valeurs actuelles, \r\nvous pouvez d"
				L"irectement les modifier";
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(202, 248);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(128, 23);
			this->buttonCancel->TabIndex = 40;
			this->buttonCancel->Text = L"Annuler";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &StaffUpdate::buttonCancel_Click);
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(8, 248);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(188, 23);
			this->buttonConfirm->TabIndex = 39;
			this->buttonConfirm->Text = L"Confirmer les informations ci-dessus";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &StaffUpdate::buttonConfirm_Click);
			// 
			// textBoxPostalCode
			// 
			this->textBoxPostalCode->Location = System::Drawing::Point(8, 219);
			this->textBoxPostalCode->Name = L"textBoxPostalCode";
			this->textBoxPostalCode->Size = System::Drawing::Size(322, 20);
			this->textBoxPostalCode->TabIndex = 38;
			// 
			// labelPostalCode
			// 
			this->labelPostalCode->AutoSize = true;
			this->labelPostalCode->Location = System::Drawing::Point(5, 203);
			this->labelPostalCode->Name = L"labelPostalCode";
			this->labelPostalCode->Size = System::Drawing::Size(64, 13);
			this->labelPostalCode->TabIndex = 37;
			this->labelPostalCode->Text = L"Code Postal";
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(8, 180);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(322, 20);
			this->textBoxCity->TabIndex = 36;
			// 
			// labelCity
			// 
			this->labelCity->AutoSize = true;
			this->labelCity->Location = System::Drawing::Point(5, 164);
			this->labelCity->Name = L"labelCity";
			this->labelCity->Size = System::Drawing::Size(26, 13);
			this->labelCity->TabIndex = 35;
			this->labelCity->Text = L"Ville";
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->Location = System::Drawing::Point(8, 141);
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(322, 20);
			this->textBoxAddress->TabIndex = 34;
			// 
			// labelAddress
			// 
			this->labelAddress->AutoSize = true;
			this->labelAddress->Location = System::Drawing::Point(5, 125);
			this->labelAddress->Name = L"labelAddress";
			this->labelAddress->Size = System::Drawing::Size(51, 13);
			this->labelAddress->TabIndex = 33;
			this->labelAddress->Text = L"Addresse";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(8, 100);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(322, 20);
			this->textBoxFirstName->TabIndex = 28;
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(8, 83);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(43, 13);
			this->labelFirstName->TabIndex = 27;
			this->labelFirstName->Text = L"Prénom";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(5, 40);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(29, 13);
			this->labelLastName->TabIndex = 26;
			this->labelLastName->Text = L"Nom";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(8, 56);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(322, 20);
			this->textBoxLastName->TabIndex = 25;
			// 
			// StaffUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 279);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->textBoxPostalCode);
			this->Controls->Add(this->labelPostalCode);
			this->Controls->Add(this->textBoxCity);
			this->Controls->Add(this->labelCity);
			this->Controls->Add(this->textBoxAddress);
			this->Controls->Add(this->labelAddress);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->labelFirstName);
			this->Controls->Add(this->labelLastName);
			this->Controls->Add(this->textBoxLastName);
			this->Controls->Add(this->labelInformation);
			this->Name = L"StaffUpdate";
			this->Text = L"Modification du profil personnel";
			this->Load += gcnew System::EventHandler(this, &StaffUpdate::StaffUpdate_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void StaffUpdate_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_serviceShow1 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 1);
			this->_serviceShow2 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 2);
			this->_serviceShow3 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 3);
			this->_serviceShow4 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 4);
			this->_serviceShow5 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 5);

			//this->textBoxLastName->Text = this->_serviceShow1->Show();
			//this->textBoxFirstName->Text = this->_serviceShow2->Show();
			//this->textBoxAddress->Text = this->_serviceShow3->Show();
			//this->textBoxCity->Text = this->_serviceShow4->Show();
			//this->textBoxPostalCode->Text = this->_serviceShow5->Show();
		}
		Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_serviceUpdate = gcnew SERVICE::SERV_UPDATE(
				"",
				"",
				""
			);
			//this->_service->Update();
			this->Close();
		}
		Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
