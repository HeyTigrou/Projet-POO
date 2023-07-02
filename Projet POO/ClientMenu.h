#pragma once
#include "ClientCreation.h"
#include "ClientSearchAffichage.h"
#include "ClientSearchUpdate.h"
#include "ClientSearchDelete.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ClientMenuForm : public System::Windows::Forms::Form
	{
	public:
		ClientMenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~ClientMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private :
		System::Windows::Forms::GroupBox^ groupBoxSectionChoice;
		System::Windows::Forms::RadioButton^ radioButtonShowClient;
		System::Windows::Forms::RadioButton^ radioButtonDeleteClient;
		System::Windows::Forms::RadioButton^ radioButtonUpdateChoice;
		System::Windows::Forms::RadioButton^ radioButtonCreateClient;
		System::Windows::Forms::Button^ buttonConfirmChoice;
	private: System::Windows::Forms::Button^ buttonReturn;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->groupBoxSectionChoice = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonShowClient = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDeleteClient = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonUpdateChoice = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCreateClient = (gcnew System::Windows::Forms::RadioButton());
			this->buttonConfirmChoice = (gcnew System::Windows::Forms::Button());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->groupBoxSectionChoice->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxSectionChoice
			// 
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonShowClient);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonDeleteClient);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonUpdateChoice);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonCreateClient);
			this->groupBoxSectionChoice->Location = System::Drawing::Point(13, 13);
			this->groupBoxSectionChoice->Name = L"groupBoxSectionChoice";
			this->groupBoxSectionChoice->Size = System::Drawing::Size(259, 123);
			this->groupBoxSectionChoice->TabIndex = 0;
			this->groupBoxSectionChoice->TabStop = false;
			this->groupBoxSectionChoice->Text = L"A quelle partie voulez-vous accéder \?";
			// 
			// radioButtonShowClient
			// 
			this->radioButtonShowClient->AutoSize = true;
			this->radioButtonShowClient->Location = System::Drawing::Point(7, 92);
			this->radioButtonShowClient->Name = L"radioButtonShowClient";
			this->radioButtonShowClient->Size = System::Drawing::Size(98, 17);
			this->radioButtonShowClient->TabIndex = 3;
			this->radioButtonShowClient->TabStop = true;
			this->radioButtonShowClient->Text = L"Affichage client";
			this->radioButtonShowClient->UseVisualStyleBackColor = true;
			// 
			// radioButtonDeleteClient
			// 
			this->radioButtonDeleteClient->AutoSize = true;
			this->radioButtonDeleteClient->Location = System::Drawing::Point(7, 68);
			this->radioButtonDeleteClient->Name = L"radioButtonDeleteClient";
			this->radioButtonDeleteClient->Size = System::Drawing::Size(106, 17);
			this->radioButtonDeleteClient->TabIndex = 2;
			this->radioButtonDeleteClient->TabStop = true;
			this->radioButtonDeleteClient->Text = L"Suppresion client";
			this->radioButtonDeleteClient->UseVisualStyleBackColor = true;
			// 
			// radioButtonUpdateChoice
			// 
			this->radioButtonUpdateChoice->AutoSize = true;
			this->radioButtonUpdateChoice->Location = System::Drawing::Point(7, 44);
			this->radioButtonUpdateChoice->Name = L"radioButtonUpdateChoice";
			this->radioButtonUpdateChoice->Size = System::Drawing::Size(110, 17);
			this->radioButtonUpdateChoice->TabIndex = 1;
			this->radioButtonUpdateChoice->TabStop = true;
			this->radioButtonUpdateChoice->Text = L"Modification client";
			this->radioButtonUpdateChoice->UseVisualStyleBackColor = true;
			// 
			// radioButtonCreateClient
			// 
			this->radioButtonCreateClient->AutoSize = true;
			this->radioButtonCreateClient->Location = System::Drawing::Point(7, 20);
			this->radioButtonCreateClient->Name = L"radioButtonCreateClient";
			this->radioButtonCreateClient->Size = System::Drawing::Size(92, 17);
			this->radioButtonCreateClient->TabIndex = 0;
			this->radioButtonCreateClient->TabStop = true;
			this->radioButtonCreateClient->Text = L"Création client";
			this->radioButtonCreateClient->UseVisualStyleBackColor = true;
			// 
			// buttonConfirmChoice
			// 
			this->buttonConfirmChoice->Location = System::Drawing::Point(13, 143);
			this->buttonConfirmChoice->Name = L"buttonConfirmChoice";
			this->buttonConfirmChoice->Size = System::Drawing::Size(145, 23);
			this->buttonConfirmChoice->TabIndex = 1;
			this->buttonConfirmChoice->Text = L"Confirmer votre choix";
			this->buttonConfirmChoice->UseVisualStyleBackColor = true;
			this->buttonConfirmChoice->Click += gcnew System::EventHandler(this, &ClientMenuForm::buttonConfirmChoice_Click);
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(164, 143);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(108, 23);
			this->buttonReturn->TabIndex = 5;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &ClientMenuForm::buttonReturn_Click);
			// 
			// ClientMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 172);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->buttonConfirmChoice);
			this->Controls->Add(this->groupBoxSectionChoice);
			this->Name = L"ClientMenuForm";
			this->Text = L"Menu client";
			this->groupBoxSectionChoice->ResumeLayout(false);
			this->groupBoxSectionChoice->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Void buttonConfirmChoice_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (radioButtonCreateClient->Checked == true)
			{
				ClientCreation^ nextform = gcnew ClientCreation();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonUpdateChoice->Checked == true)
			{
				ClientSearchUpdate^ nextform = gcnew ClientSearchUpdate();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonDeleteClient->Checked == true)
			{
				ClientSearchDelete^ nextform = gcnew ClientSearchDelete();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonShowClient->Checked == true)
			{
				ClientSearchAffichage^ nextform = gcnew ClientSearchAffichage();
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
