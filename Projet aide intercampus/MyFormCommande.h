#pragma once
#include "Serv_Commande.h"

namespace POORattrapage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyFormCommande
	/// </summary>
	public ref class MyFormCommande : public System::Windows::Forms::Form
	{
	public:
		MyFormCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyFormCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt_id_personne;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txt_ville;

	private: System::Windows::Forms::TextBox^ txt_code_postal;


	private: System::Windows::Forms::TextBox^ txt_adresse;





	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ txt_date;

	private: System::Windows::Forms::TextBox^ txt_type_date;



	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ txt_ville_li;

	private: System::Windows::Forms::TextBox^ txt_code_postal_li;

	private: System::Windows::Forms::TextBox^ txt_adresse_livraison;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ txt_moyen_paiement;

	private: System::Windows::Forms::TextBox^ txt_id_date;

	private: System::Windows::Forms::TextBox^ txt_quantite;

	private: System::Windows::Forms::TextBox^ txt_ref_article;

	private: System::Windows::Forms::TextBox^ txt_ref_commande;


	private: NS_Comp_Svc::Serv_Commande^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ txt_type_adresse;

	private: System::Windows::Forms::Label^ label15;

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_id_personne = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_type_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txt_ville = (gcnew System::Windows::Forms::TextBox());
			this->txt_code_postal = (gcnew System::Windows::Forms::TextBox());
			this->txt_adresse = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_date = (gcnew System::Windows::Forms::TextBox());
			this->txt_type_date = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_ville_li = (gcnew System::Windows::Forms::TextBox());
			this->txt_code_postal_li = (gcnew System::Windows::Forms::TextBox());
			this->txt_adresse_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_moyen_paiement = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_date = (gcnew System::Windows::Forms::TextBox());
			this->txt_quantite = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_article = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_commande = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(13, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->RowTemplate->Height = 24;
			this->dgv_enr->Size = System::Drawing::Size(667, 578);
			this->dgv_enr->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(682, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Afficher";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCommande::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(682, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cr�er";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormCommande::button2_Click);
			// 
			// txt_id_personne
			// 
			this->txt_id_personne->Location = System::Drawing::Point(1005, 90);
			this->txt_id_personne->Name = L"txt_id_personne";
			this->txt_id_personne->Size = System::Drawing::Size(173, 22);
			this->txt_id_personne->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(874, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Num�ro client";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Type date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Adresse";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Code postal";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Ville";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txt_type_adresse);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->txt_ville);
			this->groupBox1->Controls->Add(this->txt_code_postal);
			this->groupBox1->Controls->Add(this->txt_adresse);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(868, 235);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(315, 147);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Adresse";
			// 
			// txt_type_adresse
			// 
			this->txt_type_adresse->Location = System::Drawing::Point(154, 21);
			this->txt_type_adresse->Name = L"txt_type_adresse";
			this->txt_type_adresse->Size = System::Drawing::Size(155, 22);
			this->txt_type_adresse->TabIndex = 13;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 21);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 17);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Type adresse";
			// 
			// txt_ville
			// 
			this->txt_ville->Location = System::Drawing::Point(154, 111);
			this->txt_ville->Name = L"txt_ville";
			this->txt_ville->Size = System::Drawing::Size(155, 22);
			this->txt_ville->TabIndex = 11;
			// 
			// txt_code_postal
			// 
			this->txt_code_postal->Location = System::Drawing::Point(154, 83);
			this->txt_code_postal->Name = L"txt_code_postal";
			this->txt_code_postal->Size = System::Drawing::Size(155, 22);
			this->txt_code_postal->TabIndex = 10;
			// 
			// txt_adresse
			// 
			this->txt_adresse->Location = System::Drawing::Point(84, 49);
			this->txt_adresse->Name = L"txt_adresse";
			this->txt_adresse->Size = System::Drawing::Size(225, 22);
			this->txt_adresse->TabIndex = 9;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txt_date);
			this->groupBox2->Controls->Add(this->txt_type_date);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(868, 131);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(315, 85);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Dates";
			// 
			// txt_date
			// 
			this->txt_date->Location = System::Drawing::Point(154, 52);
			this->txt_date->Name = L"txt_date";
			this->txt_date->Size = System::Drawing::Size(155, 22);
			this->txt_date->TabIndex = 8;
			// 
			// txt_type_date
			// 
			this->txt_type_date->Location = System::Drawing::Point(154, 24);
			this->txt_type_date->Name = L"txt_type_date";
			this->txt_type_date->Size = System::Drawing::Size(155, 22);
			this->txt_type_date->TabIndex = 7;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txt_ville_li);
			this->groupBox3->Controls->Add(this->txt_code_postal_li);
			this->groupBox3->Controls->Add(this->txt_adresse_livraison);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Location = System::Drawing::Point(514, 322);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(315, 124);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Adresse de livraison";
			// 
			// txt_ville_li
			// 
			this->txt_ville_li->Location = System::Drawing::Point(155, 91);
			this->txt_ville_li->Name = L"txt_ville_li";
			this->txt_ville_li->Size = System::Drawing::Size(154, 22);
			this->txt_ville_li->TabIndex = 14;
			// 
			// txt_code_postal_li
			// 
			this->txt_code_postal_li->Location = System::Drawing::Point(155, 56);
			this->txt_code_postal_li->Name = L"txt_code_postal_li";
			this->txt_code_postal_li->Size = System::Drawing::Size(154, 22);
			this->txt_code_postal_li->TabIndex = 13;
			// 
			// txt_adresse_livraison
			// 
			this->txt_adresse_livraison->Location = System::Drawing::Point(84, 28);
			this->txt_adresse_livraison->Name = L"txt_adresse_livraison";
			this->txt_adresse_livraison->Size = System::Drawing::Size(225, 22);
			this->txt_adresse_livraison->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 17);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Adresse";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 17);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Ville";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 61);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(83, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Code postal";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 28);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(147, 17);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Reference commande";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 59);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 17);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Reference article";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 96);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(143, 17);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Quantit� command�e";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 128);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 17);
			this->label13->TabIndex = 15;
			this->label13->Text = L"id_date";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 162);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(132, 17);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Moyen de paiement";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->txt_moyen_paiement);
			this->groupBox4->Controls->Add(this->txt_id_date);
			this->groupBox4->Controls->Add(this->txt_quantite);
			this->groupBox4->Controls->Add(this->txt_ref_article);
			this->groupBox4->Controls->Add(this->txt_ref_commande);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Location = System::Drawing::Point(868, 401);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(316, 189);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Infos commande";
			// 
			// txt_moyen_paiement
			// 
			this->txt_moyen_paiement->Location = System::Drawing::Point(155, 157);
			this->txt_moyen_paiement->Name = L"txt_moyen_paiement";
			this->txt_moyen_paiement->Size = System::Drawing::Size(155, 22);
			this->txt_moyen_paiement->TabIndex = 20;
			// 
			// txt_id_date
			// 
			this->txt_id_date->Location = System::Drawing::Point(154, 125);
			this->txt_id_date->Name = L"txt_id_date";
			this->txt_id_date->Size = System::Drawing::Size(155, 22);
			this->txt_id_date->TabIndex = 19;
			// 
			// txt_quantite
			// 
			this->txt_quantite->Location = System::Drawing::Point(154, 93);
			this->txt_quantite->Name = L"txt_quantite";
			this->txt_quantite->Size = System::Drawing::Size(155, 22);
			this->txt_quantite->TabIndex = 18;
			// 
			// txt_ref_article
			// 
			this->txt_ref_article->Location = System::Drawing::Point(154, 56);
			this->txt_ref_article->Name = L"txt_ref_article";
			this->txt_ref_article->Size = System::Drawing::Size(155, 22);
			this->txt_ref_article->TabIndex = 17;
			// 
			// txt_ref_commande
			// 
			this->txt_ref_commande->Location = System::Drawing::Point(154, 25);
			this->txt_ref_commande->Name = L"txt_ref_commande";
			this->txt_ref_commande->Size = System::Drawing::Size(155, 22);
			this->txt_ref_commande->TabIndex = 15;
			// 
			// MyFormCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 628);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_id_personne);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"MyFormCommande";
			this->Text = L"MyFormCommande";
			this->Load += gcnew System::EventHandler(this, &MyFormCommande::MyFormCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyFormCommande_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::Serv_Commande();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		int id_personne = Convert::ToInt16(this->txt_id_personne->Text);
		int ref_article = Convert::ToInt16(this->txt_ref_article->Text);
		int id_date = Convert::ToInt16(this->txt_id_date->Text);
		int quantite = Convert::ToInt16(this->txt_quantite->Text);
		int code_postal = Convert::ToInt16(txt_code_postal->Text);
		int date = Convert::ToInt16(this->txt_date->Text);
		this->oDs = this->oSvc->ajouterUneCommande(id_personne, ref_article, id_date, this->txt_ref_commande->Text, quantite, this->txt_moyen_paiement->Text, this->txt_adresse->Text, this->txt_type_adresse->Text, code_postal, this->txt_ville->Text, this->txt_type_date->Text, date);
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	};
}


//this->->Text,
//(int id_personne, int Reference_article, int id_date, System::String^ Reference_commande, int Quantite_commande, System::String^ Moyen_paiement, System::String^ id_adresse, System::String^ id_type_adresse, int id_CP, System::String^ id_ville, System::String^ id_type_date, int Date)