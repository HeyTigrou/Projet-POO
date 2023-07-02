#pragma once
#include "Job.h"

namespace Exercices {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ResultForm : public System::Windows::Forms::Form
	{
	public:
		ResultForm(System::Windows::Forms::Form^ form, Job^ job)
			:_otherForm(form),
			_job(job)
		{
			InitializeComponent();


		}

	protected:

		~ResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Label^ labelInfo;
		System::Windows::Forms::Button^ buttonBack;
		System::ComponentModel::Container^ components;
		//Added
		Job^ _job;
		System::Windows::Forms::Form^ _otherForm;


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(39, 60);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(37, 17);
			this->labelInfo->TabIndex = 0;
			this->labelInfo->Text = L"Titre";
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(102, 135);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(75, 44);
			this->buttonBack->TabIndex = 1;
			this->buttonBack->Text = L"Back";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &ResultForm::buttonBack_Click);
			// 
			// ResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(279, 274);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->labelInfo);
			this->Name = L"ResultForm";
			this->Text = L"ResultForm";
			this->Load += gcnew System::EventHandler(this, &ResultForm::ResultForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void ResultForm_Load(System::Object^ sender, System::EventArgs^ e)
		{
			this->labelInfo->Text = this->_job->getJobTitle() + " - " + this->_job->getJobDescription();
		}
		System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->_otherForm->Show();
			this->Hide();

		}
	};
}
