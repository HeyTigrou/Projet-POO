#pragma once
#include "SERV_STATS.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StatsTopProducts : public System::Windows::Forms::Form
	{
	public:
		StatsTopProducts(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:

		~StatsTopProducts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		DataSet^ _dataSet;
		SERVICE::SERV_STATS^ _service;

		System::Windows::Forms::DataGridView^ dataGridViewListe;
		System::Windows::Forms::Label^ labelInfo;
		System::Windows::Forms::Button^ buttonReturn;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->dataGridViewListe = (gcnew System::Windows::Forms::DataGridView());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewListe))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewListe
			// 
			this->dataGridViewListe->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewListe->Location = System::Drawing::Point(12, 34);
			this->dataGridViewListe->Name = L"dataGridViewListe";
			this->dataGridViewListe->Size = System::Drawing::Size(401, 150);
			this->dataGridViewListe->TabIndex = 0;
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(12, 9);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(215, 13);
			this->labelInfo->TabIndex = 1;
			this->labelInfo->Text = L"Voici la liste des 10 articles les plus vendus :";
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(338, 190);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(75, 23);
			this->buttonReturn->TabIndex = 2;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &StatsTopProducts::buttonReturn_Click);
			// 
			// StatsTopProducts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(425, 222);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->dataGridViewListe);
			this->Name = L"StatsTopProducts";
			this->Text = L"10 articles les plus vendus";
			this->Load += gcnew System::EventHandler(this, &StatsTopProducts::StatsTopProducts_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewListe))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
		Void StatsTopProducts_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			//this->dataGridViewListe->Refresh();
			//this->_service = gcnew SERVICE::SERV_STATS();
			//this->_dataSet = this->_service->Top10Products();
			//this->dataGridViewListe->DataSource = this->_dataSet;
			//this->dataGridViewListe->DataMember = "Colonnes";
		}
	};
}
