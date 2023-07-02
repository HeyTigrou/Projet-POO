#pragma once

#include "Job.h"
#include "ResultForm.h"

namespace Exercices {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//using namespace System::Xml;

	//Hérite de forme & Nom du formulaire
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent(); //Constructeur
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components; //Destructeur
			}
		}
	private:
		System::Windows::Forms::Button^ buttonAdd;
		System::Windows::Forms::Button^ buttonRemove;
		System::Windows::Forms::TextBox^ textBoxName;
		System::Windows::Forms::Label^ messageLabel;
		System::ComponentModel::Container^ components; //Déclaration d'objet 
		System::Windows::Forms::TextBox^ textBoxDescription;
	private: System::Windows::Forms::Button^ buttonForm;




		   //Added
		   Job^ _job;

#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   this->buttonAdd = (gcnew System::Windows::Forms::Button());
			   this->buttonRemove = (gcnew System::Windows::Forms::Button());
			   this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			   this->messageLabel = (gcnew System::Windows::Forms::Label());
			   this->textBoxDescription = (gcnew System::Windows::Forms::TextBox());
			   this->buttonForm = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // buttonAdd
			   // 
			   this->buttonAdd->Location = System::Drawing::Point(82, 333);
			   this->buttonAdd->Name = L"buttonAdd";
			   this->buttonAdd->Size = System::Drawing::Size(75, 23);
			   this->buttonAdd->TabIndex = 0;
			   this->buttonAdd->Text = L"Add";
			   this->buttonAdd->UseVisualStyleBackColor = true;
			   this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			   // 
			   // buttonRemove
			   // 
			   this->buttonRemove->Location = System::Drawing::Point(432, 333);
			   this->buttonRemove->Name = L"buttonRemove";
			   this->buttonRemove->Size = System::Drawing::Size(75, 23);
			   this->buttonRemove->TabIndex = 1;
			   this->buttonRemove->Text = L"Remove";
			   this->buttonRemove->UseVisualStyleBackColor = true;
			   this->buttonRemove->Click += gcnew System::EventHandler(this, &MyForm::buttonRemove_Click);
			   // 
			   // textBoxName
			   // 
			   this->textBoxName->Location = System::Drawing::Point(85, 130);
			   this->textBoxName->Name = L"textBoxName";
			   this->textBoxName->Size = System::Drawing::Size(425, 22);
			   this->textBoxName->TabIndex = 2;
			   // 
			   // messageLabel
			   // 
			   this->messageLabel->AutoSize = true;
			   this->messageLabel->Location = System::Drawing::Point(82, 26);
			   this->messageLabel->Name = L"messageLabel";
			   this->messageLabel->Size = System::Drawing::Size(109, 17);
			   this->messageLabel->TabIndex = 3;
			   this->messageLabel->Text = L"message debug";
			   // 
			   // textBoxDescription
			   // 
			   this->textBoxDescription->Location = System::Drawing::Point(85, 195);
			   this->textBoxDescription->Multiline = true;
			   this->textBoxDescription->Name = L"textBoxDescription";
			   this->textBoxDescription->Size = System::Drawing::Size(425, 47);
			   this->textBoxDescription->TabIndex = 4;
			   // 
			   // buttonForm
			   // 
			   this->buttonForm->Location = System::Drawing::Point(189, 291);
			   this->buttonForm->Name = L"buttonForm";
			   this->buttonForm->Size = System::Drawing::Size(75, 23);
			   this->buttonForm->TabIndex = 5;
			   this->buttonForm->Text = L"change";
			   this->buttonForm->UseVisualStyleBackColor = true;
			   this->buttonForm->Visible = false;
			   this->buttonForm->Click += gcnew System::EventHandler(this, &MyForm::buttonForm_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(579, 395);
			   this->Controls->Add(this->buttonForm);
			   this->Controls->Add(this->textBoxDescription);
			   this->Controls->Add(this->messageLabel);
			   this->Controls->Add(this->textBoxName);
			   this->Controls->Add(this->buttonRemove);
			   this->Controls->Add(this->buttonAdd);
			   this->Name = L"MyForm";
			   this->Text = L"Forms";
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
		   System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   String^ title = this->textBoxName->Text;
			   String^ description = this->textBoxDescription->Text;

			   if (title->Equals("") || description->Equals(""))
			   {
				   this->messageLabel->Text = "Veuillez rentrer un texte";
			   }
			   else
			   {
				   this->_job = gcnew Job(title, description);
				   this->messageLabel->Text = "Un objet a été créé";
				   this->buttonForm->Visible = true;
			   }
		   }
		   System::Void buttonRemove_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   if (this->_job != nullptr)
			   {
				   this->textBoxName->Text = "";
				   this->textBoxDescription->Text = "";
				   this->messageLabel->Text = "Un objet a été détruit";
				   this->buttonForm->Visible = false;
				   this->_job = nullptr;
			   }
			   else
				   this->messageLabel->Text = "Spammmmm pas !!!!!";


		   }




		   System::Void buttonForm_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   this->messageLabel->Text = "";
			   this->textBoxDescription->Text = "";
			   this->textBoxName->Text = "";
			   ResultForm^ nextForm = gcnew ResultForm(this, this->_job);
			   nextForm->Show();
			   this->Hide();
		   }
	};
}
