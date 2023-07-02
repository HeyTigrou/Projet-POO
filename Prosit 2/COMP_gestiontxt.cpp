#include "COMP_gestiontxt.h"

void COMP::COMP_gestiontxt::ecrire(string text, string path)
{
	f_out.open(path, std::ofstream::out);
	f_out << text;
	f_out.close();
}
string COMP::COMP_gestiontxt::lire(string path)
{
	string line;

	this->message.clear();

	f_in.open(path);
	while (getline(f_in, line))
	{
		this->message.append(line);
	}
	f_in.close();

	return this->message;
}
void COMP::COMP_gestiontxt::ecrireBIN(string text, string path, int buffLenght)
{
	int i;
	const char* t = &text[0];
	const char* p = &path[0];

	this->file = fopen(p, "w+b");
	for (i = 0; i < buffLenght; i++)
	{
		fprintf(file, "%c", t[i]);
	}

	fclose(file);
}
string COMP::COMP_gestiontxt::lireBIN(string path, int buffLenght)
{
	int i;
	string s1;
	string s2;

	const char* p = &path[0];

	i = 0;
	file = fopen(p, "r+b");
	fseek(file, i, SEEK_SET);

	for (i = 0; i < buffLenght; i++)
	{
		s1 = (char)fgetc(file);
		s2.append(s1);
	}

	fclose(file);

	return s2;
}