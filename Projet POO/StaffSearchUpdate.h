#pragma once
#include "StaffUpdate.h"
#include "SERV_SEARCH.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StaffSearchUpdate : public System::Windows::Forms::Form
	{
	public:
		StaffSearchUpdate(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StaffSearchUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private :
		DataSet^ _dataSet;
		SERVICE::SERV_SEARCH^ _service;

		System::Windows::Forms::Label^ labelInfo;
		System::Windows::Forms::TextBox^ textBoxSearch;
		System::Windows::Forms::Button^ buttonSearch;
		System::Windows::Forms::DataGridView^ dataGridViewStaffSearch;
		System::Windows::Forms::Label^ labelQuestion;
		System::Windows::Forms::TextBox^ textBoxFinalChoice;
		System::Windows::Forms::Button^ buttonCancel;
		System::Windows::Forms::Button^ buttonConfirm;
		System::Windows::Forms::RadioButton^ radioButtonLastNameChoice;
		System::Windows::Forms::RadioButton^ radioButtonIdChoice;
		System::Windows::Forms::GroupBox^ groupBoxSearchMode;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->dataGridViewStaffSearch = (gcnew System::Windows::Forms::DataGridView());
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->textBoxFinalChoice = (gcnew System::Windows::Forms::TextBox());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->radioButtonLastNameChoice = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonIdChoice = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxSearchMode = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStaffSearch))->BeginInit();
			this->groupBoxSearchMode->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(5, 12);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(205, 26);
			this->labelInfo->TabIndex = 19;
			this->labelInfo->Text = L"Rentrez votre paramètre de recherche en \r\nfonction du mode choisi :";
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(8, 41);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(154, 20);
			this->textBoxSearch->TabIndex = 20;
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(169, 41);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(71, 20);
			this->buttonSearch->TabIndex = 21;
			this->buttonSearch->Text = L"rechercher";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &StaffSearchUpdate::buttonSearch_Click);
			// 
			// dataGridViewStaffSearch
			// 
			this->dataGridViewStaffSearch->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStaffSearch->Location = System::Drawing::Point(5, 68);
			this->dataGridViewStaffSearch->Name = L"dataGridViewStaffSearch";
			this->dataGridViewStaffSearch->Size = System::Drawing::Size(446, 181);
			this->dataGridViewStaffSearch->TabIndex = 22;
			// 
			// labelQuestion
			// 
			this->labelQuestion->AutoSize = true;
			this->labelQuestion->Location = System::Drawing::Point(458, 93);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(210, 26);
			this->labelQuestion->TabIndex = 23;
			this->labelQuestion->Text = L"Quel est l\'ID personnel de la personne que \r\nvous voulez modifier \?";
			// 
			// textBoxFinalChoice
			// 
			this->textBoxFinalChoice->Location = System::Drawing::Point(457, 122);
			this->textBoxFinalChoice->Name = L"textBoxFinalChoice";
			this->textBoxFinalChoice->Size = System::Drawing::Size(200, 20);
			this->textBoxFinalChoice->TabIndex = 24;
			this->textBoxFinalChoice->Text = L"1";
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(459, 219);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(199, 29);
			this->buttonCancel->TabIndex = 25;
			this->buttonCancel->Text = L"Annuler";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &StaffSearchUpdate::buttonCancel_Click);
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(458, 184);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(199, 29);
			this->buttonConfirm->TabIndex = 26;
			this->buttonConfirm->Text = L"Confirmer";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &StaffSearchUpdate::buttonConfirm_Click);
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
			// radioButtonIdChoice
			// 
			this->radioButtonIdChoice->AutoSize = true;
			this->radioButtonIdChoice->Location = System::Drawing::Point(7, 44);
			this->radioButtonIdChoice->Name = L"radioButtonIdChoice";
			this->radioButtonIdChoice->Size = System::Drawing::Size(104, 17);
			this->radioButtonIdChoice->TabIndex = 1;
			this->radioButtonIdChoice->TabStop = true;
			this->radioButtonIdChoice->Text = L"Par ID personnel";
			this->radioButtonIdChoice->UseVisualStyleBackColor = true;
			// 
			// groupBoxSearchMode
			// 
			this->groupBoxSearchMode->Controls->Add(this->radioButtonIdChoice);
			this->groupBoxSearchMode->Controls->Add(this->radioButtonLastNameChoice);
			this->groupBoxSearchMode->Location = System::Drawing::Point(458, 12);
			this->groupBoxSearchMode->Name = L"groupBoxSearchMode";
			this->groupBoxSearchMode->Size = System::Drawing::Size(200, 74);
			this->groupBoxSearchMode->TabIndex = 18;
			this->groupBoxSearchMode->TabStop = false;
			this->groupBoxSearchMode->Text = L"Choix du mode de recherche";
			// 
			// StaffSearchUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(670, 261);
			this->Controls->Add(this->groupBoxSearchMode);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->textBoxFinalChoice);
			this->Controls->Add(this->labelQuestion);
			this->Controls->Add(this->dataGridViewStaffSearch);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->labelInfo);
			this->Name = L"StaffSearchUpdate";
			this->Text = L"Recherche du membre du personnel à modifier";
			this->Load += gcnew System::EventHandler(this, &StaffSearchUpdate::StaffSearchUpdate_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStaffSearch))->EndInit();
			this->groupBoxSearchMode->ResumeLayout(false);
			this->groupBoxSearchMode->PerformLayout();
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
					this->dataGridViewStaffSearch->Refresh();
					this->_service = gcnew SERVICE::SERV_SEARCH(
						"NomPersonne, PrenomPersonne, DateEmbauchePersonnelle, NumeroRueAdresse, RueAdresse, CodePostalAdresse",
						"([DB_PROJECT].[dbo].[personne] INNER JOIN [DB_PROJECT].[dbo].[personnel] ON personne.IdPersonne = personnel.IdPersonne) INNER JOIN [DB_PROJECT].[dbo].[adresse] ON personnel.IdAdresse = adresse.IdAdresse",
						"personnel.IdPersonne_1",
						"=" + this->textBoxSearch->Text);
					this->_dataSet = this->_service->loadDatabase();
					this->dataGridViewStaffSearch->DataSource = this->_dataSet;
					this->dataGridViewStaffSearch->DataMember = "NomPersonne, PrenomPersonne, DateEmbauchePersonnelle, NumeroRueAdresse, RueAdresse, CodePostalAdresse";

				}
				else
				{
					this->labelInfo->Text += " (veuillez rentrer un id s'il vous plait)";
				}
			}

			if (radioButtonLastNameChoice->Checked == true)
			{
				this->dataGridViewStaffSearch->Refresh();
				this->_service = gcnew SERVICE::SERV_SEARCH(
					"NomPersonne, PrenomPersonne, DateEmbauchePersonnelle, NumeroRueAdresse, RueAdresse, CodePostalAdresse",
					"([DB_PROJECT].[dbo].[personne] INNER JOIN [DB_PROJECT].[dbo].[personnel] ON personne.IdPersonne = personnel.IdPersonne) INNER JOIN [DB_PROJECT].[dbo].[adresse] ON personnel.IdAdresse = adresse.IdAdresse",
					"personne.NomPersonne",
					" LIKE '" + this->textBoxSearch->Text + "%'");
				this->_dataSet = this->_service->loadDatabase();
				this->dataGridViewStaffSearch->DataSource = this->_dataSet;
				this->dataGridViewStaffSearch->DataMember = "NomPersonne, PrenomPersonne, DateEmbauchePersonnelle, NumeroRueAdresse, RueAdresse, CodePostalAdresse";
			}
		}
		Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			int idPerson;
			if (this->textBoxFinalChoice->Text != "")
			{
				idPerson = Convert::ToInt32(this->textBoxFinalChoice->Text);
				StaffUpdate^ nextForm = gcnew StaffUpdate(idPerson);
				this->Hide();
				nextForm->ShowDialog();
				this->Close();
			}
			else
			{
				this->labelQuestion->Text = "(Veuillez rentrer un id s'il vous plait)";
			}
		}
		Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}

		Void StaffSearchUpdate_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_dataSet = gcnew Data::DataSet();
		}
	};
}
