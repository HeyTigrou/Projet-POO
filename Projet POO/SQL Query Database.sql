CREATE TABLE ville(
   IdVille INT,
   NomVille VARCHAR(30),
   PRIMARY KEY(IdVille)
);

CREATE TABLE nature(
   IdNature INT,
   NomNature VARCHAR(30),
   PRIMARY KEY(IdNature)
);

CREATE TABLE produit(
   RefProduit INT,
   DesignationProduit VARCHAR(50),
   PrixHTProduit Money,
   QuantiteStockProduit INT,
   SeuilReaprovisionnementProduit INT,
   TVAProduit DECIMAL(10,2),
   TauxRemiseProduit DECIMAL(10,2),
   SeuilRemiseProduit INT,
   IdNature INT NOT NULL,
   PRIMARY KEY(RefProduit),
   FOREIGN KEY(IdNature) REFERENCES nature(IdNature)
);

CREATE TABLE periode(
   IdentifiantDate DATE,
   DatePrix DATE,
   PRIMARY KEY(IdentifiantDate)
);

CREATE TABLE Couleur(
   IdCouleur VARCHAR(50),
   TypeCouleur VARCHAR(30),
   PRIMARY KEY(IdCouleur)
);

CREATE TABLE personne(
   IdPersonne INT,
   NomPersonne VARCHAR(30),
   PrenomPersonne VARCHAR(30),
   PRIMARY KEY(IdPersonne)
);

CREATE TABLE client(
   IdPersonne INT,
   DateNaissanceClient DATE,
   DatePremierAchatClient DATE,
   PRIMARY KEY(IdPersonne),
   FOREIGN KEY(IdPersonne) REFERENCES personne(IdPersonne)
);

CREATE TABLE adresse(
   IdAdresse INT,
   CodePostalAdresse INT,
   RueAdresse VARCHAR(30),
   NumeroRueAdresse INT,
   IdVille INT NOT NULL,
   PRIMARY KEY(IdAdresse),
   FOREIGN KEY(IdVille) REFERENCES ville(IdVille)
);

CREATE TABLE facture(
   IdFacture INT,
   IdAdresse INT NOT NULL,
   PRIMARY KEY(IdFacture),
   FOREIGN KEY(IdAdresse) REFERENCES adresse(IdAdresse)
);

CREATE TABLE personnel(
   IdPersonne_1 INT,
   DateEmbauchePersonnelle DATE,
   IdAdresse INT NOT NULL,
   IdPersonne INT,
   PRIMARY KEY(IdPersonne_1),
   FOREIGN KEY(IdPersonne_1) REFERENCES personne(IdPersonne),
   FOREIGN KEY(IdAdresse) REFERENCES adresse(IdAdresse),
   FOREIGN KEY(IdPersonne) REFERENCES personnel(IdPersonne_1)
);

CREATE TABLE commande(
   IdCommande INT,
   ReferenceCommande VARCHAR(50),
   DateLivraisonPrevuCommande DATE,
   DateEmissionCommande DATE,
   DatePaimentCommande DATE,
   MoyenPaimentCommande VARCHAR(30),
   DateEnregistrementSoldeCommande DATE,
   IdPersonne INT NOT NULL,
   IdFacture INT NOT NULL,
   IdAdresse INT NOT NULL,
   PRIMARY KEY(IdCommande),
   FOREIGN KEY(IdPersonne) REFERENCES client(IdPersonne),
   FOREIGN KEY(IdFacture) REFERENCES facture(IdFacture),
   FOREIGN KEY(IdAdresse) REFERENCES adresse(IdAdresse)
);

CREATE TABLE Contenir(
   IdCommande INT,
   RefProduit INT,
   QuantiteCommande INT,
   PRIMARY KEY(IdCommande, RefProduit),
   FOREIGN KEY(IdCommande) REFERENCES commande(IdCommande),
   FOREIGN KEY(RefProduit) REFERENCES produit(RefProduit)
);

CREATE TABLE Associer(
   IdNature INT,
   RefProduit INT,
   IdentifiantDate DATE,
   IdCouleur VARCHAR(50),
   Prix Money,
   PRIMARY KEY(IdNature, RefProduit, IdentifiantDate, IdCouleur),
   FOREIGN KEY(IdNature) REFERENCES nature(IdNature),
   FOREIGN KEY(RefProduit) REFERENCES produit(RefProduit),
   FOREIGN KEY(IdentifiantDate) REFERENCES periode(IdentifiantDate),
   FOREIGN KEY(IdCouleur) REFERENCES Couleur(IdCouleur)
);
