#pragma once 
#include "CL_svc_gestionPersonnes.h" 
#include "CL_svc_afficherAdresses.h"

namespace Prosit6 {

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
    private: 
        System::Windows::Forms::Label^ lbl_id;
        System::Windows::Forms::TextBox^ txt_idPersonne;
        System::Windows::Forms::Label^ lbl_nom;
        System::Windows::Forms::TextBox^ txt_nom;
        System::Windows::Forms::Label^ lbl_prenom;
        System::Windows::Forms::TextBox^ txt_prenom;
        System::Windows::Forms::Label^ lbl_message;
        System::Windows::Forms::TextBox^ txt_message_clients;
        System::Windows::Forms::Button^ btn_first;
        System::Windows::Forms::Button^ btn_previous;
        System::Windows::Forms::Button^ btn_next;
        System::Windows::Forms::Button^ btn_end;
        System::Windows::Forms::Button^ btn_nouveau;
        System::Windows::Forms::Button^ btn_modifier;
        System::Windows::Forms::Button^ btn_sup;
        System::Windows::Forms::Button^ btn_enregistrer;
        NS_Svc::CL_svc_gestionPersonnes^ processusPersonnes;
        Data::DataSet^ ds;
        int index;
        String^ mode;
        
        System::Windows::Forms::DataGridView^ dgv_enr;
        System::Windows::Forms::Button^ btn_load;
        System::Windows::Forms::Button^ btn_insert;
        System::Windows::Forms::Button^ btn_delete;
        System::Windows::Forms::Button^ btn_update;
        System::Windows::Forms::TextBox^ txt_idAdresse;
        System::Windows::Forms::TextBox^ txt_Adresse;
        System::Windows::Forms::TextBox^ txt_Ville;
        System::Windows::Forms::TextBox^ txt_codePostal;
        System::Windows::Forms::TextBox^ txt_IdPers;
        System::Windows::Forms::TextBox^ txt_message_adresse;
        
        
        NS_Comp_Svc::CL_svc_afficherAdresses^ oSvc;
        System::Data::DataSet^ oDs;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;


    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code 
        void InitializeComponent(void)
        {
            this->lbl_id = (gcnew System::Windows::Forms::Label());
            this->txt_idPersonne = (gcnew System::Windows::Forms::TextBox());
            this->lbl_nom = (gcnew System::Windows::Forms::Label());
            this->txt_nom = (gcnew System::Windows::Forms::TextBox());
            this->lbl_prenom = (gcnew System::Windows::Forms::Label());
            this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
            this->lbl_message = (gcnew System::Windows::Forms::Label());
            this->txt_message_clients = (gcnew System::Windows::Forms::TextBox());
            this->btn_first = (gcnew System::Windows::Forms::Button());
            this->btn_previous = (gcnew System::Windows::Forms::Button());
            this->btn_next = (gcnew System::Windows::Forms::Button());
            this->btn_end = (gcnew System::Windows::Forms::Button());
            this->btn_nouveau = (gcnew System::Windows::Forms::Button());
            this->btn_modifier = (gcnew System::Windows::Forms::Button());
            this->btn_sup = (gcnew System::Windows::Forms::Button());
            this->btn_enregistrer = (gcnew System::Windows::Forms::Button());
            this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
            this->btn_load = (gcnew System::Windows::Forms::Button());
            this->btn_insert = (gcnew System::Windows::Forms::Button());
            this->btn_delete = (gcnew System::Windows::Forms::Button());
            this->btn_update = (gcnew System::Windows::Forms::Button());
            this->txt_idAdresse = (gcnew System::Windows::Forms::TextBox());
            this->txt_Adresse = (gcnew System::Windows::Forms::TextBox());
            this->txt_Ville = (gcnew System::Windows::Forms::TextBox());
            this->txt_codePostal = (gcnew System::Windows::Forms::TextBox());
            this->txt_IdPers = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->txt_message_adresse = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
            this->SuspendLayout();
            // 
            // lbl_id
            // 
            this->lbl_id->AutoSize = true;
            this->lbl_id->Location = System::Drawing::Point(9, 9);
            this->lbl_id->Name = L"lbl_id";
            this->lbl_id->Size = System::Drawing::Size(66, 13);
            this->lbl_id->TabIndex = 0;
            this->lbl_id->Text = L"ID Personne";
            // 
            // txt_idPersonne
            // 
            this->txt_idPersonne->Location = System::Drawing::Point(12, 25);
            this->txt_idPersonne->Name = L"txt_idPersonne";
            this->txt_idPersonne->ReadOnly = true;
            this->txt_idPersonne->Size = System::Drawing::Size(202, 20);
            this->txt_idPersonne->TabIndex = 1;
            // 
            // lbl_nom
            // 
            this->lbl_nom->AutoSize = true;
            this->lbl_nom->Location = System::Drawing::Point(9, 51);
            this->lbl_nom->Name = L"lbl_nom";
            this->lbl_nom->Size = System::Drawing::Size(29, 13);
            this->lbl_nom->TabIndex = 2;
            this->lbl_nom->Text = L"Nom";
            // 
            // txt_nom
            // 
            this->txt_nom->Location = System::Drawing::Point(12, 67);
            this->txt_nom->Name = L"txt_nom";
            this->txt_nom->Size = System::Drawing::Size(202, 20);
            this->txt_nom->TabIndex = 3;
            // 
            // lbl_prenom
            // 
            this->lbl_prenom->AutoSize = true;
            this->lbl_prenom->Location = System::Drawing::Point(9, 93);
            this->lbl_prenom->Name = L"lbl_prenom";
            this->lbl_prenom->Size = System::Drawing::Size(43, 13);
            this->lbl_prenom->TabIndex = 4;
            this->lbl_prenom->Text = L"Prénom";
            // 
            // txt_prenom
            // 
            this->txt_prenom->Location = System::Drawing::Point(12, 109);
            this->txt_prenom->Name = L"txt_prenom";
            this->txt_prenom->Size = System::Drawing::Size(202, 20);
            this->txt_prenom->TabIndex = 5;
            // 
            // lbl_message
            // 
            this->lbl_message->AutoSize = true;
            this->lbl_message->Location = System::Drawing::Point(9, 320);
            this->lbl_message->Name = L"lbl_message";
            this->lbl_message->Size = System::Drawing::Size(84, 13);
            this->lbl_message->TabIndex = 6;
            this->lbl_message->Text = L"Message Clients";
            // 
            // txt_message_clients
            // 
            this->txt_message_clients->Location = System::Drawing::Point(12, 336);
            this->txt_message_clients->Multiline = true;
            this->txt_message_clients->Name = L"txt_message_clients";
            this->txt_message_clients->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->txt_message_clients->Size = System::Drawing::Size(199, 50);
            this->txt_message_clients->TabIndex = 7;
            // 
            // btn_first
            // 
            this->btn_first->Location = System::Drawing::Point(12, 146);
            this->btn_first->Name = L"btn_first";
            this->btn_first->Size = System::Drawing::Size(46, 23);
            this->btn_first->TabIndex = 8;
            this->btn_first->Text = L"<<";
            this->btn_first->UseVisualStyleBackColor = true;
            this->btn_first->Click += gcnew System::EventHandler(this, &MyForm::btn_first_Click);
            // 
            // btn_previous
            // 
            this->btn_previous->Location = System::Drawing::Point(64, 146);
            this->btn_previous->Name = L"btn_previous";
            this->btn_previous->Size = System::Drawing::Size(46, 23);
            this->btn_previous->TabIndex = 9;
            this->btn_previous->Text = L"<";
            this->btn_previous->UseVisualStyleBackColor = true;
            this->btn_previous->Click += gcnew System::EventHandler(this, &MyForm::btn_previous_Click);
            // 
            // btn_next
            // 
            this->btn_next->Location = System::Drawing::Point(116, 146);
            this->btn_next->Name = L"btn_next";
            this->btn_next->Size = System::Drawing::Size(46, 23);
            this->btn_next->TabIndex = 10;
            this->btn_next->Text = L">";
            this->btn_next->UseVisualStyleBackColor = true;
            this->btn_next->Click += gcnew System::EventHandler(this, &MyForm::btn_next_Click);
            // 
            // btn_end
            // 
            this->btn_end->Location = System::Drawing::Point(168, 146);
            this->btn_end->Name = L"btn_end";
            this->btn_end->Size = System::Drawing::Size(46, 23);
            this->btn_end->TabIndex = 11;
            this->btn_end->Text = L">>";
            this->btn_end->UseVisualStyleBackColor = true;
            this->btn_end->Click += gcnew System::EventHandler(this, &MyForm::btn_end_Click);
            // 
            // btn_nouveau
            // 
            this->btn_nouveau->Location = System::Drawing::Point(12, 183);
            this->btn_nouveau->Name = L"btn_nouveau";
            this->btn_nouveau->Size = System::Drawing::Size(82, 36);
            this->btn_nouveau->TabIndex = 12;
            this->btn_nouveau->Text = L"Nouveau";
            this->btn_nouveau->UseVisualStyleBackColor = true;
            this->btn_nouveau->Click += gcnew System::EventHandler(this, &MyForm::btn_nouveau_Click);
            // 
            // btn_modifier
            // 
            this->btn_modifier->Location = System::Drawing::Point(12, 227);
            this->btn_modifier->Name = L"btn_modifier";
            this->btn_modifier->Size = System::Drawing::Size(82, 36);
            this->btn_modifier->TabIndex = 13;
            this->btn_modifier->Text = L"Modifier";
            this->btn_modifier->UseVisualStyleBackColor = true;
            this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm::btn_modifier_Click);
            // 
            // btn_sup
            // 
            this->btn_sup->Location = System::Drawing::Point(12, 274);
            this->btn_sup->Name = L"btn_sup";
            this->btn_sup->Size = System::Drawing::Size(82, 36);
            this->btn_sup->TabIndex = 14;
            this->btn_sup->Text = L"Supprimer";
            this->btn_sup->UseVisualStyleBackColor = true;
            this->btn_sup->Click += gcnew System::EventHandler(this, &MyForm::btn_sup_Click);
            // 
            // btn_enregistrer
            // 
            this->btn_enregistrer->Location = System::Drawing::Point(316, 218);
            this->btn_enregistrer->Name = L"btn_enregistrer";
            this->btn_enregistrer->Size = System::Drawing::Size(107, 92);
            this->btn_enregistrer->TabIndex = 15;
            this->btn_enregistrer->Text = L"ENREGISTRER";
            this->btn_enregistrer->UseVisualStyleBackColor = true;
            this->btn_enregistrer->Click += gcnew System::EventHandler(this, &MyForm::btn_enregistrer_Click);
            // 
            // dgv_enr
            // 
            this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dgv_enr->Location = System::Drawing::Point(235, 9);
            this->dgv_enr->Name = L"dgv_enr";
            this->dgv_enr->Size = System::Drawing::Size(472, 203);
            this->dgv_enr->TabIndex = 0;
            // 
            // btn_load
            // 
            this->btn_load->Location = System::Drawing::Point(235, 218);
            this->btn_load->Name = L"btn_load";
            this->btn_load->Size = System::Drawing::Size(75, 92);
            this->btn_load->TabIndex = 1;
            this->btn_load->Text = L"Load DB";
            this->btn_load->UseVisualStyleBackColor = true;
            this->btn_load->Click += gcnew System::EventHandler(this, &MyForm::btn_load_Click);
            // 
            // btn_insert
            // 
            this->btn_insert->Location = System::Drawing::Point(470, 216);
            this->btn_insert->Name = L"btn_insert";
            this->btn_insert->Size = System::Drawing::Size(75, 90);
            this->btn_insert->TabIndex = 2;
            this->btn_insert->Text = L"INS";
            this->btn_insert->UseVisualStyleBackColor = true;
            this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
            // 
            // btn_delete
            // 
            this->btn_delete->Location = System::Drawing::Point(632, 216);
            this->btn_delete->Name = L"btn_delete";
            this->btn_delete->Size = System::Drawing::Size(75, 92);
            this->btn_delete->TabIndex = 3;
            this->btn_delete->Text = L"DEL";
            this->btn_delete->UseVisualStyleBackColor = true;
            this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
            // 
            // btn_update
            // 
            this->btn_update->Location = System::Drawing::Point(551, 216);
            this->btn_update->Name = L"btn_update";
            this->btn_update->Size = System::Drawing::Size(75, 90);
            this->btn_update->TabIndex = 4;
            this->btn_update->Text = L"UPD";
            this->btn_update->UseVisualStyleBackColor = true;
            // 
            // txt_idAdresse
            // 
            this->txt_idAdresse->Location = System::Drawing::Point(713, 25);
            this->txt_idAdresse->Name = L"txt_idAdresse";
            this->txt_idAdresse->Size = System::Drawing::Size(307, 20);
            this->txt_idAdresse->TabIndex = 5;
            // 
            // txt_Adresse
            // 
            this->txt_Adresse->Location = System::Drawing::Point(713, 67);
            this->txt_Adresse->Name = L"txt_Adresse";
            this->txt_Adresse->Size = System::Drawing::Size(307, 20);
            this->txt_Adresse->TabIndex = 6;
            // 
            // txt_Ville
            // 
            this->txt_Ville->Location = System::Drawing::Point(713, 109);
            this->txt_Ville->Name = L"txt_Ville";
            this->txt_Ville->Size = System::Drawing::Size(307, 20);
            this->txt_Ville->TabIndex = 7;
            // 
            // txt_codePostal
            // 
            this->txt_codePostal->Location = System::Drawing::Point(713, 149);
            this->txt_codePostal->Name = L"txt_codePostal";
            this->txt_codePostal->Size = System::Drawing::Size(307, 20);
            this->txt_codePostal->TabIndex = 7;
            // 
            // txt_IdPers
            // 
            this->txt_IdPers->Location = System::Drawing::Point(713, 192);
            this->txt_IdPers->Name = L"txt_IdPers";
            this->txt_IdPers->Size = System::Drawing::Size(307, 20);
            this->txt_IdPers->TabIndex = 7;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(713, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(59, 13);
            this->label1->TabIndex = 16;
            this->label1->Text = L"ID Adresse";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(713, 51);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(45, 13);
            this->label2->TabIndex = 17;
            this->label2->Text = L"Adresse";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(713, 93);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(26, 13);
            this->label3->TabIndex = 18;
            this->label3->Text = L"Ville";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(713, 132);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(66, 13);
            this->label4->TabIndex = 19;
            this->label4->Text = L"Code postal ";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(713, 172);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(66, 13);
            this->label5->TabIndex = 20;
            this->label5->Text = L"ID Personne";
            // 
            // txt_message_adresse
            // 
            this->txt_message_adresse->Location = System::Drawing::Point(235, 336);
            this->txt_message_adresse->Multiline = true;
            this->txt_message_adresse->Name = L"txt_message_adresse";
            this->txt_message_adresse->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->txt_message_adresse->Size = System::Drawing::Size(472, 50);
            this->txt_message_adresse->TabIndex = 7;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(232, 320);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(91, 13);
            this->label6->TabIndex = 21;
            this->label6->Text = L"Message Adresse";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1078, 397);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->btn_enregistrer);
            this->Controls->Add(this->btn_sup);
            this->Controls->Add(this->btn_modifier);
            this->Controls->Add(this->btn_nouveau);
            this->Controls->Add(this->btn_end);
            this->Controls->Add(this->btn_next);
            this->Controls->Add(this->btn_previous);
            this->Controls->Add(this->btn_first);
            this->Controls->Add(this->txt_message_clients);
            this->Controls->Add(this->lbl_message);
            this->Controls->Add(this->txt_prenom);
            this->Controls->Add(this->lbl_prenom);
            this->Controls->Add(this->txt_nom);
            this->Controls->Add(this->lbl_nom);
            this->Controls->Add(this->txt_idPersonne);
            this->Controls->Add(this->lbl_id);
            this->Controls->Add(this->txt_idAdresse);
            this->Controls->Add(this->txt_Adresse);
            this->Controls->Add(this->txt_Ville);
            this->Controls->Add(this->txt_codePostal);
            this->Controls->Add(this->txt_IdPers);
            this->Controls->Add(this->btn_update);
            this->Controls->Add(this->btn_delete);
            this->Controls->Add(this->btn_insert);
            this->Controls->Add(this->btn_load);
            this->Controls->Add(this->txt_message_adresse);
            this->Controls->Add(this->dgv_enr);
            this->Name = L"MyForm";
            this->Text = L"A2 POO Corbeille 6";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion 

        System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
        {
            this->index = 0;
            this->mode = "RIEN";
            this->ds = gcnew Data::DataSet();
            this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
            this->oSvc = gcnew NS_Comp_Svc::CL_svc_afficherAdresses();

            this->loadData(this->index);

            this->txt_message_clients->Text = "Data chargées";
        }

        void loadData(int index)
        {
            this->ds->Clear();
            this->ds = this->processusPersonnes->ListePersonnes("liste");
            this->txt_idPersonne->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
            this->txt_nom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
            this->txt_prenom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
        }

        System::Void btn_first_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->index = 0;
            this->loadData(this->index);
            this->txt_message_clients->Text = "Enregistrement n° : " + (this->index + 1);
        }

        System::Void btn_previous_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (this->index > 0)
            {
                this->index--;
                this->loadData(this->index);
                this->txt_message_clients->Text = "Enregistrement n° : " + (this->index + 1);
            }
        }

        System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (this->index < this->ds->Tables["liste"]->Rows->Count - 1)
            {
                this->index++;
                this->loadData(this->index);
                this->txt_message_clients->Text = "Enregistrement n° : " + (this->index + 1);
            }
        }

        System::Void btn_end_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->index = this->ds->Tables["liste"]->Rows->Count - 1;
            this->loadData(this->index);
            this->txt_message_clients->Text = "Enregistrement n° : " + (this->index + 1);
        }

        System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->txt_idPersonne->Clear();
            this->txt_nom->Clear();
            this->txt_prenom->Clear();
            this->mode = "nouv";
            this->txt_message_clients->Text = "Veuillez saisir les information de la nouvelle personne et enregistrer";
        }

        System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->mode = "maj";
            this->txt_message_clients->Text = "Veuillez modifier les information de la nouvelle courante et enregistrer.";
        }

        System::Void btn_sup_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->mode = "sup";
            this->txt_message_clients->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";
        }

        System::Void btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (this->mode == "nouv")
            {
                int Id;
                Id = this->processusPersonnes->ajouter(this->txt_nom->Text, this->txt_prenom->Text);
                this->txt_message_adresse->Text = "L'ID généré est le : " + Id + ". ";
            }
            else if (this->mode == "maj")
            {
                this->processusPersonnes->modifier(Convert::ToInt32(this->txt_idPersonne->Text), this->txt_nom->Text, this->txt_prenom->Text);
            }
            else if (this->mode == "sup")
            {
                this->processusPersonnes->supprimer(Convert::ToInt32(this->txt_idPersonne->Text));
            }

            this->index = 0;
            this->loadData(this->index);
            this->txt_message_adresse->Text = "Traitement terminé.";
        }

        System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->dgv_enr->Refresh();
            this->oDs = this->oSvc->selectionnerToutesLesAdresses("Rsl");
            this->dgv_enr->DataSource = this->oDs;
            this->dgv_enr->DataMember = "Rsl";
        }

        System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->oSvc->ajouterAdresse(this->txt_Adresse->Text, this->txt_Ville->Text, Convert::ToInt32(this->txt_codePostal->Text), Convert::ToInt32(this->txt_IdPers->Text));
        }

        System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->oSvc->effacerAdresse(Convert::ToInt32(this->txt_idAdresse->Text));
            this->txt_message_adresse->Text += "delete";
        }
    };
}
