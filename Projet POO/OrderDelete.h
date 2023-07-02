#pragma once
#include "SERV_DELETE.h"
#include "SERV_SHOW.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class OrderDelete : public System::Windows::Forms::Form
	{
	public:
		OrderDelete(int id)
		{
			InitializeComponent();
			this->idCommande = id;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~OrderDelete()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		int idCommande = 1;
		SERVICE::SERV_DELETE^ _service;
		SERVICE::SERV_SHOW^ _serviceshow;

		System::Windows::Forms::Button^ buttonNo;
		System::Windows::Forms::Button^ buttonYes;
		System::Windows::Forms::Label^ labelResult;
		System::Windows::Forms::Label^ labelInfo;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->buttonNo = (gcnew System::Windows::Forms::Button());
			this->buttonYes = (gcnew System::Windows::Forms::Button());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonNo
			// 
			this->buttonNo->Location = System::Drawing::Point(232, 33);
			this->buttonNo->Name = L"buttonNo";
			this->buttonNo->Size = System::Drawing::Size(137, 23);
			this->buttonNo->TabIndex = 7;
			this->buttonNo->Text = L"Non";
			this->buttonNo->UseVisualStyleBackColor = true;
			this->buttonNo->Click += gcnew System::EventHandler(this, &OrderDelete::buttonNo_Click);
			// 
			// buttonYes
			// 
			this->buttonYes->Location = System::Drawing::Point(232, 4);
			this->buttonYes->Name = L"buttonYes";
			this->buttonYes->Size = System::Drawing::Size(137, 23);
			this->buttonYes->TabIndex = 6;
			this->buttonYes->Text = L"Oui";
			this->buttonYes->UseVisualStyleBackColor = true;
			this->buttonYes->Click += gcnew System::EventHandler(this, &OrderDelete::buttonYes_Click);
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(115, 22);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(32, 13);
			this->labelResult->TabIndex = 5;
			this->labelResult->Text = L"result";
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(12, 9);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(182, 26);
			this->labelInfo->TabIndex = 4;
			this->labelInfo->Text = L"Êtes-vous sûr de vouloir supprimer la \r\ncommande numéro :";
			// 
			// OrderDelete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 61);
			this->Controls->Add(this->buttonNo);
			this->Controls->Add(this->buttonYes);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->labelInfo);
			this->Name = L"OrderDelete";
			this->Text = L"Suppression Commande";
			this->Load += gcnew System::EventHandler(this, &OrderDelete::OrderDelete_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonYes_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_service = gcnew SERVICE::SERV_DELETE(
				"paiement",
				"DatePaiement = NULL, MoyenPaiement = NULL, DateEnregistrementSolde = NULL",
				"IdCommande = " + Convert::ToString(this->idCommande)
			);
			this->_service->Delete();

			this->_service = gcnew SERVICE::SERV_DELETE(
				"Contenir",
				"RefProduit = NULL, QuantiteCommande = NULL",
				"IdCommande = " + Convert::ToString(this->idCommande)
			);
			this->_service->Delete();

			this->_service = gcnew SERVICE::SERV_DELETE(
				"commande",
				"ReferenceCommande = NULL, DateLivraisonPrevuCommande = NULL, DateEmissionCommande = NULL, IdPersonne = NULL, IdFacture = NULL",
				"IdCommande = " + Convert::ToString(this->idCommande)
			);
			this->_service->Delete();

			this->Close();
		}
		Void buttonNo_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}

		Void OrderDelete_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_serviceshow = gcnew SERVICE::SERV_SHOW("commande", idCommande-1, 0);
			this->labelResult->Text = this->_serviceshow->Show();
		}
	};
}
