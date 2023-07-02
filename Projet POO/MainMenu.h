#pragma once
#include "ClientMenu.h"
#include "StaffMenu.h"
#include "StockMenu.h"
#include "OrderMenu.h"
#include "StatsMenu.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainMenuForm : public System::Windows::Forms::Form
	{
	public:
		MainMenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~MainMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private :
		System::Windows::Forms::GroupBox^ groupBoxMainMenu;
		System::Windows::Forms::RadioButton^ radioButtonStats;
		System::Windows::Forms::RadioButton^ radioButtonReserve;
		System::Windows::Forms::RadioButton^ radioButtonOrder;
		System::Windows::Forms::RadioButton^ radioButtonStaff;
		System::Windows::Forms::RadioButton^ radioButtonClientChoice;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ buttonConfirmChoice;
		System::Windows::Forms::PictureBox^ pictureBox;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->groupBoxMainMenu = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonStats = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonReserve = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOrder = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonStaff = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonClientChoice = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonConfirmChoice = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxMainMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBoxMainMenu
			// 
			this->groupBoxMainMenu->Controls->Add(this->radioButtonStats);
			this->groupBoxMainMenu->Controls->Add(this->radioButtonReserve);
			this->groupBoxMainMenu->Controls->Add(this->radioButtonOrder);
			this->groupBoxMainMenu->Controls->Add(this->radioButtonStaff);
			this->groupBoxMainMenu->Controls->Add(this->radioButtonClientChoice);
			this->groupBoxMainMenu->Location = System::Drawing::Point(15, 43);
			this->groupBoxMainMenu->Name = L"groupBoxMainMenu";
			this->groupBoxMainMenu->Size = System::Drawing::Size(225, 172);
			this->groupBoxMainMenu->TabIndex = 0;
			this->groupBoxMainMenu->TabStop = false;
			// 
			// radioButtonStats
			// 
			this->radioButtonStats->AutoSize = true;
			this->radioButtonStats->Location = System::Drawing::Point(7, 116);
			this->radioButtonStats->Name = L"radioButtonStats";
			this->radioButtonStats->Size = System::Drawing::Size(79, 17);
			this->radioButtonStats->TabIndex = 4;
			this->radioButtonStats->TabStop = true;
			this->radioButtonStats->Text = L"Statistiques";
			this->radioButtonStats->UseVisualStyleBackColor = true;
			// 
			// radioButtonReserve
			// 
			this->radioButtonReserve->AutoSize = true;
			this->radioButtonReserve->Location = System::Drawing::Point(7, 92);
			this->radioButtonReserve->Name = L"radioButtonReserve";
			this->radioButtonReserve->Size = System::Drawing::Size(58, 17);
			this->radioButtonReserve->TabIndex = 3;
			this->radioButtonReserve->TabStop = true;
			this->radioButtonReserve->Text = L"Stocks";
			this->radioButtonReserve->UseVisualStyleBackColor = true;
			// 
			// radioButtonOrder
			// 
			this->radioButtonOrder->AutoSize = true;
			this->radioButtonOrder->Location = System::Drawing::Point(7, 68);
			this->radioButtonOrder->Name = L"radioButtonOrder";
			this->radioButtonOrder->Size = System::Drawing::Size(83, 17);
			this->radioButtonOrder->TabIndex = 2;
			this->radioButtonOrder->TabStop = true;
			this->radioButtonOrder->Text = L"Commandes";
			this->radioButtonOrder->UseVisualStyleBackColor = true;
			// 
			// radioButtonStaff
			// 
			this->radioButtonStaff->AutoSize = true;
			this->radioButtonStaff->Location = System::Drawing::Point(7, 44);
			this->radioButtonStaff->Name = L"radioButtonStaff";
			this->radioButtonStaff->Size = System::Drawing::Size(72, 17);
			this->radioButtonStaff->TabIndex = 1;
			this->radioButtonStaff->TabStop = true;
			this->radioButtonStaff->Text = L"Personnel";
			this->radioButtonStaff->UseVisualStyleBackColor = true;
			// 
			// radioButtonClientChoice
			// 
			this->radioButtonClientChoice->AutoSize = true;
			this->radioButtonClientChoice->Location = System::Drawing::Point(7, 20);
			this->radioButtonClientChoice->Name = L"radioButtonClientChoice";
			this->radioButtonClientChoice->Size = System::Drawing::Size(56, 17);
			this->radioButtonClientChoice->TabIndex = 0;
			this->radioButtonClientChoice->TabStop = true;
			this->radioButtonClientChoice->Text = L"Clients";
			this->radioButtonClientChoice->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenue sur le menu principal d\'Informapper,\r\nveuillez choisir dans quelle cat�"
				L"gorie aller :";
			// 
			// buttonConfirmChoice
			// 
			this->buttonConfirmChoice->Location = System::Drawing::Point(16, 221);
			this->buttonConfirmChoice->Name = L"buttonConfirmChoice";
			this->buttonConfirmChoice->Size = System::Drawing::Size(224, 23);
			this->buttonConfirmChoice->TabIndex = 2;
			this->buttonConfirmChoice->Text = L"Confirmer votre choix";
			this->buttonConfirmChoice->UseVisualStyleBackColor = true;
			this->buttonConfirmChoice->Click += gcnew System::EventHandler(this, &MainMenuForm::buttonConfirmChoice_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(247, 14);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(230, 230);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox->TabIndex = 3;
			this->pictureBox->TabStop = false;
			// 
			// MainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 261);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->buttonConfirmChoice);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBoxMainMenu);
			this->Name = L"MainMenuForm";
			this->Text = L"INFORMAPPER";
			this->Load += gcnew System::EventHandler(this, &MainMenuForm::MainMenuForm_Load);
			this->groupBoxMainMenu->ResumeLayout(false);
			this->groupBoxMainMenu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonConfirmChoice_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (radioButtonClientChoice->Checked == true)
			{
				ClientMenuForm^ nextForm = gcnew ClientMenuForm();
				this->Hide();
				nextForm->ShowDialog();
				this->Show();
			}

			if (radioButtonStaff->Checked == true)
			{
				StaffMenu^ nextform = gcnew StaffMenu();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}

			if (radioButtonOrder->Checked == true)
			{
				OrderMenu^ nextform = gcnew OrderMenu();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}

			if (radioButtonReserve->Checked == true)
			{
				StockMenu^ nextform = gcnew StockMenu();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}

			if (radioButtonStats->Checked == true)
			{
				StatsMenu^ nextform = gcnew StatsMenu();
				this->Hide();
				nextform->ShowDialog();
				this->Show();
			}
		}
		Void MainMenuForm_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->pictureBox->Image = gcnew System::Drawing::Bitmap("C:\\Users\\gauti\\source\\repos\\Projet POO\\Projet POO\\Logo.PNG");
		}
	};
}
