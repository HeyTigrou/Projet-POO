#include "CLcesar.h"

CLcesar::CLcesar(void) {
	int i;
	int c;
	int d;

	i = 0;
	c = 'a';

	for (i = 0; i < 26; i++) {
		this->alphabetCL[i] = c;
		c++;
	}

	d = 'a';
	for (i = 0; i < 26; i++) {
		d++;
		this->alphabetCR[i] = d;
	}
	this->alphabetCL[26] = ' ';
	this->alphabetCR[26] = '*';
	this->alphabetCR[25] = 'a';
}

char CLcesar::getCL(char cCR)
{
	int i;
	int c;

	for (i = 0; i < 27; i++)
	{
		if (cCR == this->alphabetCR[i])
		{
			c = this->alphabetCL[i];
			i = 27;
		}
	}
	return c;
}

char CLcesar::getCR(char cCL)
{
	int i;
	int c;

	for (i = 0; i < 27; i++)
	{
		if (cCL == this->alphabetCL[i])
		{
			c = this->alphabetCR[i];
			i = 27;
		}
	}
	return c;
}