#pragma once
class CLvoiture
{
private :
	int vitesseMax;
	int vitesse;
	int acceleration;
	int idV;
	static int idVoiture;
	void ini_obj(int,int);

public :
	CLvoiture(void);
	CLvoiture(int, int);
	CLvoiture(CLvoiture&);
	int getAcceleration();
	int getVitesseMax();
	int getID();
	void setAcceleration(int);
	void setVitesseMax(int);
	void accelerer(void);
};

