#pragma once
#include "OrderShow.h"
#include "SERV_SEARCH.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class OrderSearchShow : public System::Windows::Forms::Form
	{
	public:
		OrderSearchShow(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~OrderSearchShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		DataSet^ _dataSet;
		SERVICE::SERV_SEARCH^ _service;

		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ buttonConfirm;
		System::Windows::Forms::Button^ buttonCancel;
		System::Windows::Forms::TextBox^ textBoxFinalChoice;
		System::Windows::Forms::DataGridView^ dataGridViewClientsSearch;
		System::Windows::Forms::Button^ buttonSearch;
		System::Windows::Forms::TextBox^ textBoxSearch;
		System::Windows::Forms::Label^ labelInfo;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->textBoxFinalChoice = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewClientsSearch = (gcnew System::Windows::Forms::DataGridView());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClientsSearch))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(451, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 26);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Quel est l\'ID commande de la commande que \r\nvous voulez afficher \?";
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(459, 70);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(199, 145);
			this->buttonConfirm->TabIndex = 43;
			this->buttonConfirm->Text = L"Confirmer l\'affichage de la commande";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &OrderSearchShow::buttonConfirm_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(459, 221);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(199, 29);
			this->buttonCancel->TabIndex = 42;
			this->buttonCancel->Text = L"Annuler";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &OrderSearchShow::buttonCancel_Click);
			// 
			// textBoxFinalChoice
			// 
			this->textBoxFinalChoice->Location = System::Drawing::Point(461, 44);
			this->textBoxFinalChoice->Name = L"textBoxFinalChoice";
			this->textBoxFinalChoice->Size = System::Drawing::Size(197, 20);
			this->textBoxFinalChoice->TabIndex = 41;
			this->textBoxFinalChoice->Text = L"1";
			// 
			// dataGridViewClientsSearch
			// 
			this->dataGridViewClientsSearch->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClientsSearch->Location = System::Drawing::Point(9, 89);
			this->dataGridViewClientsSearch->Name = L"dataGridViewClientsSearch";
			this->dataGridViewClientsSearch->Size = System::Drawing::Size(444, 161);
			this->dataGridViewClientsSearch->TabIndex = 39;
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(169, 63);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(71, 20);
			this->buttonSearch->TabIndex = 38;
			this->buttonSearch->Text = L"rechercher";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &OrderSearchShow::buttonSearch_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(9, 63);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(154, 20);
			this->textBoxSearch->TabIndex = 37;
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(9, 13);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(215, 39);
			this->labelInfo->TabIndex = 36;
			this->labelInfo->Text = L"Ici vous pouvez rechercher les commandes \r\ndont les ID commencent par le pramamet"
				L"re \r\nde la recherche ci-dessous :";
			// 
			// OrderSearchShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->textBoxFinalChoice);
			this->Controls->Add(this->dataGridViewClientsSearch);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->labelInfo);
			this->Name = L"OrderSearchShow";
			this->Text = L"Recherche de la commande e afficher";
			this->Load += gcnew System::EventHandler(this, &OrderSearchShow::OrderSearchShow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClientsSearch))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->labelInfo->Text = L"Ici vous pouvez rechercher les commandes \r\ndont les ID commencent par le pramamet"
				L"re \r\nde la recherche ci-dessous :";
			if (this->textBoxSearch->Text != "")
			{
				this->dataGridViewClientsSearch->Refresh();
				this->_service = gcnew SERVICE::SERV_SEARCH(
					"IdCommande, DateLivraisonPrevuCommande, QuantiteCommande",
					"(SELECT Contenir.IdCommande, commande.DateLivraisonPrevuCommande, Contenir.QuantiteCommande, Contenir.RefProduit FROM commande INNER JOIN Contenir ON commande.IdCommande = Contenir.IdCommande) AS T INNER JOIN produit ON T.RefProduit = produit.RefProduit",
					"IdCommande",
					"=" + this->textBoxSearch->Text);
				this->_dataSet = this->_service->loadDatabase();
				this->dataGridViewClientsSearch->DataSource = this->_dataSet;
				this->dataGridViewClientsSearch->DataMember = "IdCommande, DateLivraisonPrevuCommande, QuantiteCommande";

			}
			else
			{
				this->labelInfo->Text += " (veuillez rentrer un id s'il vous plait)";
			}
		}

		Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e)
		{
			int idPerson;
			if (this->textBoxFinalChoice->Text != "")
			{
				idPerson = Convert::ToInt32(this->textBoxFinalChoice->Text);
				OrderShow^ nextForm = gcnew OrderShow(idPerson);
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

		Void OrderSearchShow_Load(System::Object^ sender, System::EventArgs^ e)
		{
			this->_dataSet = gcnew Data::DataSet();
		}
	};
}
