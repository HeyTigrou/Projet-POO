#pragma once
#include "SERV_STATS.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StatsBottomProducts : public System::Windows::Forms::Form
	{
	public:
		StatsBottomProducts(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StatsBottomProducts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		DataSet^ _dataSet;
		SERVICE::SERV_STATS^ _service;

		System::Windows::Forms::Button^ buttonReturn;
		System::Windows::Forms::Label^ labelInfo;
		System::Windows::Forms::DataGridView^ dataGridViewListe;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->dataGridViewListe = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewListe))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(338, 190);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(75, 23);
			this->buttonReturn->TabIndex = 5;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &StatsBottomProducts::buttonReturn_Click);
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(12, 9);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(223, 13);
			this->labelInfo->TabIndex = 4;
			this->labelInfo->Text = L"Voici la liste des 10 articles les moins vendus :";
			// 
			// dataGridViewListe
			// 
			this->dataGridViewListe->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewListe->Location = System::Drawing::Point(12, 34);
			this->dataGridViewListe->Name = L"dataGridViewListe";
			this->dataGridViewListe->Size = System::Drawing::Size(401, 150);
			this->dataGridViewListe->TabIndex = 3;
			// 
			// StatsBottomProducts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(425, 222);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->dataGridViewListe);
			this->Name = L"StatsBottomProducts";
			this->Text = L"10 articles les moins vendus :";
			this->Load += gcnew System::EventHandler(this, &StatsBottomProducts::StatsBottomProducts_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewListe))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}

		Void StatsBottomProducts_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			//this->dataGridViewListe->Refresh();
			//this->_service = gcnew SERVICE::SERV_STATS();
			//this->_dataSet = this->_service->Less10Products();
			//this->dataGridViewListe->DataSource = this->_dataSet;
			//this->dataGridViewListe->DataMember = "Colonnes";
		}
	};
}
