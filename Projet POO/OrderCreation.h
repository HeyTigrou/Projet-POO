#pragma once
#include "SERV_SEARCH.h"
#include "SERV_INSERT.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class OrderCreation : public System::Windows::Forms::Form
	{
	public:
		OrderCreation(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~OrderCreation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		DataSet^ _dataSet;
		SERVICE::SERV_SEARCH^ _serviceSearch;
		SERVICE::SERV_INSERT^ _serviceInsert;

		System::Windows::Forms::GroupBox^ groupBoxUniqueCreation;
		System::Windows::Forms::TextBox^ textBoxSaveDayYear;
		System::Windows::Forms::TextBox^ textBoxSaveDayMonth;
		System::Windows::Forms::TextBox^ textBoxSaveDayDay;
		System::Windows::Forms::Label^ labelSaveDay;
		System::Windows::Forms::TextBox^ textBoxPaymentDayYear;
		System::Windows::Forms::TextBox^ textBoxDeliveryDateYear;
		System::Windows::Forms::TextBox^ textBoxPaymentDayMonth;
		System::Windows::Forms::TextBox^ textBoxDeliveryDateMonth;
		System::Windows::Forms::TextBox^ textBoxPaymentDateDay;
		System::Windows::Forms::Label^ labelPaymentDate;
		System::Windows::Forms::Label^ labelPaymentMethod;
		System::Windows::Forms::TextBox^ textBoxPaymentMethod;
		System::Windows::Forms::TextBox^ textBoxDeliveryDateDay;
		System::Windows::Forms::Label^ labelDeliveryDate;
		System::Windows::Forms::GroupBox^ groupBoxEnterProducts;
		System::Windows::Forms::GroupBox^ groupBoxChoice;
		
		System::Windows::Forms::DataGridView^ dataGridViewProducts;
		System::Windows::Forms::Button^ buttonSearch;
		System::Windows::Forms::TextBox^ textBoxSearch;
		System::Windows::Forms::Label^ labelSearch;
		System::Windows::Forms::TextBox^ textBoxQuantity;
		System::Windows::Forms::Label^ labelQuantity;
		System::Windows::Forms::TextBox^ textBoxID;
		System::Windows::Forms::Label^ labelIDInfo;
		System::Windows::Forms::Button^ buttonAddProduct;
		System::Windows::Forms::Button^ buttonCancel;
		System::Windows::Forms::Button^ buttonConfirm;
		System::Windows::Forms::RadioButton^ radioButtonIDChoice;
		System::Windows::Forms::RadioButton^ radioButtonNameChoice;
		System::Windows::Forms::Label^ labelPostalCode;
		System::Windows::Forms::TextBox^ textBoxPostalCode;
		System::Windows::Forms::Label^ labelCity;
		System::Windows::Forms::TextBox^ textBoxCity;
		System::Windows::Forms::Label^ labelAddress;
		System::Windows::Forms::TextBox^ textBoxAddress;
		System::Windows::Forms::Label^ labelIdClient;
		System::Windows::Forms::TextBox^ textBoxIdClient;
		System::Windows::Forms::TextBox^ textBoxEmissionDateOrderYear;
		System::Windows::Forms::TextBox^ textBoxEmissionDateOrderMonth;
		System::Windows::Forms::TextBox^ textBoxEmissionDateOrderDay;
		System::Windows::Forms::Label^ labelEmissionDateOrder;
		System::Windows::Forms::Button^ buttonCreateOrder;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->groupBoxUniqueCreation = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCreateOrder = (gcnew System::Windows::Forms::Button());
			this->textBoxEmissionDateOrderYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmissionDateOrderMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmissionDateOrderDay = (gcnew System::Windows::Forms::TextBox());
			this->labelEmissionDateOrder = (gcnew System::Windows::Forms::Label());
			this->labelPostalCode = (gcnew System::Windows::Forms::Label());
			this->textBoxPostalCode = (gcnew System::Windows::Forms::TextBox());
			this->labelCity = (gcnew System::Windows::Forms::Label());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->labelAddress = (gcnew System::Windows::Forms::Label());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->labelIdClient = (gcnew System::Windows::Forms::Label());
			this->textBoxIdClient = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSaveDayYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSaveDayMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSaveDayDay = (gcnew System::Windows::Forms::TextBox());
			this->labelSaveDay = (gcnew System::Windows::Forms::Label());
			this->textBoxPaymentDayYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDeliveryDateYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPaymentDayMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDeliveryDateMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPaymentDateDay = (gcnew System::Windows::Forms::TextBox());
			this->labelPaymentDate = (gcnew System::Windows::Forms::Label());
			this->labelPaymentMethod = (gcnew System::Windows::Forms::Label());
			this->textBoxPaymentMethod = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDeliveryDateDay = (gcnew System::Windows::Forms::TextBox());
			this->labelDeliveryDate = (gcnew System::Windows::Forms::Label());
			this->groupBoxEnterProducts = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxQuantity = (gcnew System::Windows::Forms::TextBox());
			this->labelQuantity = (gcnew System::Windows::Forms::Label());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->labelIDInfo = (gcnew System::Windows::Forms::Label());
			this->buttonAddProduct = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->groupBoxChoice = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonIDChoice = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonNameChoice = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridViewProducts = (gcnew System::Windows::Forms::DataGridView());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->labelSearch = (gcnew System::Windows::Forms::Label());
			this->groupBoxUniqueCreation->SuspendLayout();
			this->groupBoxEnterProducts->SuspendLayout();
			this->groupBoxChoice->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBoxUniqueCreation
			// 
			this->groupBoxUniqueCreation->Controls->Add(this->buttonCreateOrder);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxEmissionDateOrderYear);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxEmissionDateOrderMonth);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxEmissionDateOrderDay);
			this->groupBoxUniqueCreation->Controls->Add(this->labelEmissionDateOrder);
			this->groupBoxUniqueCreation->Controls->Add(this->labelPostalCode);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxPostalCode);
			this->groupBoxUniqueCreation->Controls->Add(this->labelCity);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxCity);
			this->groupBoxUniqueCreation->Controls->Add(this->labelAddress);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxAddress);
			this->groupBoxUniqueCreation->Controls->Add(this->labelIdClient);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxIdClient);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxSaveDayYear);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxSaveDayMonth);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxSaveDayDay);
			this->groupBoxUniqueCreation->Controls->Add(this->labelSaveDay);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxPaymentDayYear);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxDeliveryDateYear);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxPaymentDayMonth);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxDeliveryDateMonth);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxPaymentDateDay);
			this->groupBoxUniqueCreation->Controls->Add(this->labelPaymentDate);
			this->groupBoxUniqueCreation->Controls->Add(this->labelPaymentMethod);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxPaymentMethod);
			this->groupBoxUniqueCreation->Controls->Add(this->textBoxDeliveryDateDay);
			this->groupBoxUniqueCreation->Controls->Add(this->labelDeliveryDate);
			this->groupBoxUniqueCreation->Location = System::Drawing::Point(13, 13);
			this->groupBoxUniqueCreation->Name = L"groupBoxUniqueCreation";
			this->groupBoxUniqueCreation->Size = System::Drawing::Size(631, 259);
			this->groupBoxUniqueCreation->TabIndex = 0;
			this->groupBoxUniqueCreation->TabStop = false;
			this->groupBoxUniqueCreation->Text = L"Données à rentrer qu\'une seule fois";
			// 
			// buttonCreateOrder
			// 
			this->buttonCreateOrder->Location = System::Drawing::Point(349, 207);
			this->buttonCreateOrder->Name = L"buttonCreateOrder";
			this->buttonCreateOrder->Size = System::Drawing::Size(243, 23);
			this->buttonCreateOrder->TabIndex = 11;
			this->buttonCreateOrder->Text = L"Créer la commande";
			this->buttonCreateOrder->UseVisualStyleBackColor = true;
			this->buttonCreateOrder->Click += gcnew System::EventHandler(this, &OrderCreation::buttonCreateOrder_Click);
			// 
			// textBoxEmissionDateOrderYear
			// 
			this->textBoxEmissionDateOrderYear->Location = System::Drawing::Point(475, 118);
			this->textBoxEmissionDateOrderYear->MaxLength = 4;
			this->textBoxEmissionDateOrderYear->Name = L"textBoxEmissionDateOrderYear";
			this->textBoxEmissionDateOrderYear->Size = System::Drawing::Size(117, 20);
			this->textBoxEmissionDateOrderYear->TabIndex = 26;
			// 
			// textBoxEmissionDateOrderMonth
			// 
			this->textBoxEmissionDateOrderMonth->Location = System::Drawing::Point(412, 118);
			this->textBoxEmissionDateOrderMonth->MaxLength = 2;
			this->textBoxEmissionDateOrderMonth->Name = L"textBoxEmissionDateOrderMonth";
			this->textBoxEmissionDateOrderMonth->Size = System::Drawing::Size(57, 20);
			this->textBoxEmissionDateOrderMonth->TabIndex = 25;
			// 
			// textBoxEmissionDateOrderDay
			// 
			this->textBoxEmissionDateOrderDay->Location = System::Drawing::Point(349, 118);
			this->textBoxEmissionDateOrderDay->MaxLength = 2;
			this->textBoxEmissionDateOrderDay->Name = L"textBoxEmissionDateOrderDay";
			this->textBoxEmissionDateOrderDay->Size = System::Drawing::Size(57, 20);
			this->textBoxEmissionDateOrderDay->TabIndex = 24;
			// 
			// labelEmissionDateOrder
			// 
			this->labelEmissionDateOrder->AutoSize = true;
			this->labelEmissionDateOrder->Location = System::Drawing::Point(346, 102);
			this->labelEmissionDateOrder->Name = L"labelEmissionDateOrder";
			this->labelEmissionDateOrder->Size = System::Drawing::Size(154, 13);
			this->labelEmissionDateOrder->TabIndex = 23;
			this->labelEmissionDateOrder->Text = L"Date émission de la commande";
			// 
			// labelPostalCode
			// 
			this->labelPostalCode->AutoSize = true;
			this->labelPostalCode->Location = System::Drawing::Point(4, 146);
			this->labelPostalCode->Name = L"labelPostalCode";
			this->labelPostalCode->Size = System::Drawing::Size(64, 13);
			this->labelPostalCode->TabIndex = 22;
			this->labelPostalCode->Text = L"Code Postal";
			// 
			// textBoxPostalCode
			// 
			this->textBoxPostalCode->Location = System::Drawing::Point(7, 162);
			this->textBoxPostalCode->Name = L"textBoxPostalCode";
			this->textBoxPostalCode->Size = System::Drawing::Size(243, 20);
			this->textBoxPostalCode->TabIndex = 21;
			// 
			// labelCity
			// 
			this->labelCity->AutoSize = true;
			this->labelCity->Location = System::Drawing::Point(4, 102);
			this->labelCity->Name = L"labelCity";
			this->labelCity->Size = System::Drawing::Size(26, 13);
			this->labelCity->TabIndex = 20;
			this->labelCity->Text = L"Ville";
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(7, 118);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(243, 20);
			this->textBoxCity->TabIndex = 19;
			// 
			// labelAddress
			// 
			this->labelAddress->AutoSize = true;
			this->labelAddress->Location = System::Drawing::Point(4, 61);
			this->labelAddress->Name = L"labelAddress";
			this->labelAddress->Size = System::Drawing::Size(45, 13);
			this->labelAddress->TabIndex = 18;
			this->labelAddress->Text = L"Adresse";
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->Location = System::Drawing::Point(7, 77);
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(243, 20);
			this->textBoxAddress->TabIndex = 17;
			// 
			// labelIdClient
			// 
			this->labelIdClient->AutoSize = true;
			this->labelIdClient->Location = System::Drawing::Point(4, 21);
			this->labelIdClient->Name = L"labelIdClient";
			this->labelIdClient->Size = System::Drawing::Size(44, 13);
			this->labelIdClient->TabIndex = 16;
			this->labelIdClient->Text = L"Id client";
			// 
			// textBoxIdClient
			// 
			this->textBoxIdClient->Location = System::Drawing::Point(7, 37);
			this->textBoxIdClient->Name = L"textBoxIdClient";
			this->textBoxIdClient->Size = System::Drawing::Size(243, 20);
			this->textBoxIdClient->TabIndex = 15;
			// 
			// textBoxSaveDayYear
			// 
			this->textBoxSaveDayYear->Location = System::Drawing::Point(475, 162);
			this->textBoxSaveDayYear->MaxLength = 4;
			this->textBoxSaveDayYear->Name = L"textBoxSaveDayYear";
			this->textBoxSaveDayYear->Size = System::Drawing::Size(117, 20);
			this->textBoxSaveDayYear->TabIndex = 14;
			// 
			// textBoxSaveDayMonth
			// 
			this->textBoxSaveDayMonth->Location = System::Drawing::Point(412, 162);
			this->textBoxSaveDayMonth->MaxLength = 2;
			this->textBoxSaveDayMonth->Name = L"textBoxSaveDayMonth";
			this->textBoxSaveDayMonth->Size = System::Drawing::Size(57, 20);
			this->textBoxSaveDayMonth->TabIndex = 13;
			// 
			// textBoxSaveDayDay
			// 
			this->textBoxSaveDayDay->Location = System::Drawing::Point(349, 162);
			this->textBoxSaveDayDay->MaxLength = 2;
			this->textBoxSaveDayDay->Name = L"textBoxSaveDayDay";
			this->textBoxSaveDayDay->Size = System::Drawing::Size(57, 20);
			this->textBoxSaveDayDay->TabIndex = 12;
			// 
			// labelSaveDay
			// 
			this->labelSaveDay->AutoSize = true;
			this->labelSaveDay->Location = System::Drawing::Point(346, 146);
			this->labelSaveDay->Name = L"labelSaveDay";
			this->labelSaveDay->Size = System::Drawing::Size(145, 13);
			this->labelSaveDay->TabIndex = 11;
			this->labelSaveDay->Text = L"Date enregistrement du solde";
			// 
			// textBoxPaymentDayYear
			// 
			this->textBoxPaymentDayYear->Location = System::Drawing::Point(475, 77);
			this->textBoxPaymentDayYear->MaxLength = 4;
			this->textBoxPaymentDayYear->Name = L"textBoxPaymentDayYear";
			this->textBoxPaymentDayYear->Size = System::Drawing::Size(117, 20);
			this->textBoxPaymentDayYear->TabIndex = 10;
			// 
			// textBoxDeliveryDateYear
			// 
			this->textBoxDeliveryDateYear->Location = System::Drawing::Point(475, 38);
			this->textBoxDeliveryDateYear->MaxLength = 4;
			this->textBoxDeliveryDateYear->Name = L"textBoxDeliveryDateYear";
			this->textBoxDeliveryDateYear->Size = System::Drawing::Size(117, 20);
			this->textBoxDeliveryDateYear->TabIndex = 7;
			// 
			// textBoxPaymentDayMonth
			// 
			this->textBoxPaymentDayMonth->Location = System::Drawing::Point(412, 77);
			this->textBoxPaymentDayMonth->MaxLength = 2;
			this->textBoxPaymentDayMonth->Name = L"textBoxPaymentDayMonth";
			this->textBoxPaymentDayMonth->Size = System::Drawing::Size(57, 20);
			this->textBoxPaymentDayMonth->TabIndex = 9;
			// 
			// textBoxDeliveryDateMonth
			// 
			this->textBoxDeliveryDateMonth->Location = System::Drawing::Point(412, 38);
			this->textBoxDeliveryDateMonth->MaxLength = 2;
			this->textBoxDeliveryDateMonth->Name = L"textBoxDeliveryDateMonth";
			this->textBoxDeliveryDateMonth->Size = System::Drawing::Size(57, 20);
			this->textBoxDeliveryDateMonth->TabIndex = 6;
			// 
			// textBoxPaymentDateDay
			// 
			this->textBoxPaymentDateDay->Location = System::Drawing::Point(349, 77);
			this->textBoxPaymentDateDay->MaxLength = 2;
			this->textBoxPaymentDateDay->Name = L"textBoxPaymentDateDay";
			this->textBoxPaymentDateDay->Size = System::Drawing::Size(57, 20);
			this->textBoxPaymentDateDay->TabIndex = 8;
			// 
			// labelPaymentDate
			// 
			this->labelPaymentDate->AutoSize = true;
			this->labelPaymentDate->Location = System::Drawing::Point(346, 61);
			this->labelPaymentDate->Name = L"labelPaymentDate";
			this->labelPaymentDate->Size = System::Drawing::Size(91, 13);
			this->labelPaymentDate->TabIndex = 4;
			this->labelPaymentDate->Text = L"Date de paiement";
			// 
			// labelPaymentMethod
			// 
			this->labelPaymentMethod->AutoSize = true;
			this->labelPaymentMethod->Location = System::Drawing::Point(4, 193);
			this->labelPaymentMethod->Name = L"labelPaymentMethod";
			this->labelPaymentMethod->Size = System::Drawing::Size(100, 13);
			this->labelPaymentMethod->TabIndex = 3;
			this->labelPaymentMethod->Text = L"Moyen de paiement";
			// 
			// textBoxPaymentMethod
			// 
			this->textBoxPaymentMethod->Location = System::Drawing::Point(7, 209);
			this->textBoxPaymentMethod->Name = L"textBoxPaymentMethod";
			this->textBoxPaymentMethod->Size = System::Drawing::Size(243, 20);
			this->textBoxPaymentMethod->TabIndex = 2;
			// 
			// textBoxDeliveryDateDay
			// 
			this->textBoxDeliveryDateDay->Location = System::Drawing::Point(349, 38);
			this->textBoxDeliveryDateDay->MaxLength = 2;
			this->textBoxDeliveryDateDay->Name = L"textBoxDeliveryDateDay";
			this->textBoxDeliveryDateDay->Size = System::Drawing::Size(57, 20);
			this->textBoxDeliveryDateDay->TabIndex = 1;
			// 
			// labelDeliveryDate
			// 
			this->labelDeliveryDate->AutoSize = true;
			this->labelDeliveryDate->Location = System::Drawing::Point(346, 21);
			this->labelDeliveryDate->Name = L"labelDeliveryDate";
			this->labelDeliveryDate->Size = System::Drawing::Size(86, 13);
			this->labelDeliveryDate->TabIndex = 0;
			this->labelDeliveryDate->Text = L"Date de livraison";
			// 
			// groupBoxEnterProducts
			// 
			this->groupBoxEnterProducts->Controls->Add(this->textBoxQuantity);
			this->groupBoxEnterProducts->Controls->Add(this->labelQuantity);
			this->groupBoxEnterProducts->Controls->Add(this->textBoxID);
			this->groupBoxEnterProducts->Controls->Add(this->labelIDInfo);
			this->groupBoxEnterProducts->Controls->Add(this->buttonAddProduct);
			this->groupBoxEnterProducts->Controls->Add(this->buttonCancel);
			this->groupBoxEnterProducts->Controls->Add(this->buttonConfirm);
			this->groupBoxEnterProducts->Controls->Add(this->groupBoxChoice);
			this->groupBoxEnterProducts->Controls->Add(this->dataGridViewProducts);
			this->groupBoxEnterProducts->Controls->Add(this->buttonSearch);
			this->groupBoxEnterProducts->Controls->Add(this->textBoxSearch);
			this->groupBoxEnterProducts->Controls->Add(this->labelSearch);
			this->groupBoxEnterProducts->Location = System::Drawing::Point(13, 303);
			this->groupBoxEnterProducts->Name = L"groupBoxEnterProducts";
			this->groupBoxEnterProducts->Size = System::Drawing::Size(631, 283);
			this->groupBoxEnterProducts->TabIndex = 1;
			this->groupBoxEnterProducts->TabStop = false;
			this->groupBoxEnterProducts->Text = L"Veuillez entrez les articles de votre commande";
			// 
			// textBoxQuantity
			// 
			this->textBoxQuantity->Location = System::Drawing::Point(298, 151);
			this->textBoxQuantity->Name = L"textBoxQuantity";
			this->textBoxQuantity->Size = System::Drawing::Size(327, 20);
			this->textBoxQuantity->TabIndex = 10;
			// 
			// labelQuantity
			// 
			this->labelQuantity->AutoSize = true;
			this->labelQuantity->Location = System::Drawing::Point(295, 135);
			this->labelQuantity->Name = L"labelQuantity";
			this->labelQuantity->Size = System::Drawing::Size(53, 13);
			this->labelQuantity->TabIndex = 9;
			this->labelQuantity->Text = L"Quantité :";
			// 
			// textBoxID
			// 
			this->textBoxID->Location = System::Drawing::Point(298, 112);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(327, 20);
			this->textBoxID->TabIndex = 8;
			// 
			// labelIDInfo
			// 
			this->labelIDInfo->AutoSize = true;
			this->labelIDInfo->Location = System::Drawing::Point(295, 95);
			this->labelIDInfo->Name = L"labelIDInfo";
			this->labelIDInfo->Size = System::Drawing::Size(112, 13);
			this->labelIDInfo->TabIndex = 2;
			this->labelIDInfo->Text = L"ID de l\'article à ajouter";
			// 
			// buttonAddProduct
			// 
			this->buttonAddProduct->Location = System::Drawing::Point(298, 177);
			this->buttonAddProduct->Name = L"buttonAddProduct";
			this->buttonAddProduct->Size = System::Drawing::Size(327, 23);
			this->buttonAddProduct->TabIndex = 7;
			this->buttonAddProduct->Text = L"Ajouter l\'article";
			this->buttonAddProduct->UseVisualStyleBackColor = true;
			this->buttonAddProduct->Click += gcnew System::EventHandler(this, &OrderCreation::buttonAddProduct_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(298, 254);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(327, 23);
			this->buttonCancel->TabIndex = 6;
			this->buttonCancel->Text = L"Annuler";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &OrderCreation::buttonCancel_Click);
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(298, 225);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(327, 23);
			this->buttonConfirm->TabIndex = 5;
			this->buttonConfirm->Text = L"Valider";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &OrderCreation::buttonConfirm_Click);
			// 
			// groupBoxChoice
			// 
			this->groupBoxChoice->Controls->Add(this->radioButtonIDChoice);
			this->groupBoxChoice->Controls->Add(this->radioButtonNameChoice);
			this->groupBoxChoice->Location = System::Drawing::Point(298, 20);
			this->groupBoxChoice->Name = L"groupBoxChoice";
			this->groupBoxChoice->Size = System::Drawing::Size(327, 72);
			this->groupBoxChoice->TabIndex = 4;
			this->groupBoxChoice->TabStop = false;
			this->groupBoxChoice->Text = L"Choix du mode recherche";
			// 
			// radioButtonIDChoice
			// 
			this->radioButtonIDChoice->AutoSize = true;
			this->radioButtonIDChoice->Location = System::Drawing::Point(7, 44);
			this->radioButtonIDChoice->Name = L"radioButtonIDChoice";
			this->radioButtonIDChoice->Size = System::Drawing::Size(90, 17);
			this->radioButtonIDChoice->TabIndex = 1;
			this->radioButtonIDChoice->TabStop = true;
			this->radioButtonIDChoice->Text = L"Par ID produit";
			this->radioButtonIDChoice->UseVisualStyleBackColor = true;
			// 
			// radioButtonNameChoice
			// 
			this->radioButtonNameChoice->AutoSize = true;
			this->radioButtonNameChoice->Location = System::Drawing::Point(7, 20);
			this->radioButtonNameChoice->Name = L"radioButtonNameChoice";
			this->radioButtonNameChoice->Size = System::Drawing::Size(64, 17);
			this->radioButtonNameChoice->TabIndex = 0;
			this->radioButtonNameChoice->TabStop = true;
			this->radioButtonNameChoice->Text = L"Par nom";
			this->radioButtonNameChoice->UseVisualStyleBackColor = true;
			// 
			// dataGridViewProducts
			// 
			this->dataGridViewProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewProducts->Location = System::Drawing::Point(10, 76);
			this->dataGridViewProducts->Name = L"dataGridViewProducts";
			this->dataGridViewProducts->Size = System::Drawing::Size(243, 201);
			this->dataGridViewProducts->TabIndex = 3;
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(178, 49);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(75, 20);
			this->buttonSearch->TabIndex = 2;
			this->buttonSearch->Text = L"rechercher";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &OrderCreation::buttonSearch_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(10, 49);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(158, 20);
			this->textBoxSearch->TabIndex = 1;
			// 
			// labelSearch
			// 
			this->labelSearch->AutoSize = true;
			this->labelSearch->Location = System::Drawing::Point(7, 20);
			this->labelSearch->Name = L"labelSearch";
			this->labelSearch->Size = System::Drawing::Size(255, 26);
			this->labelSearch->TabIndex = 0;
			this->labelSearch->Text = L"Recherchez l\'article que vous voulez en fonction du \r\nmode de recherche :";
			// 
			// OrderCreation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 598);
			this->Controls->Add(this->groupBoxEnterProducts);
			this->Controls->Add(this->groupBoxUniqueCreation);
			this->Name = L"OrderCreation";
			this->Text = L"Création d\'une commande";
			this->groupBoxUniqueCreation->ResumeLayout(false);
			this->groupBoxUniqueCreation->PerformLayout();
			this->groupBoxEnterProducts->ResumeLayout(false);
			this->groupBoxEnterProducts->PerformLayout();
			this->groupBoxChoice->ResumeLayout(false);
			this->groupBoxChoice->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewProducts))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->labelSearch->Text = L"Recherchez l\'article que vous voulez en fonction du \r\nmode de recherche :";
			if (radioButtonIDChoice->Checked == true)
			{
				if (this->textBoxSearch->Text != "")
				{
					this->dataGridViewProducts->Refresh();
					this->_serviceSearch = gcnew SERVICE::SERV_SEARCH(
						"RefProduit, DesignationProduit, PrixHTProduit, QuantiteStockProduit",
						"produit",
						"produit.RefProduit",
						"=" + this->textBoxSearch->Text
					);
					this->_dataSet = this->_serviceSearch->loadDatabase();
					this->dataGridViewProducts->DataSource = this->_dataSet;
					this->dataGridViewProducts->DataMember = "RefProduit, DesignationProduit, PrixHTProduit, QuantiteStockProduit";
				}
				
				else
				{
					this->labelSearch->Text += " (veuillez rentrer un id s'il vous plait)";
				}
			}
			if (radioButtonNameChoice->Checked == true)
			{
				this->dataGridViewProducts->Refresh();
				this->_serviceSearch = gcnew SERVICE::SERV_SEARCH(
					"RefProduit, DesignationProduit, PrixHTProduit, QuantiteStockProduit",
					"produit",
					"produit.DesignationProduit",
					" LIKE '" + this->textBoxSearch->Text + "%'"
				);
				this->_dataSet = this->_serviceSearch->loadDatabase();
				this->dataGridViewProducts->DataSource = this->_dataSet;
				this->dataGridViewProducts->DataMember = "RefProduit, DesignationProduit, PrixHTProduit, QuantiteStockProduit";
			}
		}

		Void buttonAddProduct_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ CreationDate = this->textBoxEmissionDateOrderYear->Text + "-" + this->textBoxEmissionDateOrderMonth->Text + "-" + this->textBoxEmissionDateOrderDay->Text;
			this->_serviceInsert = gcnew SERVICE::SERV_INSERT(
				"Contenir",
				"IdCommande, RefProduit, QuantiteCommande",
				"(SELECT TOP(1) IdCommande FROM commande WHERE(DateEmissionCommande = '"+CreationDate+"' AND IdPersonne ='"+this->textBoxIdClient->Text+"')), '" + this->textBoxID->Text + "', '"+this->textBoxQuantity->Text+"'"
			);
			this->_serviceInsert->Insert();
			delete this->_serviceInsert;
			
		}

		Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}

		Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}

		Void buttonCreateOrder_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ DeliveryDate = this->textBoxDeliveryDateYear->Text + "-" + this->textBoxDeliveryDateMonth->Text + "-" + this->textBoxDeliveryDateDay->Text;
			String^ PayementDate = this->textBoxPaymentDayYear->Text + "-" + this->textBoxPaymentDayMonth->Text + "-" + this->textBoxPaymentDateDay->Text;
			String^ SaveDate = this->textBoxSaveDayYear->Text + "-" + this->textBoxSaveDayMonth->Text + "-" + this->textBoxSaveDayDay->Text;
			String^ CreationDate = this->textBoxEmissionDateOrderYear->Text + "-" + this->textBoxEmissionDateOrderMonth->Text + "-" + this->textBoxEmissionDateOrderDay->Text;

			this->_serviceInsert = gcnew SERVICE::SERV_INSERT(
				"ville",
				"NomVille, CodePostal",
				"'" + this->textBoxCity->Text + "', '" + this->textBoxPostalCode->Text + "'"
			);
			this->_serviceInsert->Insert();
			delete this->_serviceInsert;

			this->_serviceInsert = gcnew SERVICE::SERV_INSERT(
				"adresse",
				"RueAdresse, IdVille",
				"'" + this->textBoxAddress->Text + "', (SELECT TOP(1) IdVille FROM ville WHERE (NomVille = '" + this->textBoxCity->Text + "' AND CodePostal = '" + this->textBoxPostalCode->Text + "'))"
			);
			this->_serviceInsert->Insert();
			delete this->_serviceInsert;

			this->_serviceInsert = gcnew SERVICE::SERV_INSERT(
				"facture",
				"IdAdresse",
				"(SELECT TOP(1) IdAdresse FROM adresse WHERE (RueAdresse = '" + this->textBoxAddress->Text + "'))"
			);
			this->_serviceInsert->Insert();
			delete this->_serviceInsert;

			this->_serviceInsert = gcnew SERVICE::SERV_INSERT(
				"commande",
				"DateLivraisonPrevuCommande, DateEmissionCommande, IdPersonne, IdFacture, IdAdresse",
				"'" + DeliveryDate + "', '" + CreationDate + "', " + this->textBoxIdClient->Text + ", (SELECT TOP(1) IdFacture FROM facture WHERE(IdAdresse = (SELECT TOP(1) IdAdresse FROM adresse WHERE (RueAdresse = '" + this->textBoxAddress->Text + "')))), (SELECT TOP(1) IdAdresse FROM adresse WHERE (RueAdresse = '" + this->textBoxAddress->Text + "'))"
			);
			this->_serviceInsert->Insert();
			delete this->_serviceInsert;

			this->_serviceInsert = gcnew SERVICE::SERV_INSERT(
				"paiement",
				"DatePaiement, MoyenPaiement, DateEnregistrementSolde, IdCommande",
				"'" + PayementDate + "', '" + this->textBoxPaymentMethod->Text + "', '" + SaveDate + "', (SELECT TOP(1) IdCommande FROM commande WHERE (IdPersonne = '" + this->textBoxIdClient->Text + "'))"
			);
			this->_serviceInsert->Insert();
			delete this->_serviceInsert;
		}
	};
}
