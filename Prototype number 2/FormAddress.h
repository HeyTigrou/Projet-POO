#pragma once
#include "SERV_ADDRESS.h"

namespace Prototypenumber2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyFormAddress : public System::Windows::Forms::Form
	{
	public:
		MyFormAddress(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormAddress()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::DataGridView^ dataGridViewAddress;
		System::Windows::Forms::Label^ labelIdAddresses;
		System::Windows::Forms::TextBox^ textBoxIdAddresses;
		System::Windows::Forms::Label^ labelAddress;
		System::Windows::Forms::TextBox^ textBoxAddress;
		System::Windows::Forms::Label^ labelCity;
		System::Windows::Forms::TextBox^ textBoxCity;
		System::Windows::Forms::Label^ labelPostalCode;
		System::Windows::Forms::TextBox^ textBoxPostalCode;
		System::Windows::Forms::Label^ labelIdPerson;
		System::Windows::Forms::TextBox^ textBoxIdPerson;
		System::Windows::Forms::TextBox^ textBoxUsefullInfo;
		System::Windows::Forms::Label^ labelUsefullInfo;
		System::Windows::Forms::Button^ buttonLoadDatabase;
		System::Windows::Forms::Button^ buttonInsertData;
		System::Windows::Forms::Button^ buttonUpdateData;
		System::Windows::Forms::Button^ buttonDeleteData;
		System::Windows::Forms::Button^ buttonBackToMainMenu;
		//Create all database related objects
		DataSet^ _dataSet;
		SERVICE::SERV_ADDRESS^ _SERVICE;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->dataGridViewAddress = (gcnew System::Windows::Forms::DataGridView());
			this->labelIdAddresses = (gcnew System::Windows::Forms::Label());
			this->textBoxIdAddresses = (gcnew System::Windows::Forms::TextBox());
			this->labelAddress = (gcnew System::Windows::Forms::Label());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->labelCity = (gcnew System::Windows::Forms::Label());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->labelPostalCode = (gcnew System::Windows::Forms::Label());
			this->textBoxPostalCode = (gcnew System::Windows::Forms::TextBox());
			this->labelIdPerson = (gcnew System::Windows::Forms::Label());
			this->textBoxIdPerson = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUsefullInfo = (gcnew System::Windows::Forms::TextBox());
			this->labelUsefullInfo = (gcnew System::Windows::Forms::Label());
			this->buttonLoadDatabase = (gcnew System::Windows::Forms::Button());
			this->buttonInsertData = (gcnew System::Windows::Forms::Button());
			this->buttonUpdateData = (gcnew System::Windows::Forms::Button());
			this->buttonDeleteData = (gcnew System::Windows::Forms::Button());
			this->buttonBackToMainMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAddress))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewAddress
			// 
			this->dataGridViewAddress->AllowUserToDeleteRows = false;
			this->dataGridViewAddress->AllowUserToOrderColumns = true;
			this->dataGridViewAddress->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAddress->Location = System::Drawing::Point(12, 12);
			this->dataGridViewAddress->Name = L"dataGridViewAddress";
			this->dataGridViewAddress->ReadOnly = true;
			this->dataGridViewAddress->Size = System::Drawing::Size(541, 150);
			this->dataGridViewAddress->TabIndex = 0;
			// 
			// labelIdAddresses
			// 
			this->labelIdAddresses->AutoSize = true;
			this->labelIdAddresses->Location = System::Drawing::Point(559, 10);
			this->labelIdAddresses->Name = L"labelIdAddresses";
			this->labelIdAddresses->Size = System::Drawing::Size(61, 13);
			this->labelIdAddresses->TabIndex = 1;
			this->labelIdAddresses->Text = L"Id adresses";
			// 
			// textBoxIdAddresses
			// 
			this->textBoxIdAddresses->Location = System::Drawing::Point(562, 27);
			this->textBoxIdAddresses->Name = L"textBoxIdAddresses";
			this->textBoxIdAddresses->Size = System::Drawing::Size(186, 20);
			this->textBoxIdAddresses->TabIndex = 2;
			// 
			// labelAddress
			// 
			this->labelAddress->AutoSize = true;
			this->labelAddress->Location = System::Drawing::Point(559, 55);
			this->labelAddress->Name = L"labelAddress";
			this->labelAddress->Size = System::Drawing::Size(45, 13);
			this->labelAddress->TabIndex = 3;
			this->labelAddress->Text = L"Adresse";
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->Location = System::Drawing::Point(562, 71);
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(186, 20);
			this->textBoxAddress->TabIndex = 4;
			// 
			// labelCity
			// 
			this->labelCity->AutoSize = true;
			this->labelCity->Location = System::Drawing::Point(562, 98);
			this->labelCity->Name = L"labelCity";
			this->labelCity->Size = System::Drawing::Size(26, 13);
			this->labelCity->TabIndex = 5;
			this->labelCity->Text = L"Ville";
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(562, 115);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(186, 20);
			this->textBoxCity->TabIndex = 6;
			// 
			// labelPostalCode
			// 
			this->labelPostalCode->AutoSize = true;
			this->labelPostalCode->Location = System::Drawing::Point(562, 142);
			this->labelPostalCode->Name = L"labelPostalCode";
			this->labelPostalCode->Size = System::Drawing::Size(64, 13);
			this->labelPostalCode->TabIndex = 7;
			this->labelPostalCode->Text = L"Code Postal";
			// 
			// textBoxPostalCode
			// 
			this->textBoxPostalCode->Location = System::Drawing::Point(562, 159);
			this->textBoxPostalCode->Name = L"textBoxPostalCode";
			this->textBoxPostalCode->Size = System::Drawing::Size(186, 20);
			this->textBoxPostalCode->TabIndex = 8;
			// 
			// labelIdPerson
			// 
			this->labelIdPerson->AutoSize = true;
			this->labelIdPerson->Location = System::Drawing::Point(562, 186);
			this->labelIdPerson->Name = L"labelIdPerson";
			this->labelIdPerson->Size = System::Drawing::Size(63, 13);
			this->labelIdPerson->TabIndex = 9;
			this->labelIdPerson->Text = L"Id personne";
			// 
			// textBoxIdPerson
			// 
			this->textBoxIdPerson->Location = System::Drawing::Point(562, 203);
			this->textBoxIdPerson->Name = L"textBoxIdPerson";
			this->textBoxIdPerson->Size = System::Drawing::Size(186, 20);
			this->textBoxIdPerson->TabIndex = 10;
			// 
			// textBoxUsefullInfo
			// 
			this->textBoxUsefullInfo->Location = System::Drawing::Point(12, 246);
			this->textBoxUsefullInfo->Multiline = true;
			this->textBoxUsefullInfo->Name = L"textBoxUsefullInfo";
			this->textBoxUsefullInfo->Size = System::Drawing::Size(736, 38);
			this->textBoxUsefullInfo->TabIndex = 11;
			// 
			// labelUsefullInfo
			// 
			this->labelUsefullInfo->AutoSize = true;
			this->labelUsefullInfo->Location = System::Drawing::Point(12, 227);
			this->labelUsefullInfo->Name = L"labelUsefullInfo";
			this->labelUsefullInfo->Size = System::Drawing::Size(93, 13);
			this->labelUsefullInfo->TabIndex = 13;
			this->labelUsefullInfo->Text = L"Informations Utiles";
			// 
			// buttonLoadDatabase
			// 
			this->buttonLoadDatabase->Location = System::Drawing::Point(12, 169);
			this->buttonLoadDatabase->Name = L"buttonLoadDatabase";
			this->buttonLoadDatabase->Size = System::Drawing::Size(75, 55);
			this->buttonLoadDatabase->TabIndex = 14;
			this->buttonLoadDatabase->Text = L"Charger la base de données";
			this->buttonLoadDatabase->UseVisualStyleBackColor = true;
			this->buttonLoadDatabase->Click += gcnew System::EventHandler(this, &MyFormAddress::buttonLoadDatabase_Click);
			// 
			// buttonInsertData
			// 
			this->buttonInsertData->Location = System::Drawing::Point(94, 169);
			this->buttonInsertData->Name = L"buttonInsertData";
			this->buttonInsertData->Size = System::Drawing::Size(75, 55);
			this->buttonInsertData->TabIndex = 15;
			this->buttonInsertData->Text = L"Inserer des données";
			this->buttonInsertData->UseVisualStyleBackColor = true;
			this->buttonInsertData->Click += gcnew System::EventHandler(this, &MyFormAddress::buttonInsertData_Click);
			// 
			// buttonUpdateData
			// 
			this->buttonUpdateData->Location = System::Drawing::Point(176, 169);
			this->buttonUpdateData->Name = L"buttonUpdateData";
			this->buttonUpdateData->Size = System::Drawing::Size(75, 55);
			this->buttonUpdateData->TabIndex = 16;
			this->buttonUpdateData->Text = L"Modifier des données";
			this->buttonUpdateData->UseVisualStyleBackColor = true;
			this->buttonUpdateData->Click += gcnew System::EventHandler(this, &MyFormAddress::buttonUpdateData_Click);
			// 
			// buttonDeleteData
			// 
			this->buttonDeleteData->Location = System::Drawing::Point(258, 169);
			this->buttonDeleteData->Name = L"buttonDeleteData";
			this->buttonDeleteData->Size = System::Drawing::Size(75, 56);
			this->buttonDeleteData->TabIndex = 17;
			this->buttonDeleteData->Text = L"Supprimer des données";
			this->buttonDeleteData->UseVisualStyleBackColor = true;
			this->buttonDeleteData->Click += gcnew System::EventHandler(this, &MyFormAddress::buttonDeleteData_Click);
			// 
			// buttonBackToMainMenu
			// 
			this->buttonBackToMainMenu->Location = System::Drawing::Point(12, 291);
			this->buttonBackToMainMenu->Name = L"buttonBackToMainMenu";
			this->buttonBackToMainMenu->Size = System::Drawing::Size(736, 23);
			this->buttonBackToMainMenu->TabIndex = 18;
			this->buttonBackToMainMenu->Text = L"Revenir au menu principal";
			this->buttonBackToMainMenu->UseVisualStyleBackColor = true;
			this->buttonBackToMainMenu->Click += gcnew System::EventHandler(this, &MyFormAddress::buttonBackToMainMenu_Click);
			// 
			// MyFormAddress
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 320);
			this->Controls->Add(this->buttonBackToMainMenu);
			this->Controls->Add(this->buttonDeleteData);
			this->Controls->Add(this->buttonUpdateData);
			this->Controls->Add(this->buttonInsertData);
			this->Controls->Add(this->buttonLoadDatabase);
			this->Controls->Add(this->labelUsefullInfo);
			this->Controls->Add(this->textBoxUsefullInfo);
			this->Controls->Add(this->textBoxIdPerson);
			this->Controls->Add(this->labelIdPerson);
			this->Controls->Add(this->textBoxPostalCode);
			this->Controls->Add(this->labelPostalCode);
			this->Controls->Add(this->textBoxCity);
			this->Controls->Add(this->labelCity);
			this->Controls->Add(this->textBoxAddress);
			this->Controls->Add(this->labelAddress);
			this->Controls->Add(this->textBoxIdAddresses);
			this->Controls->Add(this->labelIdAddresses);
			this->Controls->Add(this->dataGridViewAddress);
			this->Name = L"MyFormAddress";
			this->Text = L"Adresses";
			this->Load += gcnew System::EventHandler(this, &MyFormAddress::MyFormAddressLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAddress))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void refresh(void)
		{
			//On refresh la dataGrid
			this->dataGridViewAddress->Refresh();
			this->_dataSet = this->_SERVICE->loadDatabase();
			this->dataGridViewAddress->DataSource = this->_dataSet;
			this->dataGridViewAddress->DataMember = "Adresses";
		}

		Void MyFormAddressLoad(System::Object^ sender, System::EventArgs^ e)
		{
			this->_SERVICE = gcnew SERVICE::SERV_ADDRESS();
			this->_dataSet = gcnew Data::DataSet();
		}

		Void buttonLoadDatabase_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->dataGridViewAddress->Refresh();
			this->_dataSet = this->_SERVICE->loadDatabase();
			this->dataGridViewAddress->DataSource = this->_dataSet;
			this->dataGridViewAddress->DataMember = "Adresses";
			this->textBoxUsefullInfo->Text = "Base de données chargée";
		}

		Void buttonInsertData_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (this->textBoxAddress->Text == "" || this->textBoxCity->Text == "" || this->textBoxPostalCode->Text == "" || this->textBoxIdPerson->Text == "")
			{
				this->textBoxUsefullInfo->Text = "Veuillez remplir tout les champs : Adresse / Ville / Code Postal / Id personne";
			}
			else
			{
				this->_SERVICE->addData(this->textBoxAddress->Text, this->textBoxCity->Text, Convert::ToInt32(this->textBoxPostalCode->Text), Convert::ToInt32(this->textBoxIdPerson->Text));
				this->textBoxUsefullInfo->Text = "Données insérées dans la base de données";
				this->textBoxAddress->Clear();
				this->textBoxCity->Clear();
				this->textBoxPostalCode->Clear();
				this->textBoxIdPerson->Clear();
			}
			refresh();
		}

		Void buttonDeleteData_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (this->textBoxIdAddresses->Text == "")
			{
				this->textBoxUsefullInfo->Text = "Veuillez remplir tout les champs : Id _adresses "; 
			}
			else
			{
				this->_SERVICE->deleteData(Convert::ToInt32(this->textBoxIdAddresses->Text));
				this->textBoxUsefullInfo->Text = "Données supprimées de la base de données";
				this->textBoxIdAddresses->Clear();
			}
			refresh();
		}
		Void buttonUpdateData_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (this->textBoxAddress->Text == "" || this->textBoxCity->Text == "" || this->textBoxPostalCode->Text == "" || this->textBoxIdPerson->Text == "" || this->textBoxIdAddresses->Text == "")
			{
				this->textBoxUsefullInfo->Text = "Veuillez remplir tout les champs : Id adresses / Adresse / Ville / Code Postal / Id personne";
			}
			else
			{
				this->_SERVICE->updateData(Convert::ToInt32(this->textBoxIdAddresses->Text), this->textBoxAddress->Text, this->textBoxCity->Text, Convert::ToInt32(this->textBoxPostalCode->Text), Convert::ToInt32(this->textBoxIdPerson->Text));
				this->textBoxUsefullInfo->Text = "Données modifiées dans la base de données";
				this->textBoxIdAddresses->Clear();
				this->textBoxAddress->Clear();
				this->textBoxCity->Clear();
				this->textBoxPostalCode->Clear();
				this->textBoxIdPerson->Clear();
			}
			refresh();
		}
		
		Void buttonBackToMainMenu_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
