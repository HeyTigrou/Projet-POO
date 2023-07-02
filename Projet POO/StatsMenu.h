#pragma once
#include "StatsAverage.h"
#include "StatsTotalClient.h"
#include "StatsTurnover.h"
#include "StatsTopProducts.h"
#include "StatsBottomProducts.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StatsMenu : public System::Windows::Forms::Form
	{
	public:
		StatsMenu(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:

		~StatsMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::GroupBox^ groupBoxSectionChoice;
		System::Windows::Forms::RadioButton^ radioButtonBottomArticles;
		System::Windows::Forms::RadioButton^ radioButtonTopArticles;
		System::Windows::Forms::RadioButton^ radioButtonTurnoverChoice;
		System::Windows::Forms::RadioButton^ radioButtonAverageChoice;
		System::Windows::Forms::RadioButton^ radioButtonTotalChoice;
		System::Windows::Forms::Button^ buttonReturn;
		System::Windows::Forms::Button^ buttonConfirmChoice;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->groupBoxSectionChoice = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonBottomArticles = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonTopArticles = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonTurnoverChoice = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonAverageChoice = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonTotalChoice = (gcnew System::Windows::Forms::RadioButton());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->buttonConfirmChoice = (gcnew System::Windows::Forms::Button());
			this->groupBoxSectionChoice->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxSectionChoice
			// 
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonBottomArticles);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonTopArticles);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonTurnoverChoice);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonAverageChoice);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonTotalChoice);
			this->groupBoxSectionChoice->Location = System::Drawing::Point(13, 13);
			this->groupBoxSectionChoice->Name = L"groupBoxSectionChoice";
			this->groupBoxSectionChoice->Size = System::Drawing::Size(259, 146);
			this->groupBoxSectionChoice->TabIndex = 0;
			this->groupBoxSectionChoice->TabStop = false;
			this->groupBoxSectionChoice->Text = L"A quelle partie voulez-vous accéder \?";
			// 
			// radioButtonBottomArticles
			// 
			this->radioButtonBottomArticles->AutoSize = true;
			this->radioButtonBottomArticles->Location = System::Drawing::Point(7, 116);
			this->radioButtonBottomArticles->Name = L"radioButtonBottomArticles";
			this->radioButtonBottomArticles->Size = System::Drawing::Size(157, 17);
			this->radioButtonBottomArticles->TabIndex = 4;
			this->radioButtonBottomArticles->TabStop = true;
			this->radioButtonBottomArticles->Text = L"10 articles les moins vendus";
			this->radioButtonBottomArticles->UseVisualStyleBackColor = true;
			// 
			// radioButtonTopArticles
			// 
			this->radioButtonTopArticles->AutoSize = true;
			this->radioButtonTopArticles->Location = System::Drawing::Point(7, 92);
			this->radioButtonTopArticles->Name = L"radioButtonTopArticles";
			this->radioButtonTopArticles->Size = System::Drawing::Size(149, 17);
			this->radioButtonTopArticles->TabIndex = 3;
			this->radioButtonTopArticles->TabStop = true;
			this->radioButtonTopArticles->Text = L"10 articles les plus vendus";
			this->radioButtonTopArticles->UseVisualStyleBackColor = true;
			// 
			// radioButtonTurnoverChoice
			// 
			this->radioButtonTurnoverChoice->AutoSize = true;
			this->radioButtonTurnoverChoice->Location = System::Drawing::Point(7, 68);
			this->radioButtonTurnoverChoice->Name = L"radioButtonTurnoverChoice";
			this->radioButtonTurnoverChoice->Size = System::Drawing::Size(95, 17);
			this->radioButtonTurnoverChoice->TabIndex = 2;
			this->radioButtonTurnoverChoice->TabStop = true;
			this->radioButtonTurnoverChoice->Text = L"Chiffre d\'affaire";
			this->radioButtonTurnoverChoice->UseVisualStyleBackColor = true;
			// 
			// radioButtonAverageChoice
			// 
			this->radioButtonAverageChoice->AutoSize = true;
			this->radioButtonAverageChoice->Location = System::Drawing::Point(7, 44);
			this->radioButtonAverageChoice->Name = L"radioButtonAverageChoice";
			this->radioButtonAverageChoice->Size = System::Drawing::Size(156, 17);
			this->radioButtonAverageChoice->TabIndex = 1;
			this->radioButtonAverageChoice->TabStop = true;
			this->radioButtonAverageChoice->Text = L"Prix moyen des commandes";
			this->radioButtonAverageChoice->UseVisualStyleBackColor = true;
			// 
			// radioButtonTotalChoice
			// 
			this->radioButtonTotalChoice->AutoSize = true;
			this->radioButtonTotalChoice->Location = System::Drawing::Point(7, 20);
			this->radioButtonTotalChoice->Name = L"radioButtonTotalChoice";
			this->radioButtonTotalChoice->Size = System::Drawing::Size(153, 17);
			this->radioButtonTotalChoice->TabIndex = 0;
			this->radioButtonTotalChoice->TabStop = true;
			this->radioButtonTotalChoice->Text = L"Montant total d\'achat client";
			this->radioButtonTotalChoice->UseVisualStyleBackColor = true;
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(164, 165);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(108, 23);
			this->buttonReturn->TabIndex = 9;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &StatsMenu::buttonReturn_Click);
			// 
			// buttonConfirmChoice
			// 
			this->buttonConfirmChoice->Location = System::Drawing::Point(13, 165);
			this->buttonConfirmChoice->Name = L"buttonConfirmChoice";
			this->buttonConfirmChoice->Size = System::Drawing::Size(145, 23);
			this->buttonConfirmChoice->TabIndex = 8;
			this->buttonConfirmChoice->Text = L"Confirmer votre choix";
			this->buttonConfirmChoice->UseVisualStyleBackColor = true;
			this->buttonConfirmChoice->Click += gcnew System::EventHandler(this, &StatsMenu::buttonConfirmChoice_Click);
			// 
			// StatsMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 195);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->buttonConfirmChoice);
			this->Controls->Add(this->groupBoxSectionChoice);
			this->Name = L"StatsMenu";
			this->Text = L"Menu Statistiques";
			this->groupBoxSectionChoice->ResumeLayout(false);
			this->groupBoxSectionChoice->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Void buttonConfirmChoice_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (radioButtonTotalChoice->Checked == true)
			{
				StatsTotalClient^ nextform = gcnew StatsTotalClient();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonAverageChoice->Checked == true)
			{
				StatsAverage^ nextform = gcnew StatsAverage();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonTurnoverChoice->Checked == true)
			{
				StatsTurnover^ nextform = gcnew StatsTurnover();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonTopArticles->Checked == true)
			{
				StatsTopProducts^ nextform = gcnew StatsTopProducts();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonBottomArticles->Checked == true)
			{
				StatsBottomProducts^ nextform = gcnew StatsBottomProducts();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
		}

		Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
