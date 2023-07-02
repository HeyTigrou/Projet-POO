#pragma once
#include "SERV_SHOW.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StockShow : public System::Windows::Forms::Form
	{
	public:
		StockShow(int id)
		{
			InitializeComponent();
			this->idStock = id -2;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StockShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		int idStock = 1;
		SERVICE::SERV_SHOW^ _service1;
		SERVICE::SERV_SHOW^ _service2;
		SERVICE::SERV_SHOW^ _service3;
		SERVICE::SERV_SHOW^ _service4;
		SERVICE::SERV_SHOW^ _service5;
		SERVICE::SERV_SHOW^ _service6;
		SERVICE::SERV_SHOW^ _service7;
		SERVICE::SERV_SHOW^ _service8;

		System::Windows::Forms::Label^ labelName;
		System::Windows::Forms::Label^ labelResultName;
		System::Windows::Forms::Label^ labelPHT;
		System::Windows::Forms::Label^ labelPHTResult;
		System::Windows::Forms::Label^ labelStockAmmount;
		System::Windows::Forms::Label^ labelStockAmmountResult;
		System::Windows::Forms::Label^ labelTVARate;
		System::Windows::Forms::Label^ labelTVARateResult;
		System::Windows::Forms::Label^ labelIdProduct;
		System::Windows::Forms::Label^ labelIDProductResult;
		System::Windows::Forms::Label^ labelRestockPoint;
		System::Windows::Forms::Label^ labelRestockPointResult;
		System::Windows::Forms::Label^ labelDiscountRate;
		System::Windows::Forms::Label^ labelDiscountRateResult;
		System::Windows::Forms::Label^ labelDiscountPoint;
		System::Windows::Forms::Label^ labelDiscountPointResult;
		System::Windows::Forms::Button^ buttonClose;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelResultName = (gcnew System::Windows::Forms::Label());
			this->labelPHT = (gcnew System::Windows::Forms::Label());
			this->labelPHTResult = (gcnew System::Windows::Forms::Label());
			this->labelStockAmmount = (gcnew System::Windows::Forms::Label());
			this->labelStockAmmountResult = (gcnew System::Windows::Forms::Label());
			this->labelTVARate = (gcnew System::Windows::Forms::Label());
			this->labelTVARateResult = (gcnew System::Windows::Forms::Label());
			this->labelIdProduct = (gcnew System::Windows::Forms::Label());
			this->labelIDProductResult = (gcnew System::Windows::Forms::Label());
			this->labelRestockPoint = (gcnew System::Windows::Forms::Label());
			this->labelRestockPointResult = (gcnew System::Windows::Forms::Label());
			this->labelDiscountRate = (gcnew System::Windows::Forms::Label());
			this->labelDiscountRateResult = (gcnew System::Windows::Forms::Label());
			this->labelDiscountPoint = (gcnew System::Windows::Forms::Label());
			this->labelDiscountPointResult = (gcnew System::Windows::Forms::Label());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(12, 15);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(66, 13);
			this->labelName->TabIndex = 0;
			this->labelName->Text = L"Nom article :";
			// 
			// labelResultName
			// 
			this->labelResultName->AutoSize = true;
			this->labelResultName->Location = System::Drawing::Point(84, 15);
			this->labelResultName->Name = L"labelResultName";
			this->labelResultName->Size = System::Drawing::Size(32, 13);
			this->labelResultName->TabIndex = 1;
			this->labelResultName->Text = L"result";
			// 
			// labelPHT
			// 
			this->labelPHT->AutoSize = true;
			this->labelPHT->Location = System::Drawing::Point(12, 28);
			this->labelPHT->Name = L"labelPHT";
			this->labelPHT->Size = System::Drawing::Size(76, 13);
			this->labelPHT->TabIndex = 2;
			this->labelPHT->Text = L"Prix hors taxe :";
			// 
			// labelPHTResult
			// 
			this->labelPHTResult->AutoSize = true;
			this->labelPHTResult->Location = System::Drawing::Point(94, 28);
			this->labelPHTResult->Name = L"labelPHTResult";
			this->labelPHTResult->Size = System::Drawing::Size(32, 13);
			this->labelPHTResult->TabIndex = 3;
			this->labelPHTResult->Text = L"result";
			// 
			// labelStockAmmount
			// 
			this->labelStockAmmount->AutoSize = true;
			this->labelStockAmmount->Location = System::Drawing::Point(12, 41);
			this->labelStockAmmount->Name = L"labelStockAmmount";
			this->labelStockAmmount->Size = System::Drawing::Size(100, 13);
			this->labelStockAmmount->TabIndex = 4;
			this->labelStockAmmount->Text = L"Quantité en stock : ";
			// 
			// labelStockAmmountResult
			// 
			this->labelStockAmmountResult->AutoSize = true;
			this->labelStockAmmountResult->Location = System::Drawing::Point(118, 41);
			this->labelStockAmmountResult->Name = L"labelStockAmmountResult";
			this->labelStockAmmountResult->Size = System::Drawing::Size(32, 13);
			this->labelStockAmmountResult->TabIndex = 5;
			this->labelStockAmmountResult->Text = L"result";
			// 
			// labelTVARate
			// 
			this->labelTVARate->AutoSize = true;
			this->labelTVARate->Location = System::Drawing::Point(12, 54);
			this->labelTVARate->Name = L"labelTVARate";
			this->labelTVARate->Size = System::Drawing::Size(76, 13);
			this->labelTVARate->TabIndex = 6;
			this->labelTVARate->Text = L"Taux de TVA :";
			this->labelTVARate->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTVARateResult
			// 
			this->labelTVARateResult->AutoSize = true;
			this->labelTVARateResult->Location = System::Drawing::Point(94, 54);
			this->labelTVARateResult->Name = L"labelTVARateResult";
			this->labelTVARateResult->Size = System::Drawing::Size(32, 13);
			this->labelTVARateResult->TabIndex = 7;
			this->labelTVARateResult->Text = L"result";
			// 
			// labelIdProduct
			// 
			this->labelIdProduct->AutoSize = true;
			this->labelIdProduct->Location = System::Drawing::Point(12, 2);
			this->labelIdProduct->Name = L"labelIdProduct";
			this->labelIdProduct->Size = System::Drawing::Size(94, 13);
			this->labelIdProduct->TabIndex = 8;
			this->labelIdProduct->Text = L"Référence article :";
			// 
			// labelIDProductResult
			// 
			this->labelIDProductResult->AutoSize = true;
			this->labelIDProductResult->Location = System::Drawing::Point(112, 2);
			this->labelIDProductResult->Name = L"labelIDProductResult";
			this->labelIDProductResult->Size = System::Drawing::Size(32, 13);
			this->labelIDProductResult->TabIndex = 9;
			this->labelIDProductResult->Text = L"result";
			// 
			// labelRestockPoint
			// 
			this->labelRestockPoint->AutoSize = true;
			this->labelRestockPoint->Location = System::Drawing::Point(12, 67);
			this->labelRestockPoint->Name = L"labelRestockPoint";
			this->labelRestockPoint->Size = System::Drawing::Size(146, 13);
			this->labelRestockPoint->TabIndex = 10;
			this->labelRestockPoint->Text = L"Seuil de réaprovisionnement :";
			// 
			// labelRestockPointResult
			// 
			this->labelRestockPointResult->AutoSize = true;
			this->labelRestockPointResult->Location = System::Drawing::Point(164, 67);
			this->labelRestockPointResult->Name = L"labelRestockPointResult";
			this->labelRestockPointResult->Size = System::Drawing::Size(32, 13);
			this->labelRestockPointResult->TabIndex = 11;
			this->labelRestockPointResult->Text = L"result";
			// 
			// labelDiscountRate
			// 
			this->labelDiscountRate->AutoSize = true;
			this->labelDiscountRate->Location = System::Drawing::Point(12, 80);
			this->labelDiscountRate->Name = L"labelDiscountRate";
			this->labelDiscountRate->Size = System::Drawing::Size(85, 13);
			this->labelDiscountRate->TabIndex = 12;
			this->labelDiscountRate->Text = L"Taux de remise :";
			// 
			// labelDiscountRateResult
			// 
			this->labelDiscountRateResult->AutoSize = true;
			this->labelDiscountRateResult->Location = System::Drawing::Point(103, 80);
			this->labelDiscountRateResult->Name = L"labelDiscountRateResult";
			this->labelDiscountRateResult->Size = System::Drawing::Size(32, 13);
			this->labelDiscountRateResult->TabIndex = 13;
			this->labelDiscountRateResult->Text = L"result";
			// 
			// labelDiscountPoint
			// 
			this->labelDiscountPoint->AutoSize = true;
			this->labelDiscountPoint->Location = System::Drawing::Point(12, 93);
			this->labelDiscountPoint->Name = L"labelDiscountPoint";
			this->labelDiscountPoint->Size = System::Drawing::Size(84, 13);
			this->labelDiscountPoint->TabIndex = 14;
			this->labelDiscountPoint->Text = L"Seuil de remise :";
			// 
			// labelDiscountPointResult
			// 
			this->labelDiscountPointResult->AutoSize = true;
			this->labelDiscountPointResult->Location = System::Drawing::Point(102, 93);
			this->labelDiscountPointResult->Name = L"labelDiscountPointResult";
			this->labelDiscountPointResult->Size = System::Drawing::Size(32, 13);
			this->labelDiscountPointResult->TabIndex = 15;
			this->labelDiscountPointResult->Text = L"result";
			// 
			// buttonClose
			// 
			this->buttonClose->Location = System::Drawing::Point(12, 109);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(198, 23);
			this->buttonClose->TabIndex = 16;
			this->buttonClose->Text = L"Retour";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &StockShow::buttonClose_Click);
			// 
			// StockShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(222, 144);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->labelDiscountPointResult);
			this->Controls->Add(this->labelDiscountPoint);
			this->Controls->Add(this->labelDiscountRateResult);
			this->Controls->Add(this->labelDiscountRate);
			this->Controls->Add(this->labelRestockPointResult);
			this->Controls->Add(this->labelRestockPoint);
			this->Controls->Add(this->labelIDProductResult);
			this->Controls->Add(this->labelIdProduct);
			this->Controls->Add(this->labelTVARateResult);
			this->Controls->Add(this->labelTVARate);
			this->Controls->Add(this->labelStockAmmountResult);
			this->Controls->Add(this->labelStockAmmount);
			this->Controls->Add(this->labelPHTResult);
			this->Controls->Add(this->labelPHT);
			this->Controls->Add(this->labelResultName);
			this->Controls->Add(this->labelName);
			this->Name = L"StockShow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fiche article";
			this->Load += gcnew System::EventHandler(this, &StockShow::StockShow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void StockShow_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_service1 = gcnew SERVICE::SERV_SHOW("produit", idStock, 0);
			this->_service2 = gcnew SERVICE::SERV_SHOW("produit", idStock, 1);
			this->_service3 = gcnew SERVICE::SERV_SHOW("produit", idStock, 2);
			this->_service4 = gcnew SERVICE::SERV_SHOW("produit", idStock, 3);
			this->_service5 = gcnew SERVICE::SERV_SHOW("nature", idStock, 2);
			this->_service6 = gcnew SERVICE::SERV_SHOW("produit", idStock, 4);
			this->_service7 = gcnew SERVICE::SERV_SHOW("produit", idStock, 5);
			this->_service8 = gcnew SERVICE::SERV_SHOW("produit", idStock, 6);

			this->labelIDProductResult->Text = this->_service1->Show();
			this->labelResultName->Text = this->_service2->Show();
			this->labelPHTResult->Text = this->_service3->Show();
			this->labelStockAmmountResult->Text = this->_service4->Show(); 
			this->labelTVARateResult->Text = this->_service5->Show();
			this->labelRestockPointResult->Text = this->_service6->Show();
			this->labelDiscountRateResult->Text = this->_service7->Show();
			this->labelDiscountPointResult->Text = this->_service8->Show();
		}

		Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
