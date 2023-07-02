#pragma once
#include "Database.h"

namespace Prosit6workshop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::TextBox^ textBoxLastName;


		System::Windows::Forms::Label^ labelFirstName;
		System::Windows::Forms::Label^ labelLastName;
		System::Windows::Forms::TextBox^ textBoxFirstName;

		System::Windows::Forms::Label^ labelMessage;
		System::Windows::Forms::Button^ buttonAdd;
		System::Windows::Forms::Button^ buttonRemove;
		// Added;
		Database^_database;
		DataSet^_dataSet;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelMessage = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonRemove = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(104, 30);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(319, 20);
			this->textBoxLastName->TabIndex = 0;
			this->textBoxLastName->Text = L"Nom";
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(69, 33);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(29, 13);
			this->labelFirstName->TabIndex = 1;
			this->labelFirstName->Text = L"Nom";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(55, 59);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(43, 13);
			this->labelLastName->TabIndex = 2;
			this->labelLastName->Text = L"Prenom";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(104, 56);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(319, 20);
			this->textBoxFirstName->TabIndex = 3;
			this->textBoxFirstName->Text = L"Prenom";
			// 
			// labelMessage
			// 
			this->labelMessage->AutoSize = true;
			this->labelMessage->Location = System::Drawing::Point(101, 79);
			this->labelMessage->Name = L"labelMessage";
			this->labelMessage->Size = System::Drawing::Size(56, 13);
			this->labelMessage->TabIndex = 4;
			this->labelMessage->Text = L"Remarque";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(104, 99);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 23);
			this->buttonAdd->TabIndex = 5;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonRemove
			// 
			this->buttonRemove->Location = System::Drawing::Point(348, 99);
			this->buttonRemove->Name = L"buttonRemove";
			this->buttonRemove->Size = System::Drawing::Size(75, 23);
			this->buttonRemove->TabIndex = 6;
			this->buttonRemove->Text = L"Remove";
			this->buttonRemove->UseVisualStyleBackColor = true;
			this->buttonRemove->Click += gcnew System::EventHandler(this, &MyForm::buttonRemove_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(104, 140);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(319, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 237);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->buttonRemove);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->labelMessage);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->labelLastName);
			this->Controls->Add(this->labelFirstName);
			this->Controls->Add(this->textBoxLastName);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ request = "SELECT * FROM TB_PERSONNE;";
			this->_dataSet = this->_database->sendRequest(request, "TB_PERSONNE");
			this->textBoxLastName->Text = Convert::ToString(this->_dataSet->Tables["TB_PERSONNE"]->Rows[0]->ItemArray[1]);
			this->textBoxFirstName->Text = Convert::ToString(this->_dataSet->Tables["TB_PERSONNE"]->Rows[0]->ItemArray[2]);
		}

		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->_database = gcnew Database();
		}

		Void buttonRemove_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ request = "SELECT * FROM TB_PERSONNE;";
			this->_dataSet = this->_database->sendRequest(request, "TB_PERSONNE");
			int i = 0;
			bool check = 0;
			while (check == 0)
			{
				if (Convert::ToString(this->_dataSet->Tables["TB_PERSONNE"]->Rows[i]->ItemArray[2]) != "")
				{
					this->comboBox1->Items->Add(Convert::ToString(this->_dataSet->Tables["TB_PERSONNE"]->Rows[i]->ItemArray[1]));
					i++;
				}
				else
				{
					check = 1;
				}
			}
		}
};
}
