#pragma once
#include "SERV_SHOW.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class ClientShow : public System::Windows::Forms::Form
	{
	public:
		ClientShow(int id)
		{
			InitializeComponent();
			this->idPerson = id -1;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~ClientShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private :
		int idPerson = 1;
		SERVICE::SERV_SHOW^ _service1;
		SERVICE::SERV_SHOW^ _service2;
		SERVICE::SERV_SHOW^ _service3;
		SERVICE::SERV_SHOW^ _service4;
		SERVICE::SERV_SHOW^ _service5;

		System::Windows::Forms::Label^ labelLastNameText;
		System::Windows::Forms::Label^ labelLastNameResult;
		System::Windows::Forms::Label^ labelFirstNameText;
		System::Windows::Forms::Label^ labelFirstNameResult;
		System::Windows::Forms::Label^ labelBirthDateText;
		System::Windows::Forms::Label^ labelBirthDateResult;
		System::Windows::Forms::Label^ labelDateFirstBuyText;
		System::Windows::Forms::Label^ labelDateFirstBuyResult;
		System::Windows::Forms::Button^ buttonClose;
		System::Windows::Forms::Label^ labelID;
		System::Windows::Forms::Label^ labelIDResult;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelLastNameText = (gcnew System::Windows::Forms::Label());
			this->labelLastNameResult = (gcnew System::Windows::Forms::Label());
			this->labelFirstNameText = (gcnew System::Windows::Forms::Label());
			this->labelFirstNameResult = (gcnew System::Windows::Forms::Label());
			this->labelBirthDateText = (gcnew System::Windows::Forms::Label());
			this->labelBirthDateResult = (gcnew System::Windows::Forms::Label());
			this->labelDateFirstBuyText = (gcnew System::Windows::Forms::Label());
			this->labelDateFirstBuyResult = (gcnew System::Windows::Forms::Label());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->labelIDResult = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelLastNameText
			// 
			this->labelLastNameText->AutoSize = true;
			this->labelLastNameText->Location = System::Drawing::Point(9, 26);
			this->labelLastNameText->Name = L"labelLastNameText";
			this->labelLastNameText->Size = System::Drawing::Size(35, 13);
			this->labelLastNameText->TabIndex = 0;
			this->labelLastNameText->Text = L"Nom :";
			// 
			// labelLastNameResult
			// 
			this->labelLastNameResult->AutoSize = true;
			this->labelLastNameResult->Location = System::Drawing::Point(50, 26);
			this->labelLastNameResult->Name = L"labelLastNameResult";
			this->labelLastNameResult->Size = System::Drawing::Size(32, 13);
			this->labelLastNameResult->TabIndex = 1;
			this->labelLastNameResult->Text = L"result";
			// 
			// labelFirstNameText
			// 
			this->labelFirstNameText->AutoSize = true;
			this->labelFirstNameText->Location = System::Drawing::Point(9, 43);
			this->labelFirstNameText->Name = L"labelFirstNameText";
			this->labelFirstNameText->Size = System::Drawing::Size(49, 13);
			this->labelFirstNameText->TabIndex = 2;
			this->labelFirstNameText->Text = L"Prénom :";
			// 
			// labelFirstNameResult
			// 
			this->labelFirstNameResult->AutoSize = true;
			this->labelFirstNameResult->Location = System::Drawing::Point(64, 43);
			this->labelFirstNameResult->Name = L"labelFirstNameResult";
			this->labelFirstNameResult->Size = System::Drawing::Size(32, 13);
			this->labelFirstNameResult->TabIndex = 3;
			this->labelFirstNameResult->Text = L"result";
			// 
			// labelBirthDateText
			// 
			this->labelBirthDateText->AutoSize = true;
			this->labelBirthDateText->Location = System::Drawing::Point(9, 60);
			this->labelBirthDateText->Name = L"labelBirthDateText";
			this->labelBirthDateText->Size = System::Drawing::Size(102, 13);
			this->labelBirthDateText->TabIndex = 4;
			this->labelBirthDateText->Text = L"Date de naissance :";
			// 
			// labelBirthDateResult
			// 
			this->labelBirthDateResult->AutoSize = true;
			this->labelBirthDateResult->Location = System::Drawing::Point(117, 60);
			this->labelBirthDateResult->Name = L"labelBirthDateResult";
			this->labelBirthDateResult->Size = System::Drawing::Size(32, 13);
			this->labelBirthDateResult->TabIndex = 5;
			this->labelBirthDateResult->Text = L"result";
			// 
			// labelDateFirstBuyText
			// 
			this->labelDateFirstBuyText->AutoSize = true;
			this->labelDateFirstBuyText->Location = System::Drawing::Point(9, 77);
			this->labelDateFirstBuyText->Name = L"labelDateFirstBuyText";
			this->labelDateFirstBuyText->Size = System::Drawing::Size(103, 13);
			this->labelDateFirstBuyText->TabIndex = 6;
			this->labelDateFirstBuyText->Text = L"Date premier achat :";
			// 
			// labelDateFirstBuyResult
			// 
			this->labelDateFirstBuyResult->AutoSize = true;
			this->labelDateFirstBuyResult->Location = System::Drawing::Point(118, 77);
			this->labelDateFirstBuyResult->Name = L"labelDateFirstBuyResult";
			this->labelDateFirstBuyResult->Size = System::Drawing::Size(32, 13);
			this->labelDateFirstBuyResult->TabIndex = 7;
			this->labelDateFirstBuyResult->Text = L"result";
			// 
			// buttonClose
			// 
			this->buttonClose->Location = System::Drawing::Point(12, 93);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(194, 23);
			this->buttonClose->TabIndex = 8;
			this->buttonClose->Text = L"Retour";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &ClientShow::buttonClose_Click);
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->Location = System::Drawing::Point(9, 9);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(52, 13);
			this->labelID->TabIndex = 9;
			this->labelID->Text = L"ID client :";
			// 
			// labelIDResult
			// 
			this->labelIDResult->AutoSize = true;
			this->labelIDResult->Location = System::Drawing::Point(67, 9);
			this->labelIDResult->Name = L"labelIDResult";
			this->labelIDResult->Size = System::Drawing::Size(32, 13);
			this->labelIDResult->TabIndex = 10;
			this->labelIDResult->Text = L"result";
			// 
			// ClientShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(222, 133);
			this->Controls->Add(this->labelIDResult);
			this->Controls->Add(this->labelID);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->labelDateFirstBuyResult);
			this->Controls->Add(this->labelDateFirstBuyText);
			this->Controls->Add(this->labelBirthDateResult);
			this->Controls->Add(this->labelBirthDateText);
			this->Controls->Add(this->labelFirstNameResult);
			this->Controls->Add(this->labelFirstNameText);
			this->Controls->Add(this->labelLastNameResult);
			this->Controls->Add(this->labelLastNameText);
			this->Name = L"ClientShow";
			this->Text = L"Fiche client";
			this->Load += gcnew System::EventHandler(this, &ClientShow::ClientShow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void ClientShow_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_service1 = gcnew SERVICE::SERV_SHOW("personne", idPerson, 0);
			this->_service2 = gcnew SERVICE::SERV_SHOW("personne", idPerson, 1);
			this->_service3 = gcnew SERVICE::SERV_SHOW("personne", idPerson, 2);
			this->_service4 = gcnew SERVICE::SERV_SHOW("client", idPerson, 1);
			this->_service5 = gcnew SERVICE::SERV_SHOW("client", idPerson, 2);


			this->labelIDResult->Text = this->_service1->Show();
			this->labelLastNameResult->Text = this->_service2->Show();
			this->labelFirstNameResult->Text = this->_service3->Show();

			String^ birthdate = this->_service4->Show();
			birthdate = birthdate->Substring(0, 10);
			this->labelBirthDateResult->Text = birthdate;

			String^ DateFirstBuy = this->_service5->Show();
			DateFirstBuy = DateFirstBuy->Substring(0, 10);
			this->labelDateFirstBuyResult->Text = DateFirstBuy;
			
			
		}
		Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
