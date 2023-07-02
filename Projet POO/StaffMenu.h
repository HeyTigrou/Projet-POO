#pragma once
#include "StaffCreation.h"
#include "StaffSearchUpdate.h"
#include "StaffSearchShow.h"
#include "StaffSearchDelete.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class StaffMenu : public System::Windows::Forms::Form
	{
	public:
		StaffMenu(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:

		~StaffMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::GroupBox^ groupBoxSectionChoice;
		System::Windows::Forms::RadioButton^ radioButtonShowStaff;
		System::Windows::Forms::RadioButton^ radioButtonDeleteStaff;
		System::Windows::Forms::RadioButton^ radioButtonUpdateChoice;
		System::Windows::Forms::RadioButton^ radioButtonCreateStaff;
		System::Windows::Forms::Button^ buttonConfirmChoice;
		System::Windows::Forms::Button^ buttonReturn;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->groupBoxSectionChoice = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonShowStaff = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDeleteStaff = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonUpdateChoice = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCreateStaff = (gcnew System::Windows::Forms::RadioButton());
			this->buttonConfirmChoice = (gcnew System::Windows::Forms::Button());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->groupBoxSectionChoice->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxSectionChoice
			// 
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonShowStaff);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonDeleteStaff);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonUpdateChoice);
			this->groupBoxSectionChoice->Controls->Add(this->radioButtonCreateStaff);
			this->groupBoxSectionChoice->Location = System::Drawing::Point(13, 10);
			this->groupBoxSectionChoice->Name = L"groupBoxSectionChoice";
			this->groupBoxSectionChoice->Size = System::Drawing::Size(259, 123);
			this->groupBoxSectionChoice->TabIndex = 2;
			this->groupBoxSectionChoice->TabStop = false;
			this->groupBoxSectionChoice->Text = L"A quelle partie voulez-vous accéder \?";
			// 
			// radioButtonShowStaff
			// 
			this->radioButtonShowStaff->AutoSize = true;
			this->radioButtonShowStaff->Location = System::Drawing::Point(7, 92);
			this->radioButtonShowStaff->Name = L"radioButtonShowStaff";
			this->radioButtonShowStaff->Size = System::Drawing::Size(119, 17);
			this->radioButtonShowStaff->TabIndex = 3;
			this->radioButtonShowStaff->TabStop = true;
			this->radioButtonShowStaff->Text = L"Affichage personnel";
			this->radioButtonShowStaff->UseVisualStyleBackColor = true;
			// 
			// radioButtonDeleteStaff
			// 
			this->radioButtonDeleteStaff->AutoSize = true;
			this->radioButtonDeleteStaff->Location = System::Drawing::Point(7, 68);
			this->radioButtonDeleteStaff->Name = L"radioButtonDeleteStaff";
			this->radioButtonDeleteStaff->Size = System::Drawing::Size(127, 17);
			this->radioButtonDeleteStaff->TabIndex = 2;
			this->radioButtonDeleteStaff->TabStop = true;
			this->radioButtonDeleteStaff->Text = L"Suppresion personnel";
			this->radioButtonDeleteStaff->UseVisualStyleBackColor = true;
			// 
			// radioButtonUpdateChoice
			// 
			this->radioButtonUpdateChoice->AutoSize = true;
			this->radioButtonUpdateChoice->Location = System::Drawing::Point(7, 44);
			this->radioButtonUpdateChoice->Name = L"radioButtonUpdateChoice";
			this->radioButtonUpdateChoice->Size = System::Drawing::Size(131, 17);
			this->radioButtonUpdateChoice->TabIndex = 1;
			this->radioButtonUpdateChoice->TabStop = true;
			this->radioButtonUpdateChoice->Text = L"Modification personnel";
			this->radioButtonUpdateChoice->UseVisualStyleBackColor = true;
			// 
			// radioButtonCreateStaff
			// 
			this->radioButtonCreateStaff->AutoSize = true;
			this->radioButtonCreateStaff->Location = System::Drawing::Point(7, 20);
			this->radioButtonCreateStaff->Name = L"radioButtonCreateStaff";
			this->radioButtonCreateStaff->Size = System::Drawing::Size(113, 17);
			this->radioButtonCreateStaff->TabIndex = 0;
			this->radioButtonCreateStaff->TabStop = true;
			this->radioButtonCreateStaff->Text = L"Création personnel";
			this->radioButtonCreateStaff->UseVisualStyleBackColor = true;
			// 
			// buttonConfirmChoice
			// 
			this->buttonConfirmChoice->Location = System::Drawing::Point(13, 140);
			this->buttonConfirmChoice->Name = L"buttonConfirmChoice";
			this->buttonConfirmChoice->Size = System::Drawing::Size(145, 23);
			this->buttonConfirmChoice->TabIndex = 3;
			this->buttonConfirmChoice->Text = L"Confirmer votre choix";
			this->buttonConfirmChoice->UseVisualStyleBackColor = true;
			this->buttonConfirmChoice->Click += gcnew System::EventHandler(this, &StaffMenu::buttonConfirmChoice_Click);
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(164, 140);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(108, 23);
			this->buttonReturn->TabIndex = 8;
			this->buttonReturn->Text = L"Retour";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &StaffMenu::buttonReturn_Click);
			// 
			// StaffMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(283, 172);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->groupBoxSectionChoice);
			this->Controls->Add(this->buttonConfirmChoice);
			this->Name = L"StaffMenu";
			this->Text = L"Menu personnel";
			this->groupBoxSectionChoice->ResumeLayout(false);
			this->groupBoxSectionChoice->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Void buttonConfirmChoice_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (radioButtonCreateStaff->Checked == true)
			{
				StaffCreation^ nextform = gcnew StaffCreation();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonUpdateChoice->Checked == true)
			{
				StaffSearchUpdate^ nextform = gcnew StaffSearchUpdate();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonDeleteStaff->Checked == true)
			{
				StaffSearchDelete^ nextform = gcnew StaffSearchDelete();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
			if (radioButtonShowStaff->Checked == true)
			{
				StaffSearchShow^ nextform = gcnew StaffSearchShow();
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
