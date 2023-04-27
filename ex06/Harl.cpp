#include "Harl.hpp"

void Harl::debug( void ){
	std::cout << "[ DEBUG ]\n";
	std::cout << "DEBUG_COMMENT" << "\n";
}

void Harl::info( void ){
	std::cout << "[ INFO ]\n";
	std::cout << "INFO_COMMENT" << "\n";
}

void Harl::warning( void ){
	std::cout << "[ WARNING ]\n";
	std::cout << "WARNING_COMMENT" << "\n";
}

void Harl::error( void ){
	std::cout << "[ ERROR ]\n";
	std::cout << "ERROR_COMMENT" << "\n";
}

// void Harl::complain( std::string level ){
// 	void		(Harl::*ptr_complain[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
// 	std::string	comments[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
// 	for (int i = 0; i < 4; i++) {
// 		if (level == comments[i]){
// 			for (int x = i; x < 4; x++) {
// 				std::cout << "[ "<< comments[i] << " ]\n";
// 				(this->*ptr_complain[x])();
// 				std::cout << "\n";
// 			}
// 			return ;
// 		}
// 	}
// 	std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
// }

enum levels{DEBUG, INFO, WARNING, ERROR, NONE};

levels	stringToEnum(std::string level){
	if (level == "DEBUG")
		return DEBUG;
	else if (level == "INFO")
		return INFO;
	else if (level == "WARNING")
		return WARNING;
	else if (level == "ERROR")
		return ERROR;
	else
		return NONE;
}

void Harl::complain( std::string level ){
	void		(Harl::*ptr_complain[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	comments[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	switch (stringToEnum(level))
	{
	case 0:
		(this->*ptr_complain[0])();
	case 1:
		(this->*ptr_complain[1])();
	case 2:
		(this->*ptr_complain[2])();
	case 3:
		(this->*ptr_complain[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
		break;
	}
}