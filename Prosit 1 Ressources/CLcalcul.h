#pragma once
class CLcalcul
{
private :
	int NB1;
	int NB2;
	void ini_obj(int, int);

public :
	CLcalcul(void);
	CLcalcul(int, int);
	int add(void);
	int sous(void);
	void setNB1(int);
	void setNB2(int);
	int getNB1(void);
	int getNB2(void);
};

