#pragma once
#include "StaffShow.h"
#include "SERV_SEARCH.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StaffSearchShow : public System::Windows::Forms::Form
	{
	public:
		StaffSearchShow(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StaffSearchShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		DataSet^ _dataSet;
		SERVICE::SERV_SEARCH^ _service;

		System::Windows::Forms::RadioButton^ radioButtonIdChoice;
		System::Windows::Forms::GroupBox^ groupBoxSearchMode;
		System::Windows::Forms::RadioButton^ radioButtonLastNameChoice;
		System::Windows::Forms::Button^ buttonConfirm;
		System::Windows::Forms::Button^ buttonCancel;
		System::Windows::Forms::TextBox^ textBoxFinalChoice;
		System::Windows::Forms::Label^ labelQuestion;
		System::Windows::Forms::Button^ buttonSearch;
		System::Windows::Forms::TextBox^ textBoxSearch;
		System::Windows::Forms::Label^ labelInfo;
		System::Windows::Forms::DataGridView^ dataGridViewStaffSearch;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->radioButtonIdChoice = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxSearchMode = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonLastNameChoice = (gcnew System::Windows::Forms::RadioButton());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->textBoxFinalChoice = (gcnew System::Windows::Forms::TextBox());
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->dataGridViewStaffSearch = (gcnew System::Windows::Forms::DataGridView());
			this->groupBoxSearchMode->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStaffSearch))->BeginInit();
			this->SuspendLayout();
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
			this->groupBoxSearchMode->TabIndex = 27;
			this->groupBoxSearchMode->TabStop = false;
			this->groupBoxSearchMode->Text = L"Choix du mode de recherche";
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
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(458, 184);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(199, 29);
			this->buttonConfirm->TabIndex = 35;
			this->buttonConfirm->Text = L"Confirmer";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &StaffSearchShow::buttonConfirm_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(459, 219);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(199, 29);
			this->buttonCancel->TabIndex = 34;
			this->buttonCancel->Text = L"Annuler";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &StaffSearchShow::buttonCancel_Click);
			// 
			// textBoxFinalChoice
			// 
			this->textBoxFinalChoice->Location = System::Drawing::Point(457, 122);
			this->textBoxFinalChoice->Name = L"textBoxFinalChoice";
			this->textBoxFinalChoice->Size = System::Drawing::Size(200, 20);
			this->textBoxFinalChoice->TabIndex = 33;
			this->textBoxFinalChoice->Text = L"1";
			// 
			// labelQuestion
			// 
			this->labelQuestion->AutoSize = true;
			this->labelQuestion->Location = System::Drawing::Point(458, 93);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(210, 26);
			this->labelQuestion->TabIndex = 32;
			this->labelQuestion->Text = L"Quel est l\'ID personnel de la personne que \r\nvous voulez modifier \?";
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(172, 41);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(71, 20);
			this->buttonSearch->TabIndex = 30;
			this->buttonSearch->Text = L"rechercher";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &StaffSearchShow::buttonSearch_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(11, 41);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(154, 20);
			this->textBoxSearch->TabIndex = 29;
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(8, 12);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(205, 26);
			this->labelInfo->TabIndex = 28;
			this->labelInfo->Text = L"Rentrez votre paramètre de recherche en \r\nfonction du mode choisi :";
			// 
			// dataGridViewStaffSearch
			// 
			this->dataGridViewStaffSearch->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStaffSearch->Location = System::Drawing::Point(8, 68);
			this->dataGridViewStaffSearch->Name = L"dataGridViewStaffSearch";
			this->dataGridViewStaffSearch->Size = System::Drawing::Size(443, 181);
			this->dataGridViewStaffSearch->TabIndex = 31;
			// 
			// StaffSearchShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 261);
			this->Controls->Add(this->groupBoxSearchMode);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->textBoxFinalChoice);
			this->Controls->Add(this->labelQuestion);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->dataGridViewStaffSearch);
			this->Name = L"StaffSearchShow";
			this->Text = L"Recherche du membre du personnel à afficher";
			this->Load += gcnew System::EventHandler(this, &StaffSearchShow::StaffSearchShow_Load);
			this->groupBoxSearchMode->ResumeLayout(false);
			this->groupBoxSearchMode->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStaffSearch))->EndInit();
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
				StaffShow^ nextForm = gcnew StaffShow(idPerson);
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

		Void StaffSearchShow_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_dataSet = gcnew Data::DataSet();
		}
	};
}
