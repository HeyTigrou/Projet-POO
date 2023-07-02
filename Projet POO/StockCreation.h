#pragma once
#include "SERV_INSERT.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StockCreation : public System::Windows::Forms::Form
	{
	public:
		StockCreation(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StockCreation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		SERVICE::SERV_INSERT^ _service;

		System::Windows::Forms::Button^ buttonCancel;
		System::Windows::Forms::Button^ buttonConfirm;
		System::Windows::Forms::TextBox^ textBoxStockAmmount;
		System::Windows::Forms::Label^ labelStockAmmount;
		System::Windows::Forms::TextBox^ textBoxPHT;
		System::Windows::Forms::Label^ labelPHT;
		System::Windows::Forms::Label^ labelName;
		System::Windows::Forms::TextBox^ textBoxName;
		System::Windows::Forms::Label^ labelInformation;
		System::Windows::Forms::Label^ labelTVA;
		System::Windows::Forms::TextBox^ textBoxTVA;
		System::Windows::Forms::Label^ labelRestock;
		System::Windows::Forms::TextBox^ textBoxRestock;
		System::Windows::Forms::Label^ labelDiscountPoint;
		System::Windows::Forms::TextBox^ textBoxDiscountPoint;
		System::Windows::Forms::Label^ labelDiscountRate;
		System::Windows::Forms::TextBox^ textBoxDiscountRate;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->textBoxStockAmmount = (gcnew System::Windows::Forms::TextBox());
			this->labelStockAmmount = (gcnew System::Windows::Forms::Label());
			this->textBoxPHT = (gcnew System::Windows::Forms::TextBox());
			this->labelPHT = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->labelInformation = (gcnew System::Windows::Forms::Label());
			this->labelTVA = (gcnew System::Windows::Forms::Label());
			this->textBoxTVA = (gcnew System::Windows::Forms::TextBox());
			this->labelRestock = (gcnew System::Windows::Forms::Label());
			this->textBoxRestock = (gcnew System::Windows::Forms::TextBox());
			this->labelDiscountPoint = (gcnew System::Windows::Forms::Label());
			this->textBoxDiscountPoint = (gcnew System::Windows::Forms::TextBox());
			this->labelDiscountRate = (gcnew System::Windows::Forms::Label());
			this->textBoxDiscountRate = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(209, 318);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 27;
			this->buttonCancel->Text = L"Annuler";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &StockCreation::buttonCancel_Click);
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(12, 318);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(188, 23);
			this->buttonConfirm->TabIndex = 26;
			this->buttonConfirm->Text = L"Confirmer les informations ci-dessus";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &StockCreation::buttonConfirm_Click);
			// 
			// textBoxStockAmmount
			// 
			this->textBoxStockAmmount->Location = System::Drawing::Point(15, 126);
			this->textBoxStockAmmount->MaxLength = 4;
			this->textBoxStockAmmount->Name = L"textBoxStockAmmount";
			this->textBoxStockAmmount->Size = System::Drawing::Size(269, 20);
			this->textBoxStockAmmount->TabIndex = 25;
			// 
			// labelStockAmmount
			// 
			this->labelStockAmmount->AutoSize = true;
			this->labelStockAmmount->Location = System::Drawing::Point(12, 110);
			this->labelStockAmmount->Name = L"labelStockAmmount";
			this->labelStockAmmount->Size = System::Drawing::Size(166, 13);
			this->labelStockAmmount->TabIndex = 22;
			this->labelStockAmmount->Text = L"Quantité de base dans le stock \? ";
			// 
			// textBoxPHT
			// 
			this->textBoxPHT->Location = System::Drawing::Point(15, 87);
			this->textBoxPHT->Name = L"textBoxPHT";
			this->textBoxPHT->Size = System::Drawing::Size(269, 20);
			this->textBoxPHT->TabIndex = 21;
			// 
			// labelPHT
			// 
			this->labelPHT->AutoSize = true;
			this->labelPHT->Location = System::Drawing::Point(12, 71);
			this->labelPHT->Name = L"labelPHT";
			this->labelPHT->Size = System::Drawing::Size(70, 13);
			this->labelPHT->TabIndex = 20;
			this->labelPHT->Text = L"Prix hors taxe";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(12, 32);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(29, 13);
			this->labelName->TabIndex = 19;
			this->labelName->Text = L"Nom";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(15, 48);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(269, 20);
			this->textBoxName->TabIndex = 18;
			// 
			// labelInformation
			// 
			this->labelInformation->AutoSize = true;
			this->labelInformation->Location = System::Drawing::Point(12, 9);
			this->labelInformation->Name = L"labelInformation";
			this->labelInformation->Size = System::Drawing::Size(191, 13);
			this->labelInformation->TabIndex = 17;
			this->labelInformation->Text = L"Veuillez remplir les champs ci-dessous :";
			// 
			// labelTVA
			// 
			this->labelTVA->AutoSize = true;
			this->labelTVA->Location = System::Drawing::Point(12, 149);
			this->labelTVA->Name = L"labelTVA";
			this->labelTVA->Size = System::Drawing::Size(102, 13);
			this->labelTVA->TabIndex = 28;
			this->labelTVA->Text = L"Taux de TVA (en %)";
			// 
			// textBoxTVA
			// 
			this->textBoxTVA->Location = System::Drawing::Point(15, 165);
			this->textBoxTVA->MaxLength = 4;
			this->textBoxTVA->Name = L"textBoxTVA";
			this->textBoxTVA->Size = System::Drawing::Size(269, 20);
			this->textBoxTVA->TabIndex = 29;
			// 
			// labelRestock
			// 
			this->labelRestock->AutoSize = true;
			this->labelRestock->Location = System::Drawing::Point(12, 188);
			this->labelRestock->Name = L"labelRestock";
			this->labelRestock->Size = System::Drawing::Size(140, 13);
			this->labelRestock->TabIndex = 30;
			this->labelRestock->Text = L"Seuil de réaprovisionnement";
			// 
			// textBoxRestock
			// 
			this->textBoxRestock->Location = System::Drawing::Point(15, 204);
			this->textBoxRestock->MaxLength = 4;
			this->textBoxRestock->Name = L"textBoxRestock";
			this->textBoxRestock->Size = System::Drawing::Size(269, 20);
			this->textBoxRestock->TabIndex = 31;
			// 
			// labelDiscountPoint
			// 
			this->labelDiscountPoint->AutoSize = true;
			this->labelDiscountPoint->Location = System::Drawing::Point(12, 227);
			this->labelDiscountPoint->Name = L"labelDiscountPoint";
			this->labelDiscountPoint->Size = System::Drawing::Size(78, 13);
			this->labelDiscountPoint->TabIndex = 32;
			this->labelDiscountPoint->Text = L"Seuil de remise";
			// 
			// textBoxDiscountPoint
			// 
			this->textBoxDiscountPoint->Location = System::Drawing::Point(15, 243);
			this->textBoxDiscountPoint->MaxLength = 4;
			this->textBoxDiscountPoint->Name = L"textBoxDiscountPoint";
			this->textBoxDiscountPoint->Size = System::Drawing::Size(269, 20);
			this->textBoxDiscountPoint->TabIndex = 33;
			// 
			// labelDiscountRate
			// 
			this->labelDiscountRate->AutoSize = true;
			this->labelDiscountRate->Location = System::Drawing::Point(12, 266);
			this->labelDiscountRate->Name = L"labelDiscountRate";
			this->labelDiscountRate->Size = System::Drawing::Size(79, 13);
			this->labelDiscountRate->TabIndex = 34;
			this->labelDiscountRate->Text = L"Taux de remise";
			// 
			// textBoxDiscountRate
			// 
			this->textBoxDiscountRate->Location = System::Drawing::Point(15, 282);
			this->textBoxDiscountRate->MaxLength = 4;
			this->textBoxDiscountRate->Name = L"textBoxDiscountRate";
			this->textBoxDiscountRate->Size = System::Drawing::Size(269, 20);
			this->textBoxDiscountRate->TabIndex = 35;
			// 
			// StockCreation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 351);
			this->Controls->Add(this->textBoxDiscountRate);
			this->Controls->Add(this->labelDiscountRate);
			this->Controls->Add(this->textBoxDiscountPoint);
			this->Controls->Add(this->labelDiscountPoint);
			this->Controls->Add(this->textBoxRestock);
			this->Controls->Add(this->labelRestock);
			this->Controls->Add(this->textBoxTVA);
			this->Controls->Add(this->labelTVA);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->textBoxStockAmmount);
			this->Controls->Add(this->labelStockAmmount);
			this->Controls->Add(this->textBoxPHT);
			this->Controls->Add(this->labelPHT);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->labelInformation);
			this->Name = L"StockCreation";
			this->Text = L"Création d\'un nouvel article";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_service = gcnew SERVICE::SERV_INSERT(
				"Couleur",
				"TypeCouleur",
				"NULL"
			);
			this->_service->Insert();
			delete this->_service;
			this->_service = gcnew SERVICE::SERV_INSERT(
				"nature",
				"TVA",
				"'"+this->textBoxTVA->Text+"'"
			);
			this->_service->Insert();
			delete this->_service;
			this->_service = gcnew SERVICE::SERV_INSERT(
				"produit",
				"DesignationProduit, PrixHTProduit, QuantiteStockProduit, SeuilReaprovisionnementProduit, TauxRemiseProduit, SeuilRemiseProduit, IdNature, IdCouleur",
				"'"+this->textBoxName->Text + "', '"+this->textBoxPHT->Text+"', '"+this->textBoxStockAmmount->Text+"', '"+this->textBoxRestock->Text+"', '"+this->textBoxDiscountRate->Text+"', '"+this->textBoxDiscountPoint->Text+"', (SELECT TOP(1) IdNature FROM nature WHERE (TVA = "+this->textBoxTVA->Text+")), 1"
			);
			this->_service->Insert();
			delete this->_service;
			this->Close();
		}

		Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
