#pragma once
#include "SERV_SHOW.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class StaffShow : public System::Windows::Forms::Form
	{
	public:
		StaffShow(int id)
		{
			InitializeComponent();
			this->idStaff = id;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~StaffShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		int idStaff = 1;
		SERVICE::SERV_SHOW^ _service1;
		SERVICE::SERV_SHOW^ _service2;
		SERVICE::SERV_SHOW^ _service3;
		SERVICE::SERV_SHOW^ _service4;
		SERVICE::SERV_SHOW^ _service5;
		SERVICE::SERV_SHOW^ _service6;
		SERVICE::SERV_SHOW^ _service7;

		System::Windows::Forms::Label^ labelID;
		System::Windows::Forms::Label^ labelIDResult;
		System::Windows::Forms::Label^ labelLastName;
		System::Windows::Forms::Label^ labelLastNameResult;
		System::Windows::Forms::Label^ labelFirstName;
		System::Windows::Forms::Label^ labelFirstNameResult;
		System::Windows::Forms::Label^ labelBirthDate;
		System::Windows::Forms::Label^ labelBirthDateResult;
		System::Windows::Forms::Label^ labelAddress;
		System::Windows::Forms::Label^ labelAddressResult;
		System::Windows::Forms::Label^ labelCity;
		System::Windows::Forms::Label^ labelCityResult;
		System::Windows::Forms::Label^ labelPostalCode;
		System::Windows::Forms::Label^ labelPostalCodeResult;
		System::Windows::Forms::Button^ buttonReturn;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->labelIDResult = (gcnew System::Windows::Forms::Label());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->labelLastNameResult = (gcnew System::Windows::Forms::Label());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->labelFirstNameResult = (gcnew System::Windows::Forms::Label());
			this->labelBirthDate = (gcnew System::Windows::Forms::Label());
			this->labelBirthDateResult = (gcnew System::Windows::Forms::Label());
			this->labelAddress = (gcnew System::Windows::Forms::Label());
			this->labelAddressResult = (gcnew System::Windows::Forms::Label());
			this->labelCity = (gcnew System::Windows::Forms::Label());
			this->labelCityResult = (gcnew System::Windows::Forms::Label());
			this->labelPostalCode = (gcnew System::Windows::Forms::Label());
			this->labelPostalCodeResult = (gcnew System::Windows::Forms::Label());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->Location = System::Drawing::Point(13, 13);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(73, 13);
			this->labelID->TabIndex = 0;
			this->labelID->Text = L"ID personnel :";
			// 
			// labelIDResult
			// 
			this->labelIDResult->AutoSize = true;
			this->labelIDResult->Location = System::Drawing::Point(92, 13);
			this->labelIDResult->Name = L"labelIDResult";
			this->labelIDResult->Size = System::Drawing::Size(37, 13);
			this->labelIDResult->TabIndex = 1;
			this->labelIDResult->Text = L"Result";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(12, 30);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(35, 13);
			this->labelLastName->TabIndex = 2;
			this->labelLastName->Text = L"Nom :";
			// 
			// labelLastNameResult
			// 
			this->labelLastNameResult->AutoSize = true;
			this->labelLastNameResult->Location = System::Drawing::Point(53, 30);
			this->labelLastNameResult->Name = L"labelLastNameResult";
			this->labelLastNameResult->Size = System::Drawing::Size(37, 13);
			this->labelLastNameResult->TabIndex = 3;
			this->labelLastNameResult->Text = L"Result";
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(12, 47);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(49, 13);
			this->labelFirstName->TabIndex = 4;
			this->labelFirstName->Text = L"Prénom :";
			// 
			// labelFirstNameResult
			// 
			this->labelFirstNameResult->AutoSize = true;
			this->labelFirstNameResult->Location = System::Drawing::Point(67, 47);
			this->labelFirstNameResult->Name = L"labelFirstNameResult";
			this->labelFirstNameResult->Size = System::Drawing::Size(37, 13);
			this->labelFirstNameResult->TabIndex = 5;
			this->labelFirstNameResult->Text = L"Result";
			// 
			// labelBirthDate
			// 
			this->labelBirthDate->AutoSize = true;
			this->labelBirthDate->Location = System::Drawing::Point(12, 64);
			this->labelBirthDate->Name = L"labelBirthDate";
			this->labelBirthDate->Size = System::Drawing::Size(102, 13);
			this->labelBirthDate->TabIndex = 6;
			this->labelBirthDate->Text = L"Date de naissance :";
			// 
			// labelBirthDateResult
			// 
			this->labelBirthDateResult->AutoSize = true;
			this->labelBirthDateResult->Location = System::Drawing::Point(120, 64);
			this->labelBirthDateResult->Name = L"labelBirthDateResult";
			this->labelBirthDateResult->Size = System::Drawing::Size(37, 13);
			this->labelBirthDateResult->TabIndex = 7;
			this->labelBirthDateResult->Text = L"Result";
			// 
			// labelAddress
			// 
			this->labelAddress->AutoSize = true;
			this->labelAddress->Location = System::Drawing::Point(12, 81);
			this->labelAddress->Name = L"labelAddress";
			this->labelAddress->Size = System::Drawing::Size(51, 13);
			this->labelAddress->TabIndex = 8;
			this->labelAddress->Text = L"Adresse :";
			// 
			// labelAddressResult
			// 
			this->labelAddressResult->AutoSize = true;
			this->labelAddressResult->Location = System::Drawing::Point(69, 81);
			this->labelAddressResult->Name = L"labelAddressResult";
			this->labelAddressResult->Size = System::Drawing::Size(37, 13);
			this->labelAddressResult->TabIndex = 9;
			this->labelAddressResult->Text = L"Result";
			// 
			// labelCity
			// 
			this->labelCity->AutoSize = true;
			this->labelCity->Location = System::Drawing::Point(12, 98);
			this->labelCity->Name = L"labelCity";
			this->labelCity->Size = System::Drawing::Size(32, 13);
			this->labelCity->TabIndex = 10;
			this->labelCity->Text = L"Ville :";
			// 
			// labelCityResult
			// 
			this->labelCityResult->AutoSize = true;
			this->labelCityResult->Location = System::Drawing::Point(50, 98);
			this->labelCityResult->Name = L"labelCityResult";
			this->labelCityResult->Size = System::Drawing::Size(37, 13);
			this->labelCityResult->TabIndex = 11;
			this->labelCityResult->Text = L"Result";
			// 
			// labelPostalCode
			// 
			this->labelPostalCode->AutoSize = true;
			this->labelPostalCode->Location = System::Drawing::Point(12, 115);
			this->labelPostalCode->Name = L"labelPostalCode";
			this->labelPostalCode->Size = System::Drawing::Size(69, 13);
			this->labelPostalCode->TabIndex = 12;
			this->labelPostalCode->Text = L"Code postal :";
			// 
			// labelPostalCodeResult
			// 
			this->labelPostalCodeResult->AutoSize = true;
			this->labelPostalCodeResult->Location = System::Drawing::Point(87, 115);
			this->labelPostalCodeResult->Name = L"labelPostalCodeResult";
			this->labelPostalCodeResult->Size = System::Drawing::Size(37, 13);
			this->labelPostalCodeResult->TabIndex = 13;
			this->labelPostalCodeResult->Text = L"Result";
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(13, 132);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(197, 23);
			this->buttonReturn->TabIndex = 14;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &StaffShow::buttonReturn_Click);
			// 
			// StaffShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(222, 167);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->labelPostalCodeResult);
			this->Controls->Add(this->labelPostalCode);
			this->Controls->Add(this->labelCityResult);
			this->Controls->Add(this->labelCity);
			this->Controls->Add(this->labelAddressResult);
			this->Controls->Add(this->labelAddress);
			this->Controls->Add(this->labelBirthDateResult);
			this->Controls->Add(this->labelBirthDate);
			this->Controls->Add(this->labelFirstNameResult);
			this->Controls->Add(this->labelFirstName);
			this->Controls->Add(this->labelLastNameResult);
			this->Controls->Add(this->labelLastName);
			this->Controls->Add(this->labelIDResult);
			this->Controls->Add(this->labelID);
			this->Name = L"StaffShow";
			this->Text = L"Fiche personnel";
			this->Load += gcnew System::EventHandler(this, &StaffShow::StaffShow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
		Void StaffShow_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_service1 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 1);
			this->_service2 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 2);
			this->_service3 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 3);
			this->_service4 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 4);
			this->_service5 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 5);
			this->_service6 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 6);
			this->_service7 = gcnew SERVICE::SERV_SHOW("Table", idStaff, 7);

			//this->labelIDResult->Text = this->_service1->Show(); 
			//this->labelLastNameResult->Text = this->_service2->Show();
			//this->labelFirstNameResult->Text = this->_service3->Show();
			//this->labelBirthDateResult->Text = this->_service4->Show();
			//this->labelAddressResult->Text = this->_service5->Show();
			//this->labelCityResult->Text = this->_service6->Show();
			//this->labelPostalCodeResult->Text = this->_service7->Show();
		}
	};
}
