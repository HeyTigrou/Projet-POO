#pragma once
#include "SERV_UPDATE.h"
#include "SERV_SHOW.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StockUpdate : public System::Windows::Forms::Form
	{
	public:
		StockUpdate(int id)
		{
			InitializeComponent();
			this->idProduct = id-2;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StockUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		int idProduct = 1;
		SERVICE::SERV_UPDATE^ _serviceUpdate;
		SERVICE::SERV_SHOW^ _serviceShow1;
		SERVICE::SERV_SHOW^ _serviceShow2;
		SERVICE::SERV_SHOW^ _serviceShow3;
		SERVICE::SERV_SHOW^ _serviceShow4;
		SERVICE::SERV_SHOW^ _serviceShow5;
		SERVICE::SERV_SHOW^ _serviceShow6;

		System::Windows::Forms::TextBox^ textBoxDiscountRate;
		System::Windows::Forms::Label^ labelDiscountRate;
		System::Windows::Forms::TextBox^ textBoxDiscountPoint;
		System::Windows::Forms::Label^ labelDiscountPoint;
		System::Windows::Forms::TextBox^ textBoxRestock;
		System::Windows::Forms::Label^ labelRestock;
		System::Windows::Forms::TextBox^ textBoxTVA;
		System::Windows::Forms::Label^ labelTVA;
		System::Windows::Forms::TextBox^ textBoxPHT;
		System::Windows::Forms::Label^ labelPHT;
		System::Windows::Forms::Button^ buttonCancel;
		System::Windows::Forms::Button^ buttonConfirm;
		System::Windows::Forms::Label^ labelInformation;
		System::Windows::Forms::Label^ labelName;
		System::Windows::Forms::TextBox^ textBoxName;


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBoxDiscountRate = (gcnew System::Windows::Forms::TextBox());
			this->labelDiscountRate = (gcnew System::Windows::Forms::Label());
			this->textBoxDiscountPoint = (gcnew System::Windows::Forms::TextBox());
			this->labelDiscountPoint = (gcnew System::Windows::Forms::Label());
			this->textBoxRestock = (gcnew System::Windows::Forms::TextBox());
			this->labelRestock = (gcnew System::Windows::Forms::Label());
			this->textBoxTVA = (gcnew System::Windows::Forms::TextBox());
			this->labelTVA = (gcnew System::Windows::Forms::Label());
			this->textBoxPHT = (gcnew System::Windows::Forms::TextBox());
			this->labelPHT = (gcnew System::Windows::Forms::Label());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->labelInformation = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBoxDiscountRate
			// 
			this->textBoxDiscountRate->Location = System::Drawing::Point(12, 255);
			this->textBoxDiscountRate->MaxLength = 4;
			this->textBoxDiscountRate->Name = L"textBoxDiscountRate";
			this->textBoxDiscountRate->Size = System::Drawing::Size(316, 20);
			this->textBoxDiscountRate->TabIndex = 46;
			// 
			// labelDiscountRate
			// 
			this->labelDiscountRate->AutoSize = true;
			this->labelDiscountRate->Location = System::Drawing::Point(9, 239);
			this->labelDiscountRate->Name = L"labelDiscountRate";
			this->labelDiscountRate->Size = System::Drawing::Size(79, 13);
			this->labelDiscountRate->TabIndex = 45;
			this->labelDiscountRate->Text = L"Taux de remise";
			// 
			// textBoxDiscountPoint
			// 
			this->textBoxDiscountPoint->Location = System::Drawing::Point(12, 216);
			this->textBoxDiscountPoint->MaxLength = 4;
			this->textBoxDiscountPoint->Name = L"textBoxDiscountPoint";
			this->textBoxDiscountPoint->Size = System::Drawing::Size(316, 20);
			this->textBoxDiscountPoint->TabIndex = 44;
			// 
			// labelDiscountPoint
			// 
			this->labelDiscountPoint->AutoSize = true;
			this->labelDiscountPoint->Location = System::Drawing::Point(9, 200);
			this->labelDiscountPoint->Name = L"labelDiscountPoint";
			this->labelDiscountPoint->Size = System::Drawing::Size(78, 13);
			this->labelDiscountPoint->TabIndex = 43;
			this->labelDiscountPoint->Text = L"Seuil de remise";
			// 
			// textBoxRestock
			// 
			this->textBoxRestock->Location = System::Drawing::Point(12, 177);
			this->textBoxRestock->MaxLength = 4;
			this->textBoxRestock->Name = L"textBoxRestock";
			this->textBoxRestock->Size = System::Drawing::Size(316, 20);
			this->textBoxRestock->TabIndex = 42;
			// 
			// labelRestock
			// 
			this->labelRestock->AutoSize = true;
			this->labelRestock->Location = System::Drawing::Point(9, 161);
			this->labelRestock->Name = L"labelRestock";
			this->labelRestock->Size = System::Drawing::Size(140, 13);
			this->labelRestock->TabIndex = 41;
			this->labelRestock->Text = L"Seuil de réaprovisionnement";
			// 
			// textBoxTVA
			// 
			this->textBoxTVA->Location = System::Drawing::Point(12, 138);
			this->textBoxTVA->MaxLength = 4;
			this->textBoxTVA->Name = L"textBoxTVA";
			this->textBoxTVA->Size = System::Drawing::Size(316, 20);
			this->textBoxTVA->TabIndex = 40;
			// 
			// labelTVA
			// 
			this->labelTVA->AutoSize = true;
			this->labelTVA->Location = System::Drawing::Point(9, 122);
			this->labelTVA->Name = L"labelTVA";
			this->labelTVA->Size = System::Drawing::Size(70, 13);
			this->labelTVA->TabIndex = 39;
			this->labelTVA->Text = L"Taux de TVA";
			// 
			// textBoxPHT
			// 
			this->textBoxPHT->Location = System::Drawing::Point(12, 99);
			this->textBoxPHT->Name = L"textBoxPHT";
			this->textBoxPHT->Size = System::Drawing::Size(316, 20);
			this->textBoxPHT->TabIndex = 36;
			// 
			// labelPHT
			// 
			this->labelPHT->AutoSize = true;
			this->labelPHT->Location = System::Drawing::Point(9, 83);
			this->labelPHT->Name = L"labelPHT";
			this->labelPHT->Size = System::Drawing::Size(70, 13);
			this->labelPHT->TabIndex = 47;
			this->labelPHT->Text = L"Prix hors taxe";
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(213, 281);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(119, 23);
			this->buttonCancel->TabIndex = 49;
			this->buttonCancel->Text = L"Annuler";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &StockUpdate::buttonCancel_Click);
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(12, 281);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(188, 23);
			this->buttonConfirm->TabIndex = 48;
			this->buttonConfirm->Text = L"Confirmer les informations ci-dessus";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &StockUpdate::buttonConfirm_Click);
			// 
			// labelInformation
			// 
			this->labelInformation->AutoSize = true;
			this->labelInformation->Location = System::Drawing::Point(12, 9);
			this->labelInformation->Name = L"labelInformation";
			this->labelInformation->Size = System::Drawing::Size(325, 26);
			this->labelInformation->TabIndex = 50;
			this->labelInformation->Text = L"Les champs ci-dessous ont été chargés avec les valeurs actuelles, \r\nvous pouvez d"
				L"irectement les modifier";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(12, 44);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(119, 13);
			this->labelName->TabIndex = 52;
			this->labelName->Text = L"Désignation du produit :";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(12, 60);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(316, 20);
			this->textBoxName->TabIndex = 51;
			// 
			// StockUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 312);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->labelInformation);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->labelPHT);
			this->Controls->Add(this->textBoxDiscountRate);
			this->Controls->Add(this->labelDiscountRate);
			this->Controls->Add(this->textBoxDiscountPoint);
			this->Controls->Add(this->labelDiscountPoint);
			this->Controls->Add(this->textBoxRestock);
			this->Controls->Add(this->labelRestock);
			this->Controls->Add(this->textBoxTVA);
			this->Controls->Add(this->labelTVA);
			this->Controls->Add(this->textBoxPHT);
			this->Name = L"StockUpdate";
			this->Text = L"Modification de l\'article";
			this->Load += gcnew System::EventHandler(this, &StockUpdate::StockUpdate_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_serviceUpdate = gcnew SERVICE::SERV_UPDATE(
				"produit",
				"DesignationProduit = '"+this->textBoxName->Text+"', PrixHTProduit = '"+this->textBoxPHT->Text+"', SeuilReaprovisionnementProduit = "+this->textBoxRestock->Text+", TauxRemiseProduit = "+this->textBoxDiscountRate->Text+", SeuilRemiseProduit = "+this->textBoxDiscountPoint->Text,
				"RefProduit = "+Convert::ToString(this->idProduct+2)
			);
			this->_serviceUpdate->Update();
			delete this->_serviceUpdate;
			this->_serviceUpdate = gcnew SERVICE::SERV_UPDATE(
				"nature",
				"TVA = "+this->textBoxTVA->Text,
				"IdNature = (SELECT TOP(1) IdNature FROM produit WHERE (RefProduit = " + Convert::ToString(this->idProduct + 2)+"))"
			);
			this->_serviceUpdate->Update();
			this->Close();
		}

		Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}

		Void StockUpdate_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_serviceShow1 = gcnew SERVICE::SERV_SHOW("produit", idProduct, 1);
			this->_serviceShow2 = gcnew SERVICE::SERV_SHOW("produit", idProduct, 2);
			this->_serviceShow3 = gcnew SERVICE::SERV_SHOW("nature", idProduct, 2);
			this->_serviceShow4 = gcnew SERVICE::SERV_SHOW("produit", idProduct, 4);
			this->_serviceShow5 = gcnew SERVICE::SERV_SHOW("produit", idProduct, 5);
			this->_serviceShow6 = gcnew SERVICE::SERV_SHOW("produit", idProduct, 6);

			this->textBoxName->Text = this->_serviceShow1->Show();
			this->textBoxPHT->Text = this->_serviceShow2->Show();
			this->textBoxTVA->Text = this->_serviceShow3->Show();
			this->textBoxRestock->Text = this->_serviceShow4->Show();
			this->textBoxDiscountPoint->Text = this->_serviceShow5->Show();
			this->textBoxDiscountRate->Text = this->_serviceShow6->Show();
		}
	};
}
