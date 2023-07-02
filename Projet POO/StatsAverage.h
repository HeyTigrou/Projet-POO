#pragma once
#include "SERV_STATS.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StatsAverage : public System::Windows::Forms::Form
	{
	public:
		StatsAverage(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StatsAverage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		SERVICE::SERV_STATS^ _service;
		System::Windows::Forms::Button^ buttonReturn;
		System::Windows::Forms::TextBox^ textBoxResult;
		System::Windows::Forms::Label^ labelPrice;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->textBoxResult = (gcnew System::Windows::Forms::TextBox());
			this->labelPrice = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(197, 82);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(75, 23);
			this->buttonReturn->TabIndex = 0;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &StatsAverage::buttonReturn_Click);
			// 
			// textBoxResult
			// 
			this->textBoxResult->Location = System::Drawing::Point(12, 44);
			this->textBoxResult->Name = L"textBoxResult";
			this->textBoxResult->Size = System::Drawing::Size(260, 20);
			this->textBoxResult->TabIndex = 1;
			// 
			// labelPrice
			// 
			this->labelPrice->AutoSize = true;
			this->labelPrice->Location = System::Drawing::Point(12, 25);
			this->labelPrice->Name = L"labelPrice";
			this->labelPrice->Size = System::Drawing::Size(64, 13);
			this->labelPrice->TabIndex = 2;
			this->labelPrice->Text = L"Prix moyen :";
			// 
			// StatsAverage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 117);
			this->Controls->Add(this->labelPrice);
			this->Controls->Add(this->textBoxResult);
			this->Controls->Add(this->buttonReturn);
			this->Name = L"StatsAverage";
			this->Text = L"Prix moyen des commandes ";
			this->Load += gcnew System::EventHandler(this, &StatsAverage::StatsAverage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void StatsAverage_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_service = gcnew SERVICE::SERV_STATS();
			//this->textBoxResult->Text = this->_service->AverageOrder();
		}
		Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
