#include "classe.h"
#include <iostream>

void classe::ecrire(std::string text, std::string path) {
	f_out.open(path, std::ofstream::out);
	f_out << text;
	f_out.close();
}

std::string classe::lire(std::string path) {
	std::string line;
	this->message.clear();
	f_in.open(path);
	while (std::getline(f_in, line)) {
		this->message.append(line);
	}
	f_in.close();
	return this->message;
}
