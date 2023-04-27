#include "Harl.hpp"

void Harl::debug( void ){
	std::cout << "DEBUG_COMMENT" << "\n";
}

void Harl::info( void ){
	std::cout << "INFO_COMMENT" << "\n";
}

void Harl::warning( void ){
	std::cout << "WARNING_COMMENT" << "\n";
}

void Harl::error( void ){
	std::cout << "ERROR_COMMENT" << "\n";
}

void Harl::complain( std::string level ){
	void		(Harl::*ptr_complain[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	comments[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (level == comments[i]){
			(this->*ptr_complain[i])();
			return ;
		}
	}
	std::cout << "Error" << "\n";
}