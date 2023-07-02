#pragma once
#include "OrderCreation.h"
#include "OrderSearchDelete.h"
#include "OrderSearchShow.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class OrderMenu : public System::Windows::Forms::Form
	{
	public:
		OrderMenu(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~OrderMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private :
		System::Windows::Forms::GroupBox^ groupBoxSectionChoice;
		System::Windows::Forms::RadioButton^ radioButtonShowOrder; 
		System::Windows::Forms::RadioButton^ radioButtonDeleteOrder;
		System::Windows::Forms::RadioButton^ radioButtonCreateOrder;
		System::Windows::Forms::Button^ buttonReturn;
		System::Windows::Forms::Button^ buttonConfirmChoice;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->groupBoxSectionChoice = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonShowOrder = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDeleteOrder = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCreateOrder = (gcnew System::Windows::Forms::RadioButton());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->buttonConfirmChoice = (gcnew System::Windows::Forms::Button());
			this->groupBoxSectionChoice->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxSectionChoice
			// 
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonShowOrder);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonDeleteOrder);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonCreateOrder);
			this->groupBoxSectionChoice->Location = System::Drawing::Point(13, 10);
			this->groupBoxSectionChoice->Name = L"groupBoxSectionChoice";
			this->groupBoxSectionChoice->Size = System::Drawing::Size(259, 94);
			this->groupBoxSectionChoice->TabIndex = 5;
			this->groupBoxSectionChoice->TabStop = false;
			this->groupBoxSectionChoice->Text = L"A quelle partie voulez-vous accéder \?";
			// 
			// radioButtonShowOrder
			// 
			this->radioButtonShowOrder->AutoSize = true;
			this->radioButtonShowOrder->Location = System::Drawing::Point(6, 66);
			this->radioButtonShowOrder->Name = L"radioButtonShowOrder";
			this->radioButtonShowOrder->Size = System::Drawing::Size(125, 17);
			this->radioButtonShowOrder->TabIndex = 3;
			this->radioButtonShowOrder->TabStop = true;
			this->radioButtonShowOrder->Text = L"Affichage commande";
			this->radioButtonShowOrder->UseVisualStyleBackColor = true;
			// 
			// radioButtonDeleteOrder
			// 
			this->radioButtonDeleteOrder->AutoSize = true;
			this->radioButtonDeleteOrder->Location = System::Drawing::Point(6, 43);
			this->radioButtonDeleteOrder->Name = L"radioButtonDeleteOrder";
			this->radioButtonDeleteOrder->Size = System::Drawing::Size(133, 17);
			this->radioButtonDeleteOrder->TabIndex = 2;
			this->radioButtonDeleteOrder->TabStop = true;
			this->radioButtonDeleteOrder->Text = L"Suppresion commande";
			this->radioButtonDeleteOrder->UseVisualStyleBackColor = true;
			// 
			// radioButtonCreateOrder
			// 
			this->radioButtonCreateOrder->AutoSize = true;
			this->radioButtonCreateOrder->Location = System::Drawing::Point(7, 20);
			this->radioButtonCreateOrder->Name = L"radioButtonCreateOrder";
			this->radioButtonCreateOrder->Size = System::Drawing::Size(162, 17);
			this->radioButtonCreateOrder->TabIndex = 0;
			this->radioButtonCreateOrder->TabStop = true;
			this->radioButtonCreateOrder->Text = L"Création nouvelle commande";
			this->radioButtonCreateOrder->UseVisualStyleBackColor = true;
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(164, 110);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(108, 23);
			this->buttonReturn->TabIndex = 7;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &OrderMenu::buttonReturn_Click);
			// 
			// buttonConfirmChoice
			// 
			this->buttonConfirmChoice->Location = System::Drawing::Point(13, 110);
			this->buttonConfirmChoice->Name = L"buttonConfirmChoice";
			this->buttonConfirmChoice->Size = System::Drawing::Size(145, 23);
			this->buttonConfirmChoice->TabIndex = 6;
			this->buttonConfirmChoice->Text = L"Confirmer votre choix";
			this->buttonConfirmChoice->UseVisualStyleBackColor = true;
			this->buttonConfirmChoice->Click += gcnew System::EventHandler(this, &OrderMenu::buttonConfirmChoice_Click);
			// 
			// OrderMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 141);
			this->Controls->Add(this->groupBoxSectionChoice);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->buttonConfirmChoice);
			this->Name = L"OrderMenu";
			this->Text = L"Menu Commandes";
			this->groupBoxSectionChoice->ResumeLayout(false);
			this->groupBoxSectionChoice->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Void buttonConfirmChoice_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (radioButtonCreateOrder->Checked == true)
			{
				OrderCreation^ nextform = gcnew OrderCreation();
				this -> Hide();
				nextform->ShowDialog();
				this->Close();
			}
			if (radioButtonDeleteOrder->Checked == true)
			{
				OrderSearchDelete^ nextform = gcnew OrderSearchDelete();
				this->Hide();
				nextform->ShowDialog();
				this->Close();
			}
			if (radioButtonShowOrder->Checked == true)
			{
				OrderSearchShow^ nextform = gcnew OrderSearchShow();
				this->Hide();
				nextform->ShowDialog();
				this->Close();
			}
		}

		Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
