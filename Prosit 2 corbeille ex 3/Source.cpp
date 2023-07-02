#include "CLcesar.h"

int main() {
	CLcesar* cesar;
	cesar = new CLcesar();
	std::cout << cesar->getCR('a') << std::endl;
	std::cout << cesar->getCR('b') << std::endl;
	std::cout << cesar->getCR('c') << std::endl;
	std::cout << cesar->getCR('d') << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << cesar->getCL('b') << std::endl;
	std::cout << cesar->getCL('c') << std::endl;
	std::cout << cesar->getCL('d') << std::endl;
	std::cout << cesar->getCL('e') << std::endl;
	system("PAUSE");
}
