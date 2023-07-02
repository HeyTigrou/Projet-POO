#pragma once
#include "ClientShow.h"
#include "SERV_SEARCH.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ClientSearchAffichage : public System::Windows::Forms::Form
	{
	public:
		ClientSearchAffichage(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:

		~ClientSearchAffichage()
		{
			if (components)
			{
				delete components;
			}
		}
	private :
		DataSet^ _dataSet;
		SERVICE::SERV_SEARCH^ _service;

		System::Windows::Forms::GroupBox^ groupBoxSearchMode;
		System::Windows::Forms::Label^ labelInfo;
		System::Windows::Forms::RadioButton^ radioButtonIdChoice;
		System::Windows::Forms::RadioButton^ radioButtonLastNameChoice;
		System::Windows::Forms::TextBox^ textBoxSearch;
		System::Windows::Forms::Button^ buttonSearch;
		System::Windows::Forms::DataGridView^ dataGridViewClientsSearch;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::TextBox^ textBoxFinalChoice;
		System::Windows::Forms::Button^ buttonCancel;
		System::Windows::Forms::Button^ buttonConfirm;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->groupBoxSearchMode = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonIdChoice = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonLastNameChoice = (gcnew System::Windows::Forms::RadioButton());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->dataGridViewClientsSearch = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxFinalChoice = (gcnew System::Windows::Forms::TextBox());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->groupBoxSearchMode->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClientsSearch))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBoxSearchMode
			// 
			this->groupBoxSearchMode->Controls->Add(this->radioButtonIdChoice);
			this->groupBoxSearchMode->Controls->Add(this->radioButtonLastNameChoice);
			this->groupBoxSearchMode->Location = System::Drawing::Point(458, 12);
			this->groupBoxSearchMode->Name = L"groupBoxSearchMode";
			this->groupBoxSearchMode->Size = System::Drawing::Size(200, 74);
			this->groupBoxSearchMode->TabIndex = 0;
			this->groupBoxSearchMode->TabStop = false;
			this->groupBoxSearchMode->Text = L"Choix du mode de recherche";
			// 
			// radioButtonIdChoice
			// 
			this->radioButtonIdChoice->AutoSize = true;
			this->radioButtonIdChoice->Location = System::Drawing::Point(7, 44);
			this->radioButtonIdChoice->Name = L"radioButtonIdChoice";
			this->radioButtonIdChoice->Size = System::Drawing::Size(83, 17);
			this->radioButtonIdChoice->TabIndex = 1;
			this->radioButtonIdChoice->TabStop = true;
			this->radioButtonIdChoice->Text = L"Par ID client";
			this->radioButtonIdChoice->UseVisualStyleBackColor = true;
			// 
			// radioButtonLastNameChoice
			// 
			this->radioButtonLastNameChoice->AutoSize = true;
			this->radioButtonLastNameChoice->Location = System::Drawing::Point(7, 20);
			this->radioButtonLastNameChoice->Name = L"radioButtonLastNameChoice";
			this->radioButtonLastNameChoice->Size = System::Drawing::Size(66, 17);
			this->radioButtonLastNameChoice->TabIndex = 0;
			this->radioButtonLastNameChoice->TabStop = true;
			this->radioButtonLastNameChoice->Text = L"Par Nom";
			this->radioButtonLastNameChoice->UseVisualStyleBackColor = true;
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(13, 12);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(205, 26);
			this->labelInfo->TabIndex = 1;
			this->labelInfo->Text = L"Rentrez votre paramètre de recherche en \r\nfonction du mode choisi :";
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(16, 41);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(154, 20);
			this->textBoxSearch->TabIndex = 2;
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(177, 41);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(71, 20);
			this->buttonSearch->TabIndex = 3;
			this->buttonSearch->Text = L"rechercher";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &ClientSearchAffichage::buttonSearch_Click);
			// 
			// dataGridViewClientsSearch
			// 
			this->dataGridViewClientsSearch->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClientsSearch->Location = System::Drawing::Point(13, 68);
			this->dataGridViewClientsSearch->Name = L"dataGridViewClientsSearch";
			this->dataGridViewClientsSearch->Size = System::Drawing::Size(439, 181);
			this->dataGridViewClientsSearch->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(458, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Quel est l\'ID client de la personne que vous \r\nvoulez afficher \?";
			// 
			// textBoxFinalChoice
			// 
			this->textBoxFinalChoice->Location = System::Drawing::Point(458, 123);
			this->textBoxFinalChoice->Name = L"textBoxFinalChoice";
			this->textBoxFinalChoice->Size = System::Drawing::Size(200, 20);
			this->textBoxFinalChoice->TabIndex = 6;
			this->textBoxFinalChoice->Text = L"1";
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(459, 219);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(199, 29);
			this->buttonCancel->TabIndex = 7;
			this->buttonCancel->Text = L"Annuler";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &ClientSearchAffichage::buttonCancel_Click);
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(458, 184);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(199, 29);
			this->buttonConfirm->TabIndex = 8;
			this->buttonConfirm->Text = L"Confirmer";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &ClientSearchAffichage::buttonConfirm_Click);
			// 
			// ClientSearchAffichage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 261);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->textBoxFinalChoice);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewClientsSearch);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->groupBoxSearchMode);
			this->Name = L"ClientSearchAffichage";
			this->Text = L"Recherche du client à afficher";
			this->Load += gcnew System::EventHandler(this, &ClientSearchAffichage::ClientSearchAffichage_Load);
			this->groupBoxSearchMode->ResumeLayout(false);
			this->groupBoxSearchMode->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClientsSearch))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->labelInfo->Text = L"Rentrez votre paramètre de recherche en \r\nfonction du mode choisi :";
			if (radioButtonIdChoice->Checked == true)
			{
				if (this->textBoxSearch->Text != "")
				{
					this->dataGridViewClientsSearch->Refresh();
					this->_service = gcnew SERVICE::SERV_SEARCH("NomPersonne, PrenomPersonne, DateNaissanceClient", "([DB_INFORMAPPERV1].[dbo].[personne] INNER JOIN [DB_INFORMAPPERV1].[dbo].[client] ON personne.IdPersonne = client.IdPersonne)", "personne.IdPersonne", "=" + this->textBoxSearch->Text);
					this->_dataSet = this->_service->loadDatabase();
					this->dataGridViewClientsSearch->DataSource = this->_dataSet;
					this->dataGridViewClientsSearch->DataMember = "NomPersonne, PrenomPersonne, DateNaissanceClient";
				}
				else
				{
					this->labelInfo->Text += " (veuillez rentrer un id s'il vous plait)";
				}
			}
			
			if (radioButtonLastNameChoice->Checked == true)
			{
				this->dataGridViewClientsSearch->Refresh();
				this->_service = gcnew SERVICE::SERV_SEARCH("NomPersonne, PrenomPersonne, DateNaissanceClient", "([DB_INFORMAPPERV1].[dbo].[personne] INNER JOIN [DB_INFORMAPPERV1].[dbo].[client] ON personne.IdPersonne = client.IdPersonne)", "personne.NomPersonne", " LIKE '"+this->textBoxSearch->Text+"%'"); 
				this->_dataSet = this->_service->loadDatabase();
				this->dataGridViewClientsSearch->DataSource = this->_dataSet;
				this->dataGridViewClientsSearch->DataMember = "NomPersonne, PrenomPersonne, DateNaissanceClient";
			}
		}

		Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			int idPerson;
			if (this->textBoxFinalChoice->Text != "")
			{
				idPerson = Convert::ToInt32(this->textBoxFinalChoice->Text);
				ClientShow^ nextForm = gcnew ClientShow(idPerson);
				this->Hide();
				nextForm->ShowDialog();
				this->Close();
			}
			else
			{
				this->label1->Text = "(Veuillez rentrer un id s'il vous plait)";
			}
		}

		Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
		
		Void ClientSearchAffichage_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_dataSet = gcnew Data::DataSet();
		}
	};
}
