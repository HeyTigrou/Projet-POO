#pragma once
#include "SERV_SEARCH.h"
#include "SERV_SHOW.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class OrderShow : public System::Windows::Forms::Form
	{
	public:
		OrderShow(int id)
		{
			InitializeComponent();
			this->idOrder = id-1;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~OrderShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		int idOrder = 1;
		DataSet^ _dataSet;
		SERVICE::SERV_SEARCH^ _serviceDataGrid;
		SERVICE::SERV_SHOW^ _serviceShow1;
		SERVICE::SERV_SHOW^ _serviceShow2;
		SERVICE::SERV_SHOW^ _serviceShow3;
		SERVICE::SERV_SHOW^ _serviceShow4;
		SERVICE::SERV_SHOW^ _serviceShow5;
		SERVICE::SERV_SHOW^ _serviceShow6;

		System::Windows::Forms::Label^ labelIDOrder;
		System::Windows::Forms::Label^ labelIDOrderResult;
		System::Windows::Forms::Label^ labelDeliveryDate;
		System::Windows::Forms::Label^ labelDeliveryDateResult;
		System::Windows::Forms::Label^ labelCreationDate;
		System::Windows::Forms::Label^ labelCreationDateResult;
		System::Windows::Forms::Label^ labelPaymentDate;
		System::Windows::Forms::Label^ labelPaymentDateResult;
		System::Windows::Forms::Label^ labelPaymentMode;
		System::Windows::Forms::Label^ labelPaymentModeResult;
		System::Windows::Forms::Label^ labelSaveDate;
		System::Windows::Forms::Label^ labelSaveDateResult;
		System::Windows::Forms::DataGridView^ dataGridViewArticles;
		System::Windows::Forms::Label^ labelList;
		System::Windows::Forms::Button^ buttonReturn;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelIDOrder = (gcnew System::Windows::Forms::Label());
			this->labelIDOrderResult = (gcnew System::Windows::Forms::Label());
			this->labelDeliveryDate = (gcnew System::Windows::Forms::Label());
			this->labelDeliveryDateResult = (gcnew System::Windows::Forms::Label());
			this->labelCreationDate = (gcnew System::Windows::Forms::Label());
			this->labelCreationDateResult = (gcnew System::Windows::Forms::Label());
			this->labelPaymentDate = (gcnew System::Windows::Forms::Label());
			this->labelPaymentDateResult = (gcnew System::Windows::Forms::Label());
			this->labelPaymentMode = (gcnew System::Windows::Forms::Label());
			this->labelPaymentModeResult = (gcnew System::Windows::Forms::Label());
			this->labelSaveDate = (gcnew System::Windows::Forms::Label());
			this->labelSaveDateResult = (gcnew System::Windows::Forms::Label());
			this->dataGridViewArticles = (gcnew System::Windows::Forms::DataGridView());
			this->labelList = (gcnew System::Windows::Forms::Label());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticles))->BeginInit();
			this->SuspendLayout();
			// 
			// labelIDOrder
			// 
			this->labelIDOrder->AutoSize = true;
			this->labelIDOrder->Location = System::Drawing::Point(12, 9);
			this->labelIDOrder->Name = L"labelIDOrder";
			this->labelIDOrder->Size = System::Drawing::Size(154, 13);
			this->labelIDOrder->TabIndex = 0;
			this->labelIDOrder->Text = L"Réfrence de votre commande :";
			// 
			// labelIDOrderResult
			// 
			this->labelIDOrderResult->AutoSize = true;
			this->labelIDOrderResult->Location = System::Drawing::Point(172, 9);
			this->labelIDOrderResult->Name = L"labelIDOrderResult";
			this->labelIDOrderResult->Size = System::Drawing::Size(32, 13);
			this->labelIDOrderResult->TabIndex = 1;
			this->labelIDOrderResult->Text = L"result";
			// 
			// labelDeliveryDate
			// 
			this->labelDeliveryDate->AutoSize = true;
			this->labelDeliveryDate->Location = System::Drawing::Point(12, 30);
			this->labelDeliveryDate->Name = L"labelDeliveryDate";
			this->labelDeliveryDate->Size = System::Drawing::Size(92, 13);
			this->labelDeliveryDate->TabIndex = 2;
			this->labelDeliveryDate->Text = L"Date de livraison :";
			// 
			// labelDeliveryDateResult
			// 
			this->labelDeliveryDateResult->AutoSize = true;
			this->labelDeliveryDateResult->Location = System::Drawing::Point(110, 30);
			this->labelDeliveryDateResult->Name = L"labelDeliveryDateResult";
			this->labelDeliveryDateResult->Size = System::Drawing::Size(32, 13);
			this->labelDeliveryDateResult->TabIndex = 3;
			this->labelDeliveryDateResult->Text = L"result";
			// 
			// labelCreationDate
			// 
			this->labelCreationDate->AutoSize = true;
			this->labelCreationDate->Location = System::Drawing::Point(12, 51);
			this->labelCreationDate->Name = L"labelCreationDate";
			this->labelCreationDate->Size = System::Drawing::Size(168, 13);
			this->labelCreationDate->TabIndex = 4;
			this->labelCreationDate->Text = L"Date d\'émission de la commande :";
			// 
			// labelCreationDateResult
			// 
			this->labelCreationDateResult->AutoSize = true;
			this->labelCreationDateResult->Location = System::Drawing::Point(186, 51);
			this->labelCreationDateResult->Name = L"labelCreationDateResult";
			this->labelCreationDateResult->Size = System::Drawing::Size(32, 13);
			this->labelCreationDateResult->TabIndex = 5;
			this->labelCreationDateResult->Text = L"result";
			// 
			// labelPaymentDate
			// 
			this->labelPaymentDate->AutoSize = true;
			this->labelPaymentDate->Location = System::Drawing::Point(12, 72);
			this->labelPaymentDate->Name = L"labelPaymentDate";
			this->labelPaymentDate->Size = System::Drawing::Size(97, 13);
			this->labelPaymentDate->TabIndex = 6;
			this->labelPaymentDate->Text = L"Date de paiement :";
			// 
			// labelPaymentDateResult
			// 
			this->labelPaymentDateResult->AutoSize = true;
			this->labelPaymentDateResult->Location = System::Drawing::Point(116, 72);
			this->labelPaymentDateResult->Name = L"labelPaymentDateResult";
			this->labelPaymentDateResult->Size = System::Drawing::Size(32, 13);
			this->labelPaymentDateResult->TabIndex = 7;
			this->labelPaymentDateResult->Text = L"result";
			// 
			// labelPaymentMode
			// 
			this->labelPaymentMode->AutoSize = true;
			this->labelPaymentMode->Location = System::Drawing::Point(12, 93);
			this->labelPaymentMode->Name = L"labelPaymentMode";
			this->labelPaymentMode->Size = System::Drawing::Size(95, 13);
			this->labelPaymentMode->TabIndex = 8;
			this->labelPaymentMode->Text = L"Mode de paiement";
			// 
			// labelPaymentModeResult
			// 
			this->labelPaymentModeResult->AutoSize = true;
			this->labelPaymentModeResult->Location = System::Drawing::Point(113, 93);
			this->labelPaymentModeResult->Name = L"labelPaymentModeResult";
			this->labelPaymentModeResult->Size = System::Drawing::Size(32, 13);
			this->labelPaymentModeResult->TabIndex = 9;
			this->labelPaymentModeResult->Text = L"result";
			// 
			// labelSaveDate
			// 
			this->labelSaveDate->AutoSize = true;
			this->labelSaveDate->Location = System::Drawing::Point(12, 114);
			this->labelSaveDate->Name = L"labelSaveDate";
			this->labelSaveDate->Size = System::Drawing::Size(151, 13);
			this->labelSaveDate->TabIndex = 10;
			this->labelSaveDate->Text = L"Date enregistrement du solde :";
			// 
			// labelSaveDateResult
			// 
			this->labelSaveDateResult->AutoSize = true;
			this->labelSaveDateResult->Location = System::Drawing::Point(170, 114);
			this->labelSaveDateResult->Name = L"labelSaveDateResult";
			this->labelSaveDateResult->Size = System::Drawing::Size(32, 13);
			this->labelSaveDateResult->TabIndex = 11;
			this->labelSaveDateResult->Text = L"result";
			// 
			// dataGridViewArticles
			// 
			this->dataGridViewArticles->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewArticles->Location = System::Drawing::Point(12, 164);
			this->dataGridViewArticles->Name = L"dataGridViewArticles";
			this->dataGridViewArticles->Size = System::Drawing::Size(415, 150);
			this->dataGridViewArticles->TabIndex = 12;
			// 
			// labelList
			// 
			this->labelList->AutoSize = true;
			this->labelList->Location = System::Drawing::Point(9, 148);
			this->labelList->Name = L"labelList";
			this->labelList->Size = System::Drawing::Size(166, 13);
			this->labelList->TabIndex = 13;
			this->labelList->Text = L"Liste des articles de la commande";
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(352, 320);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(75, 23);
			this->buttonReturn->TabIndex = 14;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &OrderShow::buttonReturn_Click);
			// 
			// OrderShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 352);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->labelList);
			this->Controls->Add(this->dataGridViewArticles);
			this->Controls->Add(this->labelSaveDateResult);
			this->Controls->Add(this->labelSaveDate);
			this->Controls->Add(this->labelPaymentModeResult);
			this->Controls->Add(this->labelPaymentMode);
			this->Controls->Add(this->labelPaymentDateResult);
			this->Controls->Add(this->labelPaymentDate);
			this->Controls->Add(this->labelCreationDateResult);
			this->Controls->Add(this->labelCreationDate);
			this->Controls->Add(this->labelDeliveryDateResult);
			this->Controls->Add(this->labelDeliveryDate);
			this->Controls->Add(this->labelIDOrderResult);
			this->Controls->Add(this->labelIDOrder);
			this->Name = L"OrderShow";
			this->Text = L"Affichage de votre commande";
			this->Load += gcnew System::EventHandler(this, &OrderShow::OrderShow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticles))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}

		Void OrderShow_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_serviceShow1 = gcnew SERVICE::SERV_SHOW("commande", idOrder, 0);
			this->_serviceShow2 = gcnew SERVICE::SERV_SHOW("commande", idOrder, 2);
			this->_serviceShow3 = gcnew SERVICE::SERV_SHOW("commande", idOrder, 3);
			this->_serviceShow4 = gcnew SERVICE::SERV_SHOW("paiement", idOrder, 1);
			this->_serviceShow5 = gcnew SERVICE::SERV_SHOW("paiement", idOrder, 2);
			this->_serviceShow6 = gcnew SERVICE::SERV_SHOW("paiement", idOrder, 3);

		
			this->labelIDOrderResult->Text = this->_serviceShow1->Show();

			String^ DeliveryDate = this->_serviceShow2->Show();
			DeliveryDate = DeliveryDate->Substring(0, 10);
			this->labelDeliveryDateResult->Text = DeliveryDate;

			String^ CreationDate = this->_serviceShow3->Show();
			CreationDate = CreationDate->Substring(0, 10);
			this->labelCreationDateResult->Text = CreationDate;

			String^ PayementDate = this->_serviceShow4->Show();
			PayementDate = PayementDate->Substring(0, 10);
			this->labelPaymentDateResult->Text = PayementDate;

			this->labelPaymentModeResult->Text = this->_serviceShow5->Show();

			String^ SaveDate = this->_serviceShow6->Show();
			SaveDate = SaveDate->Substring(0, 10);
			this->labelSaveDateResult->Text = SaveDate;
			
			this->dataGridViewArticles->Refresh();
			this->_serviceDataGrid = gcnew SERVICE::SERV_SEARCH(
				"RefProduit, QuantiteCommande, DesignationProduit, PrixHTProduit", 
				"(SELECT Contenir.RefProduit, QuantiteCommande, DesignationProduit, PrixHTProduit, IdCommande as Id FROM (Contenir INNER JOIN produit ON Contenir.RefProduit = produit.RefProduit)) AS t", 
				"Id", 
				"=" + Convert::ToString(this->idOrder +1)
			);
			this->_dataSet = this->_serviceDataGrid->loadDatabase();
			this->dataGridViewArticles->DataSource = this->_dataSet;
			this->dataGridViewArticles->DataMember = "RefProduit, QuantiteCommande, DesignationProduit, PrixHTProduit";
		}
	};
}
