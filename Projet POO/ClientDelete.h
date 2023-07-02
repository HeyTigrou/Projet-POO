#pragma once
#include "SERV_SHOW.h"
#include "SERV_DELETE.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ClientDelete : public System::Windows::Forms::Form
	{
	public:
		ClientDelete(int id)
		{
			InitializeComponent();
			this->idPerson = id;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~ClientDelete()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		int idPerson = 1;
		SERVICE::SERV_DELETE^ _service;
		SERVICE::SERV_SHOW^ _serviceshow1;
		SERVICE::SERV_SHOW^ _serviceshow2;

		System::Windows::Forms::Label^ labelInfo;
		System::Windows::Forms::Label^ labelResult;
		System::Windows::Forms::Button^ buttonYes;
		System::Windows::Forms::Button^ buttonNo;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->buttonYes = (gcnew System::Windows::Forms::Button());
			this->buttonNo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(13, 13);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(253, 13);
			this->labelInfo->TabIndex = 0;
			this->labelInfo->Text = L"Êtes-vous sûr de vouloir supprimer le profil client de :";
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(13, 37);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(32, 13);
			this->labelResult->TabIndex = 1;
			this->labelResult->Text = L"result";
			// 
			// buttonYes
			// 
			this->buttonYes->Location = System::Drawing::Point(289, 8);
			this->buttonYes->Name = L"buttonYes";
			this->buttonYes->Size = System::Drawing::Size(137, 23);
			this->buttonYes->TabIndex = 2;
			this->buttonYes->Text = L"Oui";
			this->buttonYes->UseVisualStyleBackColor = true;
			this->buttonYes->Click += gcnew System::EventHandler(this, &ClientDelete::buttonYes_Click);
			// 
			// buttonNo
			// 
			this->buttonNo->Location = System::Drawing::Point(289, 37);
			this->buttonNo->Name = L"buttonNo";
			this->buttonNo->Size = System::Drawing::Size(137, 23);
			this->buttonNo->TabIndex = 3;
			this->buttonNo->Text = L"Non";
			this->buttonNo->UseVisualStyleBackColor = true;
			this->buttonNo->Click += gcnew System::EventHandler(this, &ClientDelete::buttonNo_Click);
			// 
			// ClientDelete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 80);
			this->Controls->Add(this->buttonNo);
			this->Controls->Add(this->buttonYes);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->labelInfo);
			this->Name = L"ClientDelete";
			this->Text = L"Suppression d\'un profil client";
			this->Load += gcnew System::EventHandler(this, &ClientDelete::ClientDelete_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonYes_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_service = gcnew SERVICE::SERV_DELETE(
				"client",
				"DateNaissanceClient = NULL, DatePremierAchatClient = NULL",
				"IdPersonne = "+Convert::ToString(this->idPerson)
			);
			this->_service->Delete();
			delete this->_service;
			this->_service = gcnew SERVICE::SERV_DELETE(
				"personne",
				"NomPersonne = NULL, PrenomPersonne = NULL",
				"IdPersonne = "+Convert::ToString(this->idPerson)
			);
			this->_service->Delete();
			this->Close();
		}

		Void buttonNo_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}

		Void ClientDelete_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_serviceshow1 = gcnew SERVICE::SERV_SHOW("personne", idPerson-1, 1);
			this->_serviceshow2 = gcnew SERVICE::SERV_SHOW("personne", idPerson-1, 2);
			
			this->labelResult->Text = this->_serviceshow1->Show()+" "+this->_serviceshow2->Show();
		}
	};
}
