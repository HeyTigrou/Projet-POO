#pragma once
#include "FormAddress.h"

namespace Prototypenumber2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private :
		System::Windows::Forms::GroupBox^ groupBoxChoice;
		System::Windows::Forms::RadioButton^ radioButtonOther2Choice;
		System::Windows::Forms::RadioButton^ radioButtonOther1Choice;
		System::Windows::Forms::RadioButton^ radioButtonAddressChoice;
		System::Windows::Forms::Label^ labelMenu;
		System::Windows::Forms::Button^ buttonConfirmChoice;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->groupBoxChoice = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonOther2Choice = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOther1Choice = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonAddressChoice = (gcnew System::Windows::Forms::RadioButton());
			this->labelMenu = (gcnew System::Windows::Forms::Label());
			this->buttonConfirmChoice = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxChoice->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBoxChoice
			// 
			this->groupBoxChoice->AutoSize = true;
			this->groupBoxChoice->Controls->Add(this->radioButtonOther2Choice);
			this->groupBoxChoice->Controls->Add(this->radioButtonOther1Choice);
			this->groupBoxChoice->Controls->Add(this->radioButtonAddressChoice);
			this->groupBoxChoice->Location = System::Drawing::Point(12, 35);
			this->groupBoxChoice->Name = L"groupBoxChoice";
			this->groupBoxChoice->Size = System::Drawing::Size(260, 131);
			this->groupBoxChoice->TabIndex = 0;
			this->groupBoxChoice->TabStop = false;
			this->groupBoxChoice->Text = L"Quelle base de données \?";
			// 
			// radioButtonOther2Choice
			// 
			this->radioButtonOther2Choice->AutoSize = true;
			this->radioButtonOther2Choice->Location = System::Drawing::Point(7, 68);
			this->radioButtonOther2Choice->Name = L"radioButtonOther2Choice";
			this->radioButtonOther2Choice->Size = System::Drawing::Size(49, 17);
			this->radioButtonOther2Choice->TabIndex = 2;
			this->radioButtonOther2Choice->TabStop = true;
			this->radioButtonOther2Choice->Text = L"autre";
			this->radioButtonOther2Choice->UseVisualStyleBackColor = true;
			// 
			// radioButtonOther1Choice
			// 
			this->radioButtonOther1Choice->AutoSize = true;
			this->radioButtonOther1Choice->Location = System::Drawing::Point(7, 44);
			this->radioButtonOther1Choice->Name = L"radioButtonOther1Choice";
			this->radioButtonOther1Choice->Size = System::Drawing::Size(49, 17);
			this->radioButtonOther1Choice->TabIndex = 1;
			this->radioButtonOther1Choice->TabStop = true;
			this->radioButtonOther1Choice->Text = L"autre";
			this->radioButtonOther1Choice->UseVisualStyleBackColor = true;
			// 
			// radioButtonAddressChoice
			// 
			this->radioButtonAddressChoice->AutoSize = true;
			this->radioButtonAddressChoice->Location = System::Drawing::Point(7, 20);
			this->radioButtonAddressChoice->Name = L"radioButtonAddressChoice";
			this->radioButtonAddressChoice->Size = System::Drawing::Size(68, 17);
			this->radioButtonAddressChoice->TabIndex = 0;
			this->radioButtonAddressChoice->TabStop = true;
			this->radioButtonAddressChoice->Text = L"Adresses";
			this->radioButtonAddressChoice->UseVisualStyleBackColor = true;
			// 
			// labelMenu
			// 
			this->labelMenu->AutoSize = true;
			this->labelMenu->Location = System::Drawing::Point(12, 13);
			this->labelMenu->Name = L"labelMenu";
			this->labelMenu->Size = System::Drawing::Size(246, 13);
			this->labelMenu->TabIndex = 1;
			this->labelMenu->Text = L"Bienvenue sur le gestionnaire de base de données";
			// 
			// buttonConfirmChoice
			// 
			this->buttonConfirmChoice->AutoSize = true;
			this->buttonConfirmChoice->Location = System::Drawing::Point(12, 172);
			this->buttonConfirmChoice->Name = L"buttonConfirmChoice";
			this->buttonConfirmChoice->Size = System::Drawing::Size(260, 23);
			this->buttonConfirmChoice->TabIndex = 2;
			this->buttonConfirmChoice->Text = L"Confirmer le choix";
			this->buttonConfirmChoice->UseVisualStyleBackColor = true;
			this->buttonConfirmChoice->Click += gcnew System::EventHandler(this, &MainForm::buttonConfirmChoice_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(289, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 175);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 200);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->buttonConfirmChoice);
			this->Controls->Add(this->labelMenu);
			this->Controls->Add(this->groupBoxChoice);
			this->Name = L"MainForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainFormLoad);
			this->groupBoxChoice->ResumeLayout(false);
			this->groupBoxChoice->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void MainFormLoad(System::Object^ sender, System::EventArgs^ e)
		{
			this->pictureBox1->Image = gcnew System::Drawing::Bitmap("C:\\Users\\gauti\\Downloads\\unknown.PNG");
		}

		Void buttonConfirmChoice_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (radioButtonAddressChoice->Checked == true)
			{
				MyFormAddress^ nextFormAddress = gcnew MyFormAddress();
				nextFormAddress->ShowDialog();
			}

			if (radioButtonOther1Choice->Checked == true)
			{
				this->Close();
			}
		}
	};
}
