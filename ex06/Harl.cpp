#include "Harl.hpp"

void Harl::debug( void ){
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!" << "\n";
}

void Harl::info( void ){
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << "\n";
}

void Harl::warning( void ){
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << "\n";
}

void Harl::error( void ){
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now." << "\n";
}

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