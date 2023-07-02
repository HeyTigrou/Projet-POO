#include "CL_svc_afficherAdresses.h"

NS_Comp_Svc::CL_svc_afficherAdresses::CL_svc_afficherAdresses(void)
{
	this->oCad = gcnew NS_Composants::CL_CAD();
	this->oMappTB = gcnew NS_Composants::CL_map_TBADRESSES();
}

DataSet^ NS_Comp_Svc::CL_svc_afficherAdresses::selectionnerToutesLesAdresses(String^ dataTableName)
{
	String^ sql;
	sql = this->oMappTB->SELECT();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CL_svc_afficherAdresses::ajouterAdresse(String^ Adresse, String^ Ville, int CP, int Id_personne) {
	String^ sql;
	this->oMappTB->setAdresse(Adresse);
	this->oMappTB->setVille(Ville);
	this->oMappTB->setCode_Postal(CP);
	this->oMappTB->setId_personne(Id_personne);

	sql = this->oMappTB->INSERT();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CL_svc_afficherAdresses::effacerAdresse(int id) {
	String^ sql;
	this->oMappTB->setId_adresses(id);
	sql = this->oMappTB->DELETE();
	this->oCad->actionRows(sql);
}