#pragma once
#include "SERV_DELETE.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StaffDelete : public System::Windows::Forms::Form
	{
	public:
		StaffDelete(int^ id)
		{
			InitializeComponent();
			this->idStaff = id;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StaffDelete()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		int^ idStaff;
		SERVICE::SERV_DELETE^ _service;

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
			this->buttonNo->Location = System::Drawing::Point(295, 43);
			this->buttonNo->Name = L"buttonNo";
			this->buttonNo->Size = System::Drawing::Size(137, 23);
			this->buttonNo->TabIndex = 7;
			this->buttonNo->Text = L"Non";
			this->buttonNo->UseVisualStyleBackColor = true;
			this->buttonNo->Click += gcnew System::EventHandler(this, &StaffDelete::buttonNo_Click);
			// 
			// buttonYes
			// 
			this->buttonYes->Location = System::Drawing::Point(295, 14);
			this->buttonYes->Name = L"buttonYes";
			this->buttonYes->Size = System::Drawing::Size(137, 23);
			this->buttonYes->TabIndex = 6;
			this->buttonYes->Text = L"Oui";
			this->buttonYes->UseVisualStyleBackColor = true;
			this->buttonYes->Click += gcnew System::EventHandler(this, &StaffDelete::buttonYes_Click);
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(19, 43);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(32, 13);
			this->labelResult->TabIndex = 5;
			this->labelResult->Text = L"result";
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(19, 19);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(274, 13);
			this->labelInfo->TabIndex = 4;
			this->labelInfo->Text = L"�tes-vous s�r de vouloir supprimer le profil personnel de :";
			// 
			// StaffDelete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 80);
			this->Controls->Add(this->buttonNo);
			this->Controls->Add(this->buttonYes);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->labelInfo);
			this->Name = L"StaffDelete";
			this->Text = L"Suppression d\'un profil personnel";
			this->Load += gcnew System::EventHandler(this, &StaffDelete::StaffDelete_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonYes_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_service = gcnew SERVICE::SERV_DELETE(
				"(SELECT * FROM personne LEFT JOIN client ON (personne.IdPersonne = client.IdPersonne))",
				"client.IdPersonne",
				Convert::ToString(this->idStaff)
			);
			//this->_service->Delete();
			this->Close();
		}
		Void buttonNo_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
		Void StaffDelete_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->labelResult->Text = ""; // inclure requ�te sql
		}
	};
}