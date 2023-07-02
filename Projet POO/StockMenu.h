#pragma once
#include "StockCreation.h"
#include "StockSearchUpdate.h"
#include "StockSearchShow.h"
#include "StockSearchDelete.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StockMenu : public System::Windows::Forms::Form
	{
	public:
		StockMenu(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~StockMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::GroupBox^ groupBoxSectionChoice;
		System::Windows::Forms::RadioButton^ radioButtonShowProduct;
		System::Windows::Forms::RadioButton^ radioButtonDeleteProduct;
		System::Windows::Forms::RadioButton^ radioButtonUpdateChoice;
	private: System::Windows::Forms::RadioButton^ radioButtonCreateCreateProduct;


		System::Windows::Forms::Button^ buttonConfirmChoice;
	private: System::Windows::Forms::Button^ buttonReturn;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->groupBoxSectionChoice = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonShowProduct = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDeleteProduct = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonUpdateChoice = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCreateCreateProduct = (gcnew System::Windows::Forms::RadioButton());
			this->buttonConfirmChoice = (gcnew System::Windows::Forms::Button());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->groupBoxSectionChoice->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxSectionChoice
			// 
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonShowProduct);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonDeleteProduct);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonUpdateChoice);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonCreateCreateProduct);
			this->groupBoxSectionChoice->Location = System::Drawing::Point(13, 10);
			this->groupBoxSectionChoice->Name = L"groupBoxSectionChoice";
			this->groupBoxSectionChoice->Size = System::Drawing::Size(259, 123);
			this->groupBoxSectionChoice->TabIndex = 2;
			this->groupBoxSectionChoice->TabStop = false;
			this->groupBoxSectionChoice->Text = L"A quelle partie voulez-vous accéder \?";
			// 
			// radioButtonShowProduct
			// 
			this->radioButtonShowProduct->AutoSize = true;
			this->radioButtonShowProduct->Location = System::Drawing::Point(7, 92);
			this->radioButtonShowProduct->Name = L"radioButtonShowProduct";
			this->radioButtonShowProduct->Size = System::Drawing::Size(101, 17);
			this->radioButtonShowProduct->TabIndex = 3;
			this->radioButtonShowProduct->TabStop = true;
			this->radioButtonShowProduct->Text = L"Affichage article";
			this->radioButtonShowProduct->UseVisualStyleBackColor = true;
			// 
			// radioButtonDeleteProduct
			// 
			this->radioButtonDeleteProduct->AutoSize = true;
			this->radioButtonDeleteProduct->Location = System::Drawing::Point(7, 68);
			this->radioButtonDeleteProduct->Name = L"radioButtonDeleteProduct";
			this->radioButtonDeleteProduct->Size = System::Drawing::Size(109, 17);
			this->radioButtonDeleteProduct->TabIndex = 2;
			this->radioButtonDeleteProduct->TabStop = true;
			this->radioButtonDeleteProduct->Text = L"Suppresion article";
			this->radioButtonDeleteProduct->UseVisualStyleBackColor = true;
			// 
			// radioButtonUpdateChoice
			// 
			this->radioButtonUpdateChoice->AutoSize = true;
			this->radioButtonUpdateChoice->Location = System::Drawing::Point(7, 44);
			this->radioButtonUpdateChoice->Name = L"radioButtonUpdateChoice";
			this->radioButtonUpdateChoice->Size = System::Drawing::Size(113, 17);
			this->radioButtonUpdateChoice->TabIndex = 1;
			this->radioButtonUpdateChoice->TabStop = true;
			this->radioButtonUpdateChoice->Text = L"Modification article";
			this->radioButtonUpdateChoice->UseVisualStyleBackColor = true;
			// 
			// radioButtonCreateCreateProduct
			// 
			this->radioButtonCreateCreateProduct->AutoSize = true;
			this->radioButtonCreateCreateProduct->Location = System::Drawing::Point(7, 20);
			this->radioButtonCreateCreateProduct->Name = L"radioButtonCreateCreateProduct";
			this->radioButtonCreateCreateProduct->Size = System::Drawing::Size(130, 17);
			this->radioButtonCreateCreateProduct->TabIndex = 0;
			this->radioButtonCreateCreateProduct->TabStop = true;
			this->radioButtonCreateCreateProduct->Text = L"Création nouvel article";
			this->radioButtonCreateCreateProduct->UseVisualStyleBackColor = true;
			// 
			// buttonConfirmChoice
			// 
			this->buttonConfirmChoice->Location = System::Drawing::Point(13, 140);
			this->buttonConfirmChoice->Name = L"buttonConfirmChoice";
			this->buttonConfirmChoice->Size = System::Drawing::Size(145, 23);
			this->buttonConfirmChoice->TabIndex = 3;
			this->buttonConfirmChoice->Text = L"Confirmer votre choix";
			this->buttonConfirmChoice->UseVisualStyleBackColor = true;
			this->buttonConfirmChoice->Click += gcnew System::EventHandler(this, &StockMenu::buttonConfirmChoice_Click);
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(164, 140);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(108, 23);
			this->buttonReturn->TabIndex = 4;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &StockMenu::buttonReturn_Click);
			// 
			// StockMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 172);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->groupBoxSectionChoice);
			this->Controls->Add(this->buttonConfirmChoice);
			this->Name = L"StockMenu";
			this->Text = L"Menu stock";
			this->groupBoxSectionChoice->ResumeLayout(false);
			this->groupBoxSectionChoice->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Void buttonConfirmChoice_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (radioButtonCreateCreateProduct->Checked == true)
			{
				StockCreation^ nextform = gcnew StockCreation();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonUpdateChoice->Checked == true)
			{
				StockSearchUpdate^ nextform = gcnew StockSearchUpdate();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonDeleteProduct->Checked == true)
			{
				StockSearchDelete^ nextform = gcnew StockSearchDelete();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonShowProduct->Checked == true)
			{
				StockSearchShow^ nextform = gcnew StockSearchShow();
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
