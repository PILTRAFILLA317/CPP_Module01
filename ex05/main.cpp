#include "Harl.hpp"

int main(void){
	Harl	harl;
	std::string level;
	std::cout << "> ";
	std::getline(std::cin, level);
	while (level != "EXIT"){
		harl.complain(level);
		std::cout << "> ";
		std::getline(std::cin, level);
	}
}